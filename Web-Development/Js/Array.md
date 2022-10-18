# Arrays in JavaScript
In JavaScript, array is a single variable that us used to store different elements. It is usually used to store a list of elements and access them by a single variable.

## Declaration of an array 
There are two basic ways to declare an array

```javascript
let arr = new Array();
let arr = [];
```
But most of the times we prefer to use the second syntax, we can declare intial elements :
```javascript
let fruits = ["Apple", "Orange", "Plum"];
```
Array elements are numbered, starting with zero.

We can get an element by its number in square brackets:
```javascript
let fruits = ["Apple", "Orange", "Plum"];

alert( fruits[0] ); // Apple
alert( fruits[1] ); // Orange
alert( fruits[2] ); // Plum
```

We can also replace an element by assigning it independently. like:
```javascript
fruits[2] = 'Pear'; // now ["Apple", "Orange", "Pear"]
```
or add new to the array:
```javascript
fruits[3] = 'Lemon'; // now ["Apple", "Orange", "Pear", "Lemon"]
```
We can also use alert to show the whole array.
```javascript
let fruits = ["Apple", "Orange", "Plum"];

alert( fruits.length ); // 3
```

**Note:** *An array in JavaScript can hold different elements that can store Numbers, Strings, and Boolean in a single array.*
```javascript
let house = ["1BHK", 25000, "2BHK", 50000, "Rent", true];
```

*** 

</br>

> Get Last element with **'at'**: </br></br>
Some programming languages allow to use negative indexes for the same purpose, like `fruits[-1]`. </br>
Although, in JavaScript it won’t work. The result will be `undefined`, because the index in square brackets is treated literally. </br>
We can explicitly calculate the last element index and then access it: `fruits[fruits.length - 1]`.
```javascript
let fruits = ["Apple", "Orange", "Plum"];
alert( fruits[fruits.length-1] ); // Plum
```
>But it is a bit cumbersome, we need to write the variable name twice.
Luckily, we can use 'at' syntax here : 
```javascript
let fruits = ["Apple", "Orange", "Plum"];
// same as fruits[fruits.length-1]
alert( fruits.at(-1) ); // Plum
```
>In other words,` arr.at(i)`:<br>
is exactly the same as `arr[i]`, if `i >= 0`.
for negative values of `i`, it steps back from the end of the array.

*** 

</br>

# Methods 

## pop/push
Array supports two operations: 
- pop 
- push

So new elements are added or taken always from the “end”.

A stack is usually illustrated as a pack of cards: new cards are added to the top or taken from the top:

<p style="align:center">
  <img src="./assests/pop-push.jpeg">
</p>

For stacks, the latest pushed item is received first, that’s also called LIFO (Last-In-First-Out) principle. For queues, we have FIFO (First-In-First-Out).

Arrays in JavaScript can work both as a queue and as a stack. They allow you to add/remove elements, both to/from the beginning or the end.

*** 

</br>

**Methods that work with the end of the array:**<br>
`pop`<br>
Extracts the last element of the array and returns it:
```javascript
let fruits = ["Apple", "Orange", "Pear"];

alert( fruits.pop() ); // remove "Pear" and alert it

alert( fruits ); // Apple, Orange
```

`push`<br>
Append the element to the end of the array:
```javascript
let fruits = ["Apple", "Orange"];

fruits.push("Pear");

alert( fruits ); // Apple, Orange, Pear
```

*** 

</br>

## Loops
One of the oldest ways to cycle array items is the `for` loop over indexes:
```javascript
let arr = ["Apple", "Orange", "Pear"];

for (let i = 0; i < arr.length; i++) {
  alert( arr[i] );
}
```
But for arrays there is another form of loop, `for..of`:
```javascript
let fruits = ["Apple", "Orange", "Plum"];

// iterates over array elements
for (let fruit of fruits) {
  alert( fruit );
}
```
The `for..of` doesn’t give access to the number of the current element, just its value, but in most cases that’s enough. And it’s shorter.

Technically, because arrays are objects, it is also possible to use `for..in`:
```javascript
let arr = ["Apple", "Orange", "Pear"];

for (let key in arr) {
  alert( arr[key] ); // Apple, Orange, Pear
}
```
But that’s actually a bad idea. There are potential problems with it:

