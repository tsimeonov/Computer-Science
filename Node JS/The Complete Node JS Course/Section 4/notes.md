## Section 4: File system and command line args (Notes App)

### 4.1: Getting Input from the user

argv => argument vector

```js
const command = process.argv[2]

if (command === "add") {
    console.log("Adding note!");
} else if (command === 'remove') {
    console.log("Removing note!");
}

// Type node app.js add => Output is Adding note!
// Type node app.js remove => Output is Removinga note!
```

### 4.2: Argument parsing with Yargs

Yargs - is a interactive command line tool, it helps with parsing arguments.


If you want to add an additional flag for exmaple and title node will not parse the
result

```shel
node app.js add --title="Things to buy"

<!-- The result is --title="Things to buy" -->
```

Example using `yargs`

```terminal
node app.js add --title="Things to buy"

<!-- Output -->

{ _: [ 'add' ], title: 'Things to buy', '$0': 'app.js' }
```

- Create a new command using yargs

```js
// Create add command
yargs.command({
    command: "add",
    describe: "Add a new note",
    handler: function () {
        console.log("Adding a new note!");
    }
})
```

```terminal
node app.js add

<!-- Output -->
Adding a new note!
{ _: [ 'add' ], '$0': 'app.js' }
```

- Make sure the argument (option) for the command is a string and it's required

```js
yargs.command({
    command: "add",
    describe: "Add a new note",
    builder: {
        title: {
            describe: "Note title",
            demandOption: true,
            type: "string"
        }
    },
    handler: function (argv) {
        console.log("Adding a new note!", argv);
    }
})
```

.args vs yargs

```js
yargs.parse()
console.log(yargs.argv);

// The output for this two commands is the same

Adding a new note! { _: [ 'add' ], title: '', '$0': 'app.js' }  // Output
```

#### 4.3: Storing data with JSON

```js
const book = {
    title: "Lord of the rings",
    author: "Tolkin"
}

// Take a objects and returns a JSON
const bookJSON = JSON.stringify(book)

console.log(bookJSON);

// Take a JSON and returns an obejct
const parseData = JSON.parse(bookJSON)
console.log(parseData.author);
```

- Create a a new file "1-json.json" with a json string in it.

```js
const fs = require("fs")

const book = {
    title: "Lord of the rings",
    author: "Tolkin"
}

const bookJSON = JSON.stringify(book)
fs.writeFileSync("1-json.json", bookJSON)

// code in the 1-json.json

{"title":"Lord of the rings","author":"Tolkin"}
```