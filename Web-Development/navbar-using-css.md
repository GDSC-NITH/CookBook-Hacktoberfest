# Navbar using CSS

Having easy-to-use navigation is important for any web site.
With CSS you can transform boring HTML menus into good-looking navigation bars.




## Example:

A navigation bar is basically a list of links, so using the <ul> and <li> elements makes perfect sense.
The code in the example is the standard code used in both vertical, and horizontal navigation bars.

```bash
<html>
<head>
<style>
ul {
  list-style-type: none;
  margin: 0;
  padding: 0;
}
</style>
</head>
<body>

<p>In this example, we remove the bullets from the list, and its default padding and margin.</p>

<ul>
  <li><a href="#home">Home</a></li>
  <li><a href="#news">News</a></li>
  <li><a href="#contact">Contact</a></li>
  <li><a href="#about">About</a></li>
</ul>

</body>
</html>
```


A navigation bar does not need list markers so the following is used
```bash
list-style-type: none;
```

To remove browser settings
```bash
margin: 0;
padding: 0;
```
