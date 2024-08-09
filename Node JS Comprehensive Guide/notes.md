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

| Commands   |      Description      | 
|:----------:|:-------------:|
| .break |  Terminates the current input .break is especially useful for multiline commands |
|.clear|Serves as alias for .break|
|.exit|Terminates the Node.js REPL|
|.help|Putputs a list of available commands|
|.load <file>|Loads a saved session from a file into the current REPL|
|.save|Saves the commands of the current REPL session to a file|
|.editor|Opens the editor mode where you can define a block of instructions|

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

```js
// Save the code in a separate file called server.js

import {createServer} from ''http';

const server = createServer();
server.listen(8080, () => {
  console.log(`Server is listening on ${server.address().port}`)
})

```

var, let and const 

In Javascript, there are now three ways available to define variables.
- If you define your variables by prefixing them with the `var` keyword, this has the effect that the variable is valid in the current function and all subfuctions.
- The `let` keyword enables you to define variables at the block level. For example, if you define a counter variable in a for loop with `let`, this variable is valid only within the loop.

















