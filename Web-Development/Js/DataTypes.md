# Data Types
A value in JavaScript is always of a certain type. For example, a string or a number.

The set of types in the JavaScript language consists of primitive values and objects. We can put any type in a variable:
```javascript
// no error
let message = "hello";
message = 4896;
message= false;
```
## Number
The number type represents both integer and floating point numbers.It can only safely store integers in the range -(2^53 − 1) to (2^53 − 1).

Besides regular numbers, there are so-called “special numeric values” which also belong to this data type: Infinity, -Infinity and NaN.
```javascript
let n = 123;
n = 12.345;
```

## BigInt
The BigInt type is a numeric primitive in JavaScript that can represent integers with arbitrary precision. With BigInts, you can safely store and operate on large integers even beyond the safe integer limit for Numbers.

A BigInt is created by appending **n** to the end of an integer or by calling the constructor.
```javascript
// the "n" at the end means it's a BigInt
const bigInt = 1234567890123456789012345678901234567890n;
```

## Boolean
The boolean type has only two values: true and false.

For instance:
```javascript
let nameFieldChecked = true; // yes, name field is checked
let ageFieldChecked = false; // no, age field is not checked
```
Boolean values also come as a result of comparisons:
```javascript
let isGreater = 4 > 1;

alert( isGreater ); // true (the comparison result is "yes")
```
## Null
The Null type has exactly one value: null. 
```javascript
let name = null;
```
## Undefined
A variable that has not been assigned a value has the value undefined.
```javascript
let age;

alert(age); // shows "undefined"
```
## String
String
A string in JavaScript must be surrounded by quotes.
```javascript
let str = "Hello";
let str2 = 'Single quotes are ok too';
let phrase = `can embed another ${str}`;
```
In JavaScript, there are 3 types of quotes.

- Double quotes: "Hello".
- Single quotes: 'Hello'.
- Backticks: \`Hello`.
  
Double and single quotes are “simple” quotes. There’s practically no difference between them in JavaScript.

Backticks are “extended functionality” quotes. They allow us to embed variables and expressions into a string by wrapping them in ${…}, for example:
```javascript
let name = "John";

// embed a variable
alert( `Hello, ${name}!` ); // Hello, John!

// embed an expression
alert( `the result is ${1 + 2}` ); // the result is 3
```
The expression inside ${…} is evaluated and the result becomes a part of the string. We can put anything in there: a variable like name or an arithmetical expression like 1 + 2 or something more complex.

Please note that this can only be done in backticks. Other quotes don’t have this embedding functionality!

## Symbol
A Symbol is a unique and immutable primitive value and may be used as the key of an Object property. In some programming languages, Symbols are called "atoms".

## Objects
 In JavaScript, objects can be seen as a collection of properties.Property values can be values of any type, including other objects, which enables building complex data structures. Properties are identified using key values. A key value is either a String value or a Symbol value.
 ```javascript
 let person = {firstName:"John", 
               lastName:"Doe", 
               age:50,
               eyeColor:"brown"
```




 
