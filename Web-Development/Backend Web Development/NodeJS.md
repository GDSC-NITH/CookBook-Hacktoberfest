# Node JS

- Node.js is an open source server environment
- Node.js is free
- Node.js runs on various platforms (Windows, Linux, Unix, Mac OS X, etc.)
- Node.js uses JavaScript on the server

## Tech Stack

- Node.js can generate dynamic page content
- Node.js can create, open, read, write, delete, and close files on the server
- Node.js can collect form data
- Node.js can add, delete, modify data in your database

## Getting Started

Once you have downloaded and installed Node.js on your computer, let's try to display "Hello World" in a web browser. Create a Node.js file named "myfirst.js", and add the following code:

```bash
var http = require('http');

http.createServer(function (req, res) {
  res.writeHead(200, {'Content-Type': 'text/html'});
  res.end('Hello World!');
}).listen(8080)
```

## Command Line Interface

Node.js files must be initiated in the "Command Line Interface" program of your computer. How to open the command line interface on your computer depends on the operating system. For Windows users, press the start button and look for "Command Prompt", or simply write "cmd" in the search field. 

Navigate to the folder that contains the file "myfirst.js", the command line interface window should look something like this:

```bash
C:\Users\Your Name>_

C:\Users\Your Name>node myfirst.js
```
Now, your computer works as a server!

## Modules in NodeJS 

Consider modules to be the same as JavaScript libraries.
A set of functions you want to include in your application.Node.js has a set of built-in modules which you can use without any further installation. There are a bunch of built-in modules in Node JS.

### To include modules

To include a module, use the require() function with the name of the module. Now, the server has started on port 8080.

```bash
var http = require('http');

http.createServer(function (req, res) {
  res.writeHead(200, {'Content-Type': 'text/html'});
  res.end('Hello World!');
}).listen(8080);
```
## HTTP Module

HTTP or Hyper Text Transfer Protocol is a built-in module, which allows Node.js to transfer data over the Hyper Text Transfer Protocol (HTTP).

To include it:
```bash
var http = require('http');
```
### To use Node to create a web server
The HTTP module can create an HTTP server that listens to server ports and gives a response back to the client.
```bash
var http = require('http');

//create a server object:
http.createServer(function (req, res) {
  res.write('Hello World!'); //write a response to the client
  res.end(); //end the response
}).listen(8080); //the server object listens on port 8080
```

## More Resources

- [w3schools](https://www.w3schools.com/nodejs/default.asp)
- [NodeJS](https://nodejs.org/en/)
