# **React Router v6.4.2**

## **Feature Overview**

### **Client Side Routing**

React Router enables "client side routing".

In traditional websites, the browser requests a document from a web server, downloads and evaluates CSS and JavaScript assets, and renders the HTML sent from the server. When the user clicks a link, it starts the process all over again for a new page.

Client side routing allows your app to update the URL from a link click without making another request for another document from the server. Instead, your app can immediately render some new UI and make data requests with `fetch` to update the page with new information.

This enables faster user experiences because the browser doesn't need to request an entirely new document or re-evaluate CSS and JavaScript assets for the next page. It also enables more dynamic user experiences with things like animation.

Client side routing is enabled by creating a `Router` and linking/submitting to pages with `Link` and `<Form>`:

```
import React from "react";
import { createRoot } from "react-dom/client";
import {
  createBrowserRouter,
  RouterProvider,
  Route,
  Link,
} from "react-router-dom";

const router = createBrowserRouter([
  {
    path: "/",
    element: (
      <div>
        <h1>Hello World</h1>
        <Link to="about">About Us</Link>
      </div>
    ),
  },
  {
    path: "about",
    element: <div>About</div>,
  },
]);

createRoot(document.getElementById("root")).render(
  <RouterProvider router={router} />
);
```

### **Nested Routes**

Nested Routing is the general idea of coupling segments of the URL to component hierarchy and data. React Router's nested routes were inspired by the routing system in Ember.js circa 2014. The Ember team realized that in nearly every case, segments of the URL determine:

* The layouts to render on the page
* The data dependencies of those layouts

React Router embraces this convention with APIs for creating nested layouts coupled to URL segments and data.

```
// Configure nested routes with JSX
createBrowserRouter(
  createRoutesFromElements(
    <Route path="/" element={<Root />}>
      <Route path="contact" element={<Contact />} />
      <Route
        path="dashboard"
        element={<Dashboard />}
        loader={({ request }) =>
          fetch("/api/dashboard.json", {
            signal: request.signal,
          })
        }
      />
      <Route element={<AuthLayout />}>
        <Route
          path="login"
          element={<Login />}
          loader={redirectIfUser}
        />
        <Route path="logout" />
      </Route>
    </Route>
  )
);

// Or use plain objects
createBrowserRouter([
  {
    path: "/",
    element: <Root />,
    children: [
      {
        path: "contact",
        element: <Contact />,
      },
      {
        path: "dashboard",
        element: <Dashboard />,
        loader: ({ request }) =>
          fetch("/api/dashboard.json", {
            signal: request.signal,
          }),
      },
      {
        element: <AuthLayout />,
        children: [
          {
            path: "login",
            element: <Login />,
            loader: redirectIfUser,
          },
          {
            path: "logout",
            action: logoutUser,
          },
        ],
      },
    ],
  },
]);
```

### **Dynamic Segments**

Segments of the URL can be dynamic placeholders that are parsed and provided to various apis.

```
<Route path="projects/:projectId/tasks/:taskId" />
```

The two segments with `:` are dynamic, and provided to the following APIs:

```
// If the current location is /projects/abc/tasks/3
<Route
  // sent to loaders
  loader={({ params }) => {
    params.projectId; // abc
    params.taskId; // 3
  }}
  // and actions
  action={({ params }) => {
    params.projectId; // abc
    params.taskId; // 3
  }}
  element={<Task />}
/>;

function Task() {
  // returned from `useParams`
  const params = useParams();
  params.projectId; // abc
  params.taskId; // 3
}

function Random() {
  const match = useMatch("/projects/:projectId/tasks/3");
  match.params.projectId; // abc
  match.params.taskId; // 3
}
```

See:

