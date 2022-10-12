# Node JS

- Node.js is an open source server environment
- Node.js is free
- Node.js runs on various platforms (Windows, Linux, Unix, Mac OS X, etc.)
- Node.js uses JavaScript on the server


A common task for a web server can be to open a file on the server and return the content to the client.
Here is how PHP or ASP handles a file request:

Sends the task to the computer's file system.
Waits while the file system opens and reads the file.
Returns the content to the client.
Ready to handle the next request.
Here is how Node.js handles a file request:

Sends the task to the computer's file system.
Ready to handle the next request.
When the file system has opened and read the file, the server returns the content to the client.
Node.js eliminates the waiting, and simply continues with the next request.
Node.js runs single-threaded, non-blocking, asynchronous programming, which is very memory efficient.


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

## Resources

[w3schools](https://www.w3schools.com/nodejs/default.asp)
