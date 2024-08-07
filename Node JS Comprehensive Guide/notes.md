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
