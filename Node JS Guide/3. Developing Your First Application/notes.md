<h2>3. Developing Your First Application</h2>

<h5>3.1 Interactive Mode</h5>

<h6>3.1.1 General use</h6>

You can reach the interactive mode of Node.js, by entering the node command in the command line

```
node
```

Example of using commands in the Node.js REPL

```
$ node
> console.log("Hello")
Hello
undefined
>
```

<h5>3.1.2 Other REPL Commands</h5>

| Commands |                                   Description                                   |
| :------: | :-----------------------------------------------------------------------------: |
|  .break  | Terminates the current input .break is especially useful for multiple commands. |
|  .clear  |                           Serves as aliad for .break                            |
|  .exit   |                           Terminates the Node.js REPL                           |
|  .help   |                      Outputs a list of available commands.                      |
|  .load   |             Loads a saved session from a file into the current REPL             |
|  .save   |            Saves the commands of the current REPL session to a file.            |
| .editor  |       Opens the editor mode where you can define a block of instructions,       |

There are two options available to exit the REPL: using the .exit command `Ctr + D` , while will also terminates the process immediately. Alternatively, you can press `Ctr + C` twice.

<h5>3.1.3 Saving and Loading in the PERL</h5>

If you want to run more extensive tests in PERL or record the results, you can use the `.save` and `.load` commands to save the previously executed commands to a file or load a file with JS instructions into the current REPL.

```js
> console.log('Hello World!');
Hello world!
undefined
> .save myShell.js
Session saved to:myShell.js
> .load myShell.js
> console.log('Hello World!');
Hello world!
undefined
> 
```

<h5>3.1.4 Context of the REPL</h5>

<h5>3.1.5 REPL History</h5>

The Node.js REPL has special environment variables. Two of them concern historicizing entries.
- `NODE_REPL_HISTORY` - you can change the location of the history.
- `NODE_REPL_HISTORY_SIZE` - determines how many lines the history file can hold.

<h5>3.1.6 REPL MODE</h5>

You can use the `NODE_REPL_MODE` environment variable to determine in which mode you want to run the Node.js REPL.
The three possibile values are as follows:


