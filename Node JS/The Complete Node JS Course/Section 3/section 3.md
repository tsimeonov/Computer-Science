## Section 3: Node.js Module System (Notes App)

### 3.1: Importing Node.js Core modules

This code snippet uses Node.js to create a text file named notes.txt and writes a specific string of text to it.

```js
const fs = require("fs")

fs.writeFileSync("notes.txt", "This file was created by Node js.")
```

Let's break it down step by step:

`const fs = require("fs"):`

This line imports the built-in fs (File System) module in Node.js. The fs module allows you to work with the file system, such as reading, writing, deleting, and updating files and directories.

`fs.writeFileSync("notes.txt", "This file was created by Node js."):`

The writeFileSync method is used to write data to a file. It is a synchronous method, meaning it blocks the execution of further code until the file operation is completed.
"notes.txt" is the name of the file that will be created or overwritten. If a file with this name already exists in the directory where the code is executed, it will be overwritten with the new content.
"This file was created by Node js." is the content that will be written to the file.

- Append a message to `note.txt`

```js
const fs = require("fs")


fs.appendFileSync("notes.txt", "my name is Todor Simeonov")
fs.appendFileSync("notes.txt", " I am 34 years old")
```

### 3.2: Importing your own files

##### Import a variable


<details>
  <summary>Code Example</summary>

```js
// Create a new file in this case the name is utilities.js

console.log("utilities.js");

const name = "Todor"

module.exports = name
```

```js
// Code in the app.js
const name = require("./utilities")

console.log(name);

// Output after running node app.js in the terminal
// utilities.js Todor
```
</details>

##### Import a function

<details>
  <summary>Code Example</summary>

```js
// code in the utilites.js
const add = function (a,b) {
    return a + b
}

module.exports = add
```

```js
// Code in the app.js
const add = require("./utilities")

console.log(add(5,4)); // Output 9
```
</details>

### 3.3: Importing npm Modules

To start using NPM the first step is:

1. Initialize NPM

```
npm init
```

2. Install a package

```
npm i validator
```