The loop `for..in` iterates over all properties, not only the numeric ones.

There are so-called “array-like” objects in the browser and in other environments, that look like arrays. That is, they have `length` and indexes properties, but they may also have other non-numeric properties and methods, which we usually don’t need. The `for..in` loop will list them though. So if we need to work with array-like objects, then these “extra” properties can become a problem.

The `for..in` loop is optimized for generic objects, not arrays, and thus is 10-100 times slower. Of course, it’s still very fast. The speedup may only matter in bottlenecks. But still we should be aware of the difference.

Generally, we shouldn’t use `for..in` for arrays.

*** 

</br>

## new Array()
There is one more syntax to create an array:
```javascript
let arr = new Array("Apple", "Pear", "etc");
```
It’s rarely used, because square brackets `[]` are shorter. Also, there’s a tricky feature with it.

If `new Array` is called with a single argument which is a number, then it creates an array without items, but with the given length.

Let’s see how one can shoot themselves in the foot:
```javascript
let arr = new Array(2); // will it create an array of [2] ?

alert( arr[0] ); // undefined! no elements.

alert( arr.length ); // length 2
```
To avoid such surprises, we usually use square brackets, unless we really know what we’re doing.

*** 

</br>

## Don’t compare arrays with `==`
Arrays in JavaScript, unlike some other programming languages, shouldn’t be compared with operator `==`.

This operator has no special treatment for arrays, it works with them as with any objects.

The strict comparison `===` is even simpler, as it doesn’t convert types.

So, if we compare arrays with `==`, they are never the same, unless we compare two variables that reference exactly the same array.

For example:
```javascript
alert( [] == [] ); // false
alert( [0] == [0] ); // false
```
These arrays are technically different objects. So they aren’t equal. The `==` operator doesn’t do item-by-item comparison.

Comparison with primitives may give seemingly strange results as well:

```javascript
alert( 0 == [] ); // true

alert('0' == [] ); // false
```
Here, in both cases, we compare a primitive with an array object. So the array `[]` gets converted to primitive for the purpose of comparison and becomes an empty string `''`.

```javascript
// after [] was converted to ''
alert( 0 == '' ); // true, as '' becomes converted to number 0

alert('0' == '' ); // false, no type conversion, different strings
```
So, how to compare arrays?

That’s simple: don’t use the `==` operator. Instead, compare them item-by-item in a loop or using iteration methods explained in the next chapter.

*** 

</br>

## Iterate thorugh an array 

#### forEach
The arr.forEach method allows to run a function for every element of the array.

The syntax:
```javascript
arr.forEach(function(item, index, array) {
  // ... do something with item
});
```
For instance, this shows each element of the array:
```javascript
// for each element call alert
["Bilbo", "Gandalf", "Nazgul"].forEach(alert);
```
And this code is more elaborate about their positions in the target array:
```javascript
["Bilbo", "Gandalf", "Nazgul"].forEach((item, index, array) => {
  alert(`${item} is at index ${index} in ${array}`);
});
```
The result of the function (if it returns any) is thrown away and ignored.

*** 

</br>

#### filter
The `find` method looks for a single (first) element that makes the function return true.

If there may be many, we can use arr.filter(fn).

The syntax is similar to `find`, but `filter` returns an array of all matching elements:
```javascript
let results = arr.filter(function(item, index, array) {
  // if true item is pushed to results and the iteration continues
  // returns empty array if nothing found
});
```
For instance:
```javascript
let users = [
  {id: 1, name: "John"},
  {id: 2, name: "Pete"},
  {id: 3, name: "Mary"}
];

// returns array of the first two users
let someUsers = users.filter(item => item.id < 3);

alert(someUsers.length); // 2
```

*** 

</br>

## Transform an array

#### map
The arr.map method is one of the most useful and often used.

It calls the function for each element of the array and returns the array of results.

The syntax is:
```javascript
let result = arr.map(function(item, index, array) {
  // returns the new value instead of item
});
```
For instance, here we transform each element into its length:
```javascript
let lengths = ["Bilbo", "Gandalf", "Nazgul"].map(item => item.length);
alert(lengths); // 5,7,6
```

*** 

</br>

