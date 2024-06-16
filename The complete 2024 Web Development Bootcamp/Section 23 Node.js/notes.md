<h1>Section 23: Node.js</h1>

<h5>192. What is Node.js</h5>

<h5>195. Using Node.js</h5>

- Version check

```
node -v
```

- Node REPL

REPL (Read, Eval, Print, Loop) -> is a computer environment where inputs are read and evaluated, and then the results are returned to the user.

```
node
```

- Running JS Files

```
<!-- Use this command to run the code from the index.js in the terminal -->
node index.js
```

<h5>Using Node.js</h5>

- What are Native Modules?
  In Node.js native modules (also known as core modules) are built-in modules that come packaged with Node.js.

- File system module
  The file system is a native node module that allows us to access the local storage.

```node
const fs = require("fs");

fs.writeFileSync("message.txt", "Hello from Node.js", (err) => {
  if (err) throw err;
  console.log("The file has been saved");
});
```

```
<!-- Type the following in the terminal -->
node index.js
```
