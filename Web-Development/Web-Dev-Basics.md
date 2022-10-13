# WEB DEV

## What is HTML?

HTML stands for Hyper Text Markup Language.
HTML helps you structure your page into elements such as paragraphs, sections, headings, navigation bars, and so on.  
So you can think of HTML as the language used for creating detailed instructions concerning style, type, format, structure and the makeup of a web page before it gets printed (shown to you).
But in the context of web development, we can replace the term ‘printed’ with ‘rendered’ as a more accurate term.

## Code solution

```html

<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <meta http-equiv="X-UA-Compatible" content="ie=edge">
  <link rel="stylesheet" href="./styles.css">
  <title>Document</title>
</head>
<body>
  <h1>This is a first level heading in HTML. With CSS, I will turn this into red color</h1>
  <h2>This is a second level heading in HTML. With CSS, I will turn this into blue color</h2>
  <h3>This is a third level heading in HTML. With CSS, I will turn this into green color</h3>
  <p>This is a <em>paragragh</em> As you can see, I placed an empahisis on the word "paragraph". Now, I will change also
    the background color of the word "paragraph" to black, and its text color  to green, all with just CSS.</p>
  <p>The main essence of this tutorial is to:</p>
    <ul>
       <li>Show you how to format a web document with HTML</li>
       <li>Show you how to design a web page with CSS</li>
       <li>Show you how to program a web document with JavaScript</li>
    </ul>

  <p>Next, I am going to add the following two numbers and display the result, all with JavaScript<p/>
    <p>First number:<span id= "firstNum">2</span> <br></p>
    <p>Second number: <span id= "secondNum">7</span> </p>
    <p>Therefore, the sum of the two of those numbers is: <span id= "answer">(placeholder for the answer)</span></p>
    <input type="button" id="sumButton" value="Click to add!">
</body>
</html>

```

## What is CSS?

CSS stands for Cascading Style Sheets, and you use it to improve the appearance of a web page.
By adding thoughtful CSS styles, you make your page more attractive and pleasant for the end user to view and use.

Imagine if human beings were just made to have skeletons and bare bones – how would that look? Not nice if you ask me. So CSS is like our skin, hair, and general physical appearance.

You can also use CSS to layout elements by positioning them in specified areas of your page.

## Code solution

```css

h1 {
  background-color: #ff0000;
}

h2 {
  background-color: #0000FF;
}

h3 {
  background-color: #00FF00;
}

em {
  background-color: #000000;
  color: #ffffff;
}

```

## What is JavaScript?

Now, if HTML is the markup language and CSS is the design language, then JavaScript is the programming language.
You can program actions, conditions, calculations, network requests, concurrent tasks and many other kinds of instructions.

You can access any elements through the Document Object Model API (DOM) and make them change however you want them to.

The DOM is a tree-like representation of the web page that gets loaded into the browser.

## Code solution

```js

function displaySum() {
  let firstNum = Number(document.getElementById('firstNum').innerHTML)
  let secondNum = Number(document.getElementById('secondNum').innerHTML)

  let total = firstNum + secondNum;
  document.getElementById("answer").innerHTML = ` ${firstNum} + ${secondNum}, equals to ${total}` ;
}

document.getElementById('sumButton').addEventListener("click", displaySum);

```

## **Resources:**

* [**FREECODECAMP**](https://www.freecodecamp.org/news/html-css-and-javascript-explained-for-beginners/)
* [**GFG**](https://www.geeksforgeeks.org/web-development/)
