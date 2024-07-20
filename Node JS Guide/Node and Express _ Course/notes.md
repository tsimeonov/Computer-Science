<h5>1.1 What is Node.js</h5>

- Environment to run JS ouside Browser
- Built on Chrome's V8 JS Engine
- Big Community
- Full-stack

<h5>1.2 Course Requirements</h5>

- Intro
- Install
- Node Fundamentals
- Express Tutorial
- Building Apps.....

<h5>1.3 Course Structure</h5>

<h5>1.4 Bwowser Vs Server</h5>

|     Browser      |     Node.js     |
| :--------------: | :-------------: |
|       DOM        |     No DOM      |
|      Window      |    No window    |
| Interactive Apps | Serve Side Apps |
|  No Filesystem   |   Filesystem    |
|  Fragmentation   |    Versions     |
|   ES 6 Modules   |    CommonJS     |

<h5>1.5 REPL</h5

REPL - Read, Eval, Print, Loop

Accessing the REPL

```
// Type the command in the terminal
node
```

<h5>1.6 CLI</h5>

CLI - Command Line Interface

```node
<!-- First code -->
const amount = 12;

if (amount < 10) {
  console.log("Small number");
} else {
  console.log("Large number");
}

console.log(`Hey it's my first Node app!!!`);

<!-- run node and the file name `app.js` -->
```

<h5>1.7 Global Variables</h5>

Global varialbes can be accessed anywhere in the application.

`__dirname` - Path to current directory
`__filename` - File name
`require` - Function to use modules (CommonJS)
`module` - info about current module (file)
`process` - Info about environment where the program is being

```node
console.log(_dirname);
```

<h5>1.8 Modules</h5>

```node
<!-- Modules Start up code -->
const tom = "tom";
const peter = "peter";

const sayHi = (name) => {
  console.log(`Hello there ${name}`);
};

sayHi("Susan");
sayHi(tom);
sayHi(peter);
```

<h5>1.9 First Module</h5>
