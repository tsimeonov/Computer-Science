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

<details>
  <summary>Code Example</summary>

</details>