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

<h5>196. How to use the Native Modules</h5>

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

<h5>197. The NPM Package Manager and installing external node modules</h5>

- Node Package Manager
- Initialise NPM

```
npm init
```

- Install NPM Package

```
npm install <something>
```

- ECMA script modules

```
import * as fs from "node:fs/promisses"
```

<h5>198. [Project] QR Code Generator</h5>

Using two packages for this project `inquirer.js`, `qr-image`

<details>
  <summary>Solution to the Project</summary>

```javascript
/*
1. Use the inquirer npm package to get user input.

2. Use the qr-image npm package to turn the user entered URL into a QR code image.
3. Create a txt file to save the user input using the native fs node module.
*/

import inquirer from "inquirer";
import qr from "qr-image";
import fs from "fs";

inquirer
  .prompt([
    /* Pass your questions in here */
    {
      message: "Type a website name",
      name: "URL",
    },
  ])
  .then((answers) => {
    // Use user feedback for... whatever!!
    const url = answers.URL;
    var qr_svg = qr.image(url, { type: "png" });
    qr_svg.pipe(fs.createWriteStream("url.png"));

    fs.writeFileSync("url.txt", url, (err) => {
      if (err) throw err;
      console.log("The file has been saved");
    });
  })
  .catch((error) => {
    if (error.isTtyError) {
      // Prompt couldn't be rendered in the current environment
    } else {
      // Something else went wrong
    }
  });
```

</details>
