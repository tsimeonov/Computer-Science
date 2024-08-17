const chalk = require('chalk')
const yargs = require("yargs")

// Customize yard version
yargs.version("1.1.0")

// Create add command
yargs.command({
    command: "add",
    describe: "Add a new note",
    handler: function () {
        console.log("Adding a new note!");
    }
})

// Add, remove, read, list

console.log(yargs.argv);
