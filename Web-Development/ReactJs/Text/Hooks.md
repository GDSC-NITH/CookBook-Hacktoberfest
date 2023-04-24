# **ReactJs Hooks**

[Click here to check in official docs of React](https://reactjs.org/docs/getting-started.html)

## **Introduction**

Hooks are the new feature introduced in the React 16.8 version. It allows us to use state and other React features without writing a class. Hooks are the functions which "hook into" React state and lifecycle features from function components. It does not work inside classes.

Hooks are backward-compatible, which means it does not contain any breaking changes. Also, it does not replace our knowledge of React concepts.

## **Using of Hooks**

If we write a function component, and then we want to add some state to it, previously we do this by converting it to a class. But, now we can do it by using a Hook inside the existing function component.

## **Rules of Hooks**

Hooks are similar to JavaScript functions, but we need to follow these two rules when using them. Hooks rule ensures that all the stateful logic in a component is visible in its source code. These rules are:

### **1. Only call Hooks at the top level**

Do not call Hooks inside loops, conditions, or nested functions. Hooks should always be used at the top level of the React functions. This rule ensures that Hooks are called in the same order each time a components renders.

### **2. Only call Hooks from React functions**

We cannot call Hooks from regular JavaScript functions. Instead,we can call Hooks from React function components. Hooks can also be called from custom Hooks.

## **Hooks State**

Hook state is the new way of declaring a state in React app. Hook uses useState() functional component for setting and retrieving state. Let us understand Hook state with the following example.

- Code in app.js:

```
import React, { useState } from 'react';

function CountApp() {
 // Declare a new state variable, which we'll call "count"
 const [count, setCount] = useState(0);

return (
 <div>
 <p>You clicked {count} times</p>
 <button onClick={() => setCount(count + 1)}>
 Click me
 </button>
 </div>
 );
}
export default CountApp;
```

In the above example, useState is the Hook which needs to call inside a function component to add some local state to it. The useState returns a pair where the first element is the current state value/initial value, and the second one is a function which allows us to update it. After that, we will call this function from an event handler or somewhere else. The useState is similar to this.setState in class. The equivalent code without Hooks looks like as below.

- App.js:

```
import React, { useState } from 'react';

class CountApp extends React.Component {
 constructor(props) {
 super(props);
 this.state = {
 count: 0
 };
 }
 render() {
 return (
 <div>
 <p><b>You clicked {this.state.count} times</b></p>
 <button onClick={() => this.setState({ count: this.state.count + 1 })}>
 Click me
 </button>
 </div>
 );
 }
}
export default CountApp;
```

## **Hooks Effect**

The Effect Hook allows us to perform side effects (an action) in the function components. It does not use components lifecycle methods which are available in class components. In other words, Effects Hooks are equivalent to componentDidMount(), componentDidUpdate(), and componentWillUnmount() lifecycle methods.

Side effects have common features which the most web applications need to perform, such as:

1. Updating the DOM,
2. Fetching and consuming data from a server API,
3. Setting up a subscription, etc.

Let us understand Hook Effect with the following example.

```
import React, { useState, useEffect } from 'react';

function CounterExample() {
 const [count, setCount] = useState(0);

// Similar to componentDidMount and componentDidUpdate:
 useEffect(() => {
 // Update the document title using the browser API
 document.title = `You clicked ${count} times`;
 });

return (
 <div>
 <p>You clicked {count} times</p>
 <button onClick={() => setCount(count + 1)}>
 Click me
 </button>
 </div>
 );
}
export default CounterExample;
```

In React component, there are two types of side effects:

1. Effects Without Cleanup
2. Effects With Cleanup

- Effects without Cleanup:

It is used in useEffect which does not block the browser from updating the screen. It makes the app more responsive. The most common example of effects which don't require a cleanup are manual DOM mutations, Network requests, Logging, etc.

- Effects with Cleanup:

Some effects require cleanup after DOM updation. For example, if we want to set up a subscription to some external data source, it is important to clean up memory so that we don't introduce a memory leak. React performs the cleanup of memory when the component unmounts. However, as we know that, effects run for every render method and not just once. Therefore, React also cleans up effects from the previous render before running the effects next time.

- Custom Hooks:

A custom Hook is a JavaScript function. The name of custom Hook starts with "use" which can call other Hooks. A custom Hook is just like a regular function, and the word "use" in the beginning tells that this function follows the rules of Hooks. Building custom Hooks allows you to extract component logic into reusable functions.

Let us understand how custom Hooks works in the following example.

```
import React, { useState, useEffect } from 'react';

const useDocumentTitle = title => {
 useEffect(() => {
 document.title = title;
 }, [title])
}

function CustomCounter() {
 const [count, setCount] = useState(0);
 const incrementCount = () => setCount(count + 1);
 useDocumentTitle(`You clicked ${count} times`);
 // useEffect(() => {
 // document.title = `You clicked ${count} times`
 // });

return (
 <div>
 <p>You clicked {count} times</p>
 <button onClick={incrementCount}>Click me</button>
 </div>
 )
}
export default CustomCounter;
```

In the above snippet, useDocumentTitle is a custom Hook which takes an argument as a string of text which is a title. Inside this Hook, we call useEffect Hook and set the title as long as the title has changed. The second argument will perform that check and update the title only when its local state is different than what we are passing in.

- Built-in Hooks
  Here, we describe the APIs for the built-in Hooks in React. The built-in Hooks can be divided into two parts, which are given below.

- Basic Hooks:

1. useState2
2. useEffect
3. useContext

- Additional Hooks:

1. useReducer
2. useCallback
3. useMemo
4. useRef
5. useImperativeHandle
6. useLayoutEffect
7. useDebugValue

### **Resources**

- [`React Hooks`](https://www.javatpoint.com/react-hooks)
