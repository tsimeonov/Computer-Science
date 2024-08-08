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

