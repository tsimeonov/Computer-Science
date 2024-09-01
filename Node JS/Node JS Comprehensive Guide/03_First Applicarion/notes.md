<h2>3. Developing your first application</h2>

<h3>3.1 Interactive mode</h3>

REPL - read-eval-print loop

<h5>3.1.1 General Use</h5>

```js
// Definition of a Simple Node.js REPL Function
> function greet(name) {
console.log(`Hello ${name}`);
};
greet('world');
Hello world
undefined
>
```

<h5>3.1.2 Othe REPL Commands</h5>

|   Commands   |                                   Description                                   |
| :----------: | :-----------------------------------------------------------------------------: |
|    .break    | Terminates the current input .break is especially useful for multiline commands |
|    .clear    |                           Serves as alias for .break                            |
|    .exit     |                           Terminates the Node.js REPL                           |
|    .help     |                      Putputs a list of available commands                       |
| .load <file> |             Loads a saved session from a file into the current REPL             |
|    .save     |            Saves the commands of the current REPL session to a file             |
|   .editor    |       Opens the editor mode where you can define a block of instructions        |

<h5>3.1.3 Saving and Loading in the PERL</h5>

If you want to run more extensive tests in REPL or record the results, you can use `.save` and `.load` commands to save the previously executed commands to a file or load a file with JS.

```repl
> console.log("Hello world");
Hello world
undefined
> .save myShell.js
Session saved to:myShell.js
> .load myShell.js
> console.log("Hello world")
Hello world
undefined
```

<h5>3.1.4 Context of the REPL</h5>

<h5>3.1.5 REPL History</h5>

The Node.js REPL has some special environment variables. Two of them concern historicing entries.

- `NODE_REPL_HISTORY` - You can change the location of the history
- `NODE_REPL_HISTORY_SIZE` - Determines how many lines the history file can hold before overwritting older commands

<h5>3.1.6 REPL Mode</h5>

You can use `NODE_REPL_MODE` environment variable to determine in which mode you want to run the Node.js REPL.
The three possible values are:

- `sloppy` - The REPL is set to nonstrict mode.
- `strict` - The strict value activates the strict mode
- `magic` - This value is now deprecated and is used as an alias of `sloppy`

<h5>3.1.7 Searching in the REPL</h5>

The Node.js REPL allows you to not only navigate within the history using the arrow keys, but also to warch for specific lines.
You can use `Ctrl + R` and `Ctrl + S` to perform backward and forward search runs in the history.

<h5>3.1.8 Asynchronous Operations in the REPL</h5>

You can use the `await` keyword to wait for an asynchronous operation without registering a callback function.

```repl
// Using a Top-level Await in the REPL
$ node
Welcome to Node.js v16.8.0
Type ".help" for more information
> await Promise.resolve("Hello world");
"Hello World"
```

<h3>3.2 The First Application</h3>

<h5>3.2.1 Web Server in Node.js</h5>

This code snippet creates a basic HTTP server using Node.js from Listing 3_9

<details>
  <summary>Code snippet (more info)</summary>

- Step 1: Importing the HTTP Module

  This line imports the `createServer` function from the `http` module, which is part of Node.js's core modules. The `http` module provides the functionality to create and manage an `HTTP` server.

```js
import { createServer } from "http";
```

- Step 2: Creating the Server
  - The `createServer()` function is called to create a new HTTP server instance. However, unlike the previous example, no request handler function (callback) is provided as an argument.
  - Without a request handler, the server will not respond to incoming HTTP requests with any content. Instead, it will return a `404 Not Found` status for every request, since no handling logic is provided.

```js
const server = createServer();
```

- Step 3: Listening on Port 8080

  - `server.listen(8080, () => {...})` tells the server to start listening for incoming connections on port 8080.
  - The second argument is a callback function that is executed once the server successfully starts listening. - Inside this callback, `console.log` is used to print a message indicating that the server is listening on port 8080.

  ```js
  server.listen(8080, () => {
    console.log(`Server is listening on ${server.address().port}`);
  });
  ```

</details>

````

var, let and const