* [`<Route path>`](https://reactrouter.com/en/6.4.2/route/route#path)
* [`<Route loader>`](https://reactrouter.com/en/6.4.2/route/loader)
* [`<Route action>`](https://reactrouter.com/en/6.4.2/route/action)
* [`useParams`](https://reactrouter.com/en/6.4.2/hooks/use-params)
* [`useMatch`](https://reactrouter.com/en/6.4.2/hooks/use-match)

### **Ranked Route Matching**

When matching URLs to routes, React Router will rank the routes according the number of segments, static segments, dynamic segments, splats, etc. and pick the *most specific* match.

For example, consider these two routes:

```
<Route path="/teams/:teamId" />
<Route path="/teams/new" />
```

Now consider the URL is <http://example.com/teams/new>.

Even though both routes technically match the URL (`new` could be the `:teamId`), you intuitively know that we want the second route (`/teams/new`) to be picked. React Router's matching algorithm knows that, too.

With ranked routes, you don't have to worry about route ordering.

### **Active Links**

Most web apps have persistent navigation sections at the top of the UI, the sidebar, and often multiple levels. Styling the active navigation items so the user knows where they are (`isActive`) or where they're going (`isPending`) in the app is done easily with `<NavLink>`.

```
<NavLink
  style={({ isActive, isPending }) => {
    return {
      color: isActive ? "red" : "inherit",
    };
  }}
  className={({ isActive, isPending }) => {
    return isActive ? "active" : isPending ? "pending" : "";
  }}
/>
```

You can also [`useMatch`](https://reactrouter.com/en/6.4.2/hooks/use-match) for any other "active" indication outside of links.

```
function SomeComp() {
  const match = useMatch("/messages");
  return <li className={Boolean(match) ? "active" : ""} />;
}
```

See:

* [`NavLink`](https://reactrouter.com/en/6.4.2/components/nav-link)
* [`useMatch`](https://reactrouter.com/en/6.4.2/hooks/use-match)

### **Relative Link**

Like HTML `<a href>`, `<Link to>` and `<NavLink to>` can take relative paths, with enhanced behavior with nested routes.

Given the following route config:

```
<Route path="home" element={<Home />}>
  <Route path="project/:projectId" element={<Project />}>
    <Route path=":taskId" element={<Task />} />
  </Route>
</Route>
```

Consider the url <https://example.com/home/project/123>, which renders the following route component hierarchy:

```
<Home>
  <Project />
</Home>
```

### **Data Loading**

Because URL segments usually map to your app's persistent data, React Router provides conventional data loading hooks to initiate data loading during a navigation. Combined with nested routes, all of the data for multiple layouts at a specific URL can be loaded in parallel.

```
<Route
  path="/"
  loader={async ({ request }) => {
    // loaders can be async functions
    const res = await fetch("/api/user.json", {
      signal: request.signal,
    });
    const user = await res.json();
    return user;
  }}
  element={<Root />}
>
  <Route
    path=":teamId"
    // loaders understand Fetch Responses and will automatically
    // unwrap the res.json(), so you can simply return a fetch
    loader={({ params }) => {
      return fetch(`/api/teams/${params.teamId}`);
    }}
    element={<Team />}
  >
    <Route
      path=":gameId"
      loader={({ params }) => {
        // of course you can use any data store
        return fakeSdk.getTeam(params.gameId);
      }}
      element={<Game />}
    />
  </Route>
</Route>
```

Data is made available to your components through `useLoaderData`.

```
function Root() {
  const user = useLoaderData();
  // data from <Route path="/">
}

function Team() {
  const team = useLoaderData();
  // data from <Route path=":teamId">
}

function Game() {
  const game = useLoaderData();
  // data from <Route path=":gameId">
}
```

When the user visits or clicks links to <https://example.com/real-salt-lake/45face3>, all three route loaders will be called and loaded in parallel, before the UI for that URL renders.

### **Redirects**

While loading or changing data, it's common to [redirect](https://reactrouter.com/en/6.4.2/fetch/redirect) the user to a different route.

```
<Route
  path="dashboard"
  loader={async () => {
    const user = await fake.getUser();
    if (!user) {
      // if you know you can't render the route, you can
      // throw a redirect to stop executing code here,
      // sending the user to a new route
      throw redirect("/login");
    }

    // otherwise continue
    const stats = await fake.getDashboardStats();
    return { user, stats };
  }}
/>
```

```
<Route
  path="project/new"
  action={async ({ request }) => {
    const data = await request.formData();
    const newProject = await createProject(data);
    // it's common to redirect after actions complete,
    // sending the user to the new record
    return redirect(`/projects/${newProject.id}`);
  }}
/>
```

See:

* [`redirect`](https://reactrouter.com/en/6.4.2/fetch/redirect)
* [Throwing in Loaders](https://reactrouter.com/en/6.4.2/route/loader#throwing-in-loaders)
* [`useNavigate`](https://reactrouter.com/en/6.4.2/hooks/use-navigate)

### **Pending Navigation UI**

When users navigate around the app, the data for the next page is loaded before the page is rendered. It's important to provide user feedback during this time so the app doesn't feel like it's unresponsive.

```
function Root() {
  const navigation = useNavigation();
  return (
    <div>
      {navigation.state === "loading" && <GlobalSpinner />}
      <FakeSidebar />
      <Outlet />
      <FakeFooter />
    </div>
  );
}
```

See:

* [`useNavigation`](https://reactrouter.com/en/6.4.2/hooks/use-navigation)

### **Skeleton UI with `<Suspense>`**

Instead of waiting for the data for the next page, you can [`defer`](https://reactrouter.com/en/6.4.2/utils/defer) data so the UI flips over to the next screen with placeholder UI immediately while the data loads.

```
<Route
  path="issue/:issueId"
  element={<Issue />}
  loader={async ({ params }) => {
    // these are promises, but *not* awaited
    const comments = fake.getIssueComments(params.issueId);
    const history = fake.getIssueHistory(params.issueId);
    // the issue, however, *is* awaited
    const issue = await fake.getIssue(params.issueId);

    // defer enables suspense for the un-awaited promises
    return defer({ issue, comments, history });
  }}
  element={<Issue />}
/>;

function Issue() {
  const { issue, history, comments } = useLoaderData();
  return (
    <div>
      <IssueDescription issue={issue} />

      {/* Suspense provides the placeholder fallback */}
      <Suspense fallback={<IssueHistorySkeleton />}>
        {/* Await manages the deferred data (promise) */}
        <Await resolve={history}>
          {/* this calls back when the data is resolved */}
          {(resolvedHistory) => (
            <IssueHistory history={resolvedHistory} />
          )}
        </Await>
      </Suspense>

      <Suspense fallback={<IssueCommentsSkeleton />}>
        <Await resolve={comments}>
          {/* ... or you can use hooks to access the data */}
          <IssueComments />
        </Await>
      </Suspense>
    </div>
  );
}

function IssueComments() {
  const comments = useAsyncValue();
  return <div>{/* ... */}</div>;
}
```

See:

* [Deferred Data Guide](https://reactrouter.com/en/6.4.2/guides/deferred)
* [`defer`](https://reactrouter.com/en/6.4.2/utils/defer)
* [`Await`](https://reactrouter.com/en/6.4.2/components/await)
* [`useAsyncValue`](https://reactrouter.com/en/6.4.2/hooks/use-async-value)

### **Data Mutations**

HTML forms are navigation events, just like links. React Router supports HTML form workflows with client side routing.

When a form is submitted, the normal browser navigation event is prevented and a [`Request`](https://developer.mozilla.org/en-US/docs/Web/API/Request), with a body containing the [`FormData`](https://developer.mozilla.org/en-US/docs/Web/API/FormData) of the submission, is created. This request is sent to the `<Route action>` that matches the form's `<Form action>`.

Form elements's `name` prop are submitted to the action:

```
<Form action="/project/new">
  <label>
    Project title
    <br />
    <input type="text" name="title" />
  </label>

  <label>
    Target Finish Date
    <br />
    <input type="date" name="due" />
  </label>
</Form>
```

The normal HTML document request is prevented and sent to the matching route's action (`<Route path>` that matches the `<form action>`), including the `request.formData`.

```
<Route
  path="project/new"
  action={async ({ request }) => {
    const formData = await request.formData();
    const newProject = await createProject({
      title: formData.get("title"),
      due: formData.get("due"),
    });
    return redirect(`/projects/${newProject.id}`);
  }}
/>
```

### **Data Revalidation**

Decades old web conventions indicate that when a form is posted to the server, data is changing and a new page is rendered. That convention is followed in React Router's HTML-based data mutation APIs.

After route actions are called, the loaders for all of the data on the page is called again to ensure the UI stays up-to-date with the data automatically. No cache keys to expire, no context providers to reload.

See:

* [`Tutorial "Creating Contacts"`](https://reactrouter.com/en/6.4.2/start/tutorial#creating-contacts)

### **Busy Indicators**

When forms are being submitted to route actions, you have access to the navigation state to display busy indicators, disable fieldsets, etc.

```
function NewProjectForm() {
  const navigation = useNavigation();
  const busy = navigation.state === "submitting";
  return (
    <Form action="/project/new">
      <fieldset disabled={busy}>
        <label>
          Project title
          <br />
          <input type="text" name="title" />
        </label>

        <label>
          Target Finish Date
          <br />
          <input type="date" name="due" />
        </label>
      </fieldset>
      <button type="submit" disabled={busy}>
        {busy ? "Creating..." : "Create"}
      </button>
    </Form>
  );
}
```

### **Optimistic UI**

Knowing the [`formData`](https://developer.mozilla.org/en-US/docs/Web/API/FormData) being sent to an [action](https://reactrouter.com/en/6.4.2/route/action) is often enough to skip the busy indicators and render the UI in the next state immediately, even if your asynchronous work is still pending. This is called "optimistic UI".

```
function LikeButton({ tweet }) {
  const fetcher = useFetcher();

  // if there is `formData` then it is posting to the action
  const liked = fetcher.formData
    ? // check the formData to be optimistic
      fetcher.formData.get("liked") === "yes"
    : // if its not posting to the action, use the record's value
      tweet.liked;

  return (
    <fetcher.Form method="post" action="toggle-liked">
      <button
        type="submit"
        name="liked"
        value={liked ? "yes" : "no"}
      />
    </fetcher.Form>
  );
}
```

(Yes, HTML buttons can have a `name` and a `value`).

While it is more common to do optimistic UI with a [`fetcher`](https://reactrouter.com/en/6.4.2/hooks/use-fetcher), you can do the same with a normal form using [`navigation.formData`](https://reactrouter.com/en/6.4.2/hooks/use-navigation#navigationformdata).

### **Data Fetchers**

HTML Forms are the model for mutations but they have one major limitation: you can have only one at a time because a form submission is a navigation.

Most web apps need to allow for multiple mutations to be happening at the same time, like a list of records where each can be independently deleted, marked complete, liked, etc.

[`Fetchers`](https://reactrouter.com/en/6.4.2/hooks/use-fetcher) allow you to interact with the route [`actions`](https://reactrouter.com/en/6.4.2/route/action) and [`loaders`](https://reactrouter.com/en/6.4.2/route/loader) without causing a navigation in the browser, but still getting all the conventional benefits like error handling, revalidation, interruption handling, and race condition handling.

Imagine a list of tasks:

```
function Tasks() {
  const tasks = useLoaderData();
  return tasks.map((task) => (
    <div>
      <p>{task.name}</p>
      <ToggleCompleteButton task={task} />
    </div>
  ));
}
```

Each task can be marked complete independently of the rest, with its own pending state and without causing a navigation with a [`fetcher`](https://reactrouter.com/en/6.4.2/hooks/use-fetcher):

```
function ToggleCompleteButton({ task }) {
  const fetcher = useFetcher();

  return (
    <fetcher.Form method="post" action="/toggle-complete">
      <fieldset disabled={fetcher.state !== "idle"}>
        <input type="hidden" name="id" value={task.id} />
        <input
          type="hidden"
          name="status"
          value={task.complete ? "incomplete" : "complete"}
        />
        <button type="submit">
          {task.status === "complete"
            ? "Mark Incomplete"
            : "Mark Complete"}
        </button>
      </fieldset>
    </fetcher.Form>
  );
}
```

### **Race Condition Handling**

React Router will cancel stale operations and only commit fresh data automatically.

Any time you have asynchronous UI you have the risk of race conditions: when an async operation starts after but completes before an earlier operation. The result is a user interface that shows the wrong state.

Consider a search field that updates a list as the user types:

```
?q=ry    |---------------|
                         ^ commit wrong state
?q=ryan     |--------|
                     ^ lose correct state
```

Even though the query for `q?=ryan` went out later, it completed earlier. If not handled correctly, the results will briefly be the correct values for `?q=ryan` but then flip over the incorrect results for `?q=ry`. Throttling and debouncing are not enough (you can still interrupt the requests that get through). You need to cancellation.

If you're using React Router's data conventions you avoid this problem completely and automatically.

```
?q=ry    |-----------X
                     ^ cancel wrong state when
                       correct state completes earlier
?q=ryan     |--------|
                     ^ commit correct state
```

Not only does React Router handle race conditions for a navigation like this, it also handles it for many other cases like loading results for an autocomplete or performing multiple concurrent mutations with [`fetcher`](https://reactrouter.com/en/6.4.2/hooks/use-fetcher) (and its automatic, concurrent revalidations).

### **Error Handling**

The vast majority of your application errors are handled automatically by React Router. It will catch any errors that are thrown while:

* rendering
* loading data
* updating data

In practice, this is pretty much every error in your app except those thrown in event handlers (`<button onClick>`) or `useEffect`. React Router apps tend to have very few of either.

When an error is thrown, instead of rendering the route's [`element`](https://reactrouter.com/en/6.4.2/route/route#element), the [`errorElement`](https://reactrouter.com/en/6.4.2/route/error-element) is rendered.

```
<Route
  path="/"
  loader={() => {
    something.that.throws.an.error();
  }}
  // this will not be rendered
  element={<HappyPath />}
  // but this will instead
  errorElement={<ErrorBoundary />}
/>
```

If a route doesn't have an `errorElement`, the error will bubble to the nearest parent route with an `errorElement`:

```
<Route
  path="/"
  element={<HappyPath />}
  errorElement={<ErrorBoundary />}
>
  {/* Errors here bubble up to the parent route */}
  <Route path="login" element={<Login />} />
</Route>
```

See:

* [`<Route errorElement>`](https://reactrouter.com/en/6.4.2/route/error-element)
* [`useRouteError`](https://reactrouter.com/en/6.4.2/hooks/use-route-error)

### **Scroll Restoration**

React Router will emulate the browser's scroll restoration on navigation, waiting for data to load before scrolling. This ensures the scroll position is restored to the right spot.

You can also customize the behavior by restoring based on something other than locations (like a url pathname) and preventing the scroll from happening on certain links (like tabs in the middle of a page).

See:

* [`<ScrollRestoration>`](https://reactrouter.com/en/6.4.2/components/scroll-restoration)

### **Web Standard APIs**

React Router is built on web standard APIs. [Loaders](https://reactrouter.com/en/6.4.2/route/loader) and [actions](https://reactrouter.com/en/6.4.2/route/action) receive standard Web Fetch API [`Request`](https://developer.mozilla.org/en-US/docs/Web/API/Request) objects and can return [`Response`](https://developer.mozilla.org/en-US/docs/Web/API/Response) objects, too. Cancellation is done with [Abort Signals](https://developer.mozilla.org/en-US/docs/Web/API/AbortSignal), search params are handled with [`URLSearchParams`](https://developer.mozilla.org/en-US/docs/Web/API/URLSearchParams), and data mutations are handled with [HTML Forms](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/form).

When you get better at React Router, you get better at the web platform.

### **Resources**

* [`React Router`](https://reactrouter.com/en/6.4.2)
