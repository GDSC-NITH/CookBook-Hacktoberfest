# Navbar using CSS

Having easy-to-use navigation is important for any web site.
With CSS you can transform boring HTML menus into good-looking navigation bars.




## Example:

A navigation bar is basically a list of links, so using the ul and li elements makes perfect sense. The code in the example is the standard code used in both vertical, and horizontal navigation bars.

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
  
## Horizontal Navbar

A way of creating a horizontal navigation bar is to float the <li> elements, and specify a layout for the navigation links.

```bash
<!DOCTYPE html>
<html>
<head>
<style>
ul {
  list-style-type: none;
  margin: 0;
  padding: 0;
  overflow: hidden;
}

li {
  float: left;
}

li a {
  display: block;
  padding: 8px;
  background-color: #dddddd;
}
</style>
</head>
<body>

<ul>
  <li><a href="#home">Home</a></li>
  <li><a href="#news">News</a></li>
  <li><a href="#contact">Contact</a></li>
  <li><a href="#about">About</a></li>
</ul>

</body>
</html>
```
Here, the following is used as:

- Use float to get block elements to float next to each other
```bash
float: left;
```

- Allows us to specify padding (and height, width, margins, etc. if you want)
```bash
display: block;
```

- Specify some padding between each <a> element, to make them look good
```bash
padding: 8px;
```

- Add a gray background-color to each <a> element
```bash
background-color: #dddddd;
```
## Example with active navigation link
Add an "active" class to the current link to let the user know which page he/she is on:

```bash
<!DOCTYPE html>
<html>
<head>
<style>
ul {
  list-style-type: none;
  margin: 0;
  padding: 0;
  overflow: hidden;
  background-color: #333;
}

li {
  float: left;
}

li a {
  display: block;
  color: white;
  text-align: center;
  padding: 14px 16px;
  text-decoration: none;
}

li a:hover:not(.active) {
  background-color: #111;
}

.active {
  background-color: #04AA6D;
}
</style>
</head>
<body>

<ul>
  <li><a class="active" href="#home">Home</a></li>
  <li><a href="#news">News</a></li>
  <li><a href="#contact">Contact</a></li>
  <li><a href="#about">About</a></li>
</ul>

</body>
</html>
```