In Javascript, there are now three ways available to define variables.
- If you define your variables by prefixing them with the `var` keyword, this has the effect that the variable is valid in the current function and all subfuctions.
- The `let` keyword enables you to define variables at the block level. For example, if you define a counter variable in a for loop with `let`, this variable is valid only within the loop.
- The third way to define a variable is with the `const` keyword. Such varables aren't variables in the true sense, but constants, which means that you can't change the valuw of the variable after the initial assignment.

```js
// Running the Web server on Node.js

$ node server.mjs
Server is listening on 8800
````

<h5>3.2.2 Extending the Web Server</h5>

The code snippet for listing 3_11 is a basic example of how to create an HTTP server in Node.js using the built-in `http` module.

<details>
  <summary>Code Snippet (more info)</summary>

- Step 1: Importing the HTTP module

Import the `createServer` function from `http` module, which is a core module in Node.js for creating HTTP servers.

```js
import { createServer } from "http";
```

- Step 2: Creating the Server

  - `createServer` is called to create a new HTTP server. This functio takes a callback function as an argument. The callback is invoked every time a request is made to the server.
  - Callback function:
    - Parameters:
      - `request`: This object contains information about the incomming HTTP request (e.g, method, headers, URL)
      - `response`: This object is used to send a response back to the client
    - Response Handling
      - `response.writeHead(200, {"content-type": "text/plain; charset=utf-8"});`
        This line sends a response header to the client. The status code is `200` indicates that the request was successful. The `content-type` is set to `text/plain` with UTF-8 encoding, meanding the response will be a plain text/
      - `response.write("Hello")`
        This sends the string "Hello" as part of the response body.
      - `response.end("World\n")`
        This ends the response, sending the string `World` and a newline character `\n` to the client. After calling `end` , the response is complete, and no further data can be sent.

```js
// Step 2: Creating the server

const server = createServer((request, response) => {
  response.writeHead(200, { "content-type": "text/plain; charset=utf-8" });
  response.write("Hello");
  response.end("World\n");
});
```

- Step 3: Listening on Port 8080
  - `server.listen(8080, () => {...}` tells the server to start listening for incomming connections on port 8080.
  - The callback function passes to `listen` is executed once the server starts listening.
  - Inside the callback, `console.log` prints a message to the console indicating that the server is listening on pot 8080

```js
server.listen(8080, () => {
  console.log(`Server is listening to ${server.address().post}`);
});
```

</details>

<h5>3.2.3: Creating the HTML response</h5>

The full code is in Lisitng 3.12

The only change you need to make to the source code of the example is to adjust the contect type, which is now `text/html` instead of `text/plain`.

<details>
  <summary>Step by Step exmplanation</summary>

- Step 1: Importing the HTTP module

This line imports the `creatServer` funcion from the built-in `http` module in Node.js.

```js
import { createServer } from "http";
```

- Step 2: Creating the server:

The `createServer` function is called with a callback function that gets executed every time a request is made to the server.
This callback function takes two arguments: `request` (which contains information about the incoming request) and `response` (which is used to send a response back to the client).

```js
const server = createServer((request, response) => {
  ...
});
```

- Step 3: Setting the response header:

This line sets the response's HTTP status code to `200` (which means OK) and the contect type to `text/html` with a UTF-8 character encoding. This tells the browser that the server is sending an HTML document.

```js
response.writeHead(200, { "content-type": "text/html; charset=utf-8" });
```

- Step 4: Defining the response body:

Here, the server prepares an HTML document tag as a string. This HTML code includes a simple webpage with a "Hello World" message in green `<h1>` heading.

```js
const body = `<!DOCTYPE html>
  <html>
    <head>
      <meta charset="utf-8">
      <title>Node.js Demo</title>
    </head>
    <body>
      <h1 style="color:green">Hello World</h1>
    </body>
  </html>`;
```

- Step 5: Sending the response:

This line sends the HTML document as the response the the client and ends the response process.

```js
response.end(body);
```

- Step 6: Starting the server:

Finally the sever starts listening for incoming request on port `8080`.

```js
server.listen(8080, () => {
  console.log(
    `Server is listening to http://localhost:${server.address().port}`
  );
});
```

</details>

<h5>3.2.4: Generating Dynamic Responses</h5>
