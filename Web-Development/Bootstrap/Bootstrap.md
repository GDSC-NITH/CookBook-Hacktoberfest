# **Get started with Bootstrap**

# Bootstrap is a powerful, feature-packed frontend toolkit. Build anything—from prototype to production—in minutes.

## **Quick start**

Get started by including Bootstrap’s production-ready CSS and JavaScript via CDN without the need for any build steps. See it in practice with this [`Bootstrap CodePen demo`](https://codepen.io/team/bootstrap/pen/qBamdLj).

1. **Create a new** `index.html` file in your project root. Include the `<meta name="viewport">` tag as well for [`proper responsive behavior`](https://developer.mozilla.org/en-US/docs/Web/HTML/Viewport_meta_tag) in mobile devices.

```
<!doctype html>
<html lang="en">
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>Bootstrap demo</title>
  </head>
  <body>
    <h1>Hello, world!</h1>
  </body>
</html>
```

2. **Include Bootstrap’s CSS and JS**. Place the `<link>` tag in the `<head>` for our CSS, and the `<script>` tag for our JavaScript bundle (including Popper for positioning dropdowns, poppers, and tooltips) before the closing `</body>`. Learn more about our [`CDN links`](https://getbootstrap.com/docs/5.2/getting-started/introduction/#cdn-links).

```
<!doctype html>
<html lang="en">
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>Bootstrap demo</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.2.2/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-Zenh87qX5JnK2Jl0vWa8Ck2rdkQ2Bzep5IDxbcnCeuOxjzrPF/et3URy9Bv1WTRi" crossorigin="anonymous">
  </head>
  <body>
    <h1>Hello, world!</h1>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.2.2/dist/js/bootstrap.bundle.min.js" integrity="sha384-OERcA2EqjJCMA+/3y+gxIOqMEjwtxJY7qPCqsdltbNJuaOe923+mo//f6V8Qbsw3" crossorigin="anonymous"></script>
  </body>
</html>
```

You can also include [`Popper`](https://popper.js.org/) and our JS separately. If you don’t plan to use dropdowns, popovers, or tooltips, save some kilobytes by not including Popper.


```
<script src="https://cdn.jsdelivr.net/npm/@popperjs/core@2.11.6/dist/umd/popper.min.js" integrity="sha384-oBqDVmMz9ATKxIep9tiCxS/Z9fNfEXiDAYTujMAeBAsjFuCZSmKbSSUnQlmh/jp3" crossorigin="anonymous"></script>

<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.2.2/dist/js/bootstrap.min.js" integrity="sha384-IDwe1+LCz02ROU9k972gdyvl+AESN10+x7tBKgc9I5HFtuNz0wWnPclzo6p9vxnk" crossorigin="anonymous"></script>
```

3. **Hello, world!** Open the page in your browser of choice to see your Bootstrapped page. Now you can start building with Bootstrap by creating your own [`layout`](https://getbootstrap.com/docs/5.2/layout/grid/), adding dozens of [`components`](https://getbootstrap.com/docs/5.2/components/buttons/), and utilizing [`our official examples`](https://getbootstrap.com/docs/5.2/examples/).

<br>

## **CDN links**

As reference, here are our primary CDN links.

| Description | #URL |
| :---: | :---: |
| CSS | https://cdn.jsdelivr.net/npm/bootstrap@5.2.2/dist/css/bootstrap.min.css |
| JS | https://cdn.jsdelivr.net/npm/bootstrap@5.2.2/dist/js/bootstrap.bundle.min.js |

****

<br>

You can also use the CDN to fetch any of our [additional builds listed in the Contents page](https://getbootstrap.com/docs/5.2/getting-started/contents/).


## **Next steps**

* Read a bit more about some [important global environment settings](https://getbootstrap.com/docs/5.2/getting-started/introduction/#important-globals) that Bootstrap utilizes.

* Read about what’s included in Bootstrap in our [contents section](https://getbootstrap.com/docs/5.2/getting-started/contents/) and the list of [components that require JavaScript](https://getbootstrap.com/docs/5.2/getting-started/introduction/#js-components) below.

* Need a little more power? Consider building with Bootstrap by [including the source files via package manager](https://getbootstrap.com/docs/5.2/getting-started/download/#package-managers).

* Looking to use Bootstrap as a module with `<script type="module">?` Please refer to our [using Bootstrap as a module](https://getbootstrap.com/docs/5.2/getting-started/javascript/#using-bootstrap-as-a-module) section.


## **JS components**

Curious which components explicitly require our JavaScript and Popper? Click the show components link below. If you’re at all unsure about the general page structure, keep reading for an example page template.

### Components requiring JavaScript

* Alerts for dismissing
* Buttons for toggling states and checkbox/radio functionality
* Carousel for all slide behaviors, controls, and indicators
* Collapse for toggling visibility of content
* Dropdowns for displaying and positioning (also requires [Popper](https://popper.js.org/))
* Modals for displaying, positioning, and scroll behavior
* Navbar for extending our Collapse and Offcanvas plugins to implement responsive behaviors
* Navs with the Tab plugin for toggling content panes
* Offcanvases for displaying, positioning, and scroll behavior
* Scrollspy for scroll behavior and navigation updates
* Toasts for displaying and dismissing
* Tooltips and popovers for displaying and positioning (also requires [Popper](https://popper.js.org/))

## **Important globals**

Bootstrap employs a handful of important global styles and settings, all of which are almost exclusively geared towards the normalization of cross browser styles. Let’s dive in.

## **HTML5 doctype**

Bootstrap requires the use of the HTML5 doctype. Without it, you’ll see some funky and incomplete styling.


```
<!doctype html>
<html lang="en">
  ...
</html>
```

## **Responsive meta tag**

Bootstrap is developed mobile first, a strategy in which we optimize code for mobile devices first and then scale up components as necessary using CSS media queries. To ensure proper rendering and touch zooming for all devices, add the responsive viewport meta tag to your `<head>`.

```
<meta name="viewport" content="width=device-width, initial-scale=1">
```
You can see an example of this in action in the [`quick start`](https://getbootstrap.com/docs/5.2/getting-started/introduction/#quick-start).


## **Box-sizing**

For more straightforward sizing in CSS, we switch the global `box-sizing` value from `content-box` to `border-box`. This ensures `padding` does not affect the final computed width of an element, but it can cause problems with some third-party software like Google Maps and Google Custom Search Engine.

On the rare occasion you need to override it, use something like the following:

```
.selector-for-some-widget {
  box-sizing: content-box;
}
```

With the above snippet, nested elements—including generated content via `::before` and `::after`—will all inherit the specified `box-sizing` for that `.selector-for-some-widget`.

Learn more about [box model and sizing at CSS Tricks](https://css-tricks.com/box-sizing/).


## **Reboot**

For improved cross-browser rendering, we use [`Reboot`](https://getbootstrap.com/docs/5.2/content/reboot/) to correct inconsistencies across browsers and devices while providing slightly more opinionated resets to common HTML elements.



## **Community**

Stay up-to-date on the development of Bootstrap and reach out to the community with these helpful resources.

* Read and subscribe to [The Official Bootstrap Blog](https://blog.getbootstrap.com/).
* Ask and explore [our GitHub Discussions](https://github.com/twbs/bootstrap/discussions).
* Chat with fellow Bootstrappers in IRC. On the `irc.libera.chat` server, in the `#bootstrap` channel.
* Implementation help may be found at Stack Overflow (tagged [bootstrap-5](https://stackoverflow.com/questions/tagged/bootstrap-5)).
* Developers should use the keyword `bootstrap` on packages that modify or add to the functionality of * Bootstrap when distributing through [npm](https://www.npmjs.com/search?q=keywords:bootstrap) or similar delivery mechanisms for maximum discoverability.


<br>

***

<br>


### **Resources**

* [Bootstrap](https://getbootstrap.com/docs/5.2/getting-started/introduction/#important-globals)

