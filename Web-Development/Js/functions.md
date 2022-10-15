# Functions in Javascript

Functions are one of the fundamental concepts in programming. They let us write concise, modular, reusable, and maintainable code.

## What is a Function in JavaScript?

A function is a block of reusable code written to perform a specific task.

You can think of a function as a sub-program within the main program. A function consists of a set of statements but executes as a single unit.

There are several ways to define a function. Most commonly, we have function declaration and function expression.

---

## How to Define a Function using Function   Declaration

You write a function declaration like this:

```javascript
function nameOfFunction() {
	//some code here....
}
```
Basically, it consists of the following:

- Function keyword
- The name of the function
- Parentheses (which can take in parameters, or also be empty)
- The body of the function (wrapped in curly braces).

Here's an example:
```javascript
function sayHello() {
	console.log("Hello world"); 
}
```
This function will output *Hello world!* when you call it.

Here's how to call a function:-
```javascript
sayHello();

//output: Hello world
```
---
Some funtions take parameters when we define it and we have to pass arguments when we call it.
## What are parameters and arguments?

A **parameter** is a variable you pass to a function when you declare it.

When we want our function to apply function's logic to different sets of data at different times that's where parameters comes in handy.
The function result will depend on data that you pass in.

An **argument**, on the other hand, is the value equivalent to the parameter that you pass to the function when you call it.

Syntax for declaring a function with parameters will look like this:
```javascript
function nameOfFunction(parameters){
	//function body.....
}
```
And to invoke it:
```javascript
nameOfFunction(arguments)
```
### Example:
Function declaration-
```javascript
function sum(num1, num2){
	return num1 + num2;
}
```
To invoke this function, we call it like this:
```javascript
sum(1, 2);

//output: 3
```
The function sum() took in two parameters when we defined it – num1, and num2. And when we call it, we passed in two values – the arguments, 1 and 2 .

---
## How to Use Arrow Functions in JavaScript
Arrow functions are yet another notation of a function expression but they have a shorter syntax. They were introduced in ES6 and help us write cleaner code.

Here, the function keyword is excluded and we use an arrow symbol (=>) instead. The syntax looks like this:
```javascript
let nameOfFunction = (parameters) => {
	//function body
}
```
If the function body within the curly braces contains only a single statement, then the braces can be omitted. An arrow function with curly braces must include the return keyword.

### Example:

Function declaration-
```javascript
let sum = (num1,num2)=>{
    return num1+num2;
}
```
Invoking function-
```javascript
sum(2,3);
//output: 5
```
### With functions, you can organize your code by grouping everything into separate blocks that perform different tasks.

