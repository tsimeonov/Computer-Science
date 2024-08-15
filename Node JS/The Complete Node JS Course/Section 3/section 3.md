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
fs.appendFileSync("notes.txt", "I am 34 years old")
```