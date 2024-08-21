const chalk = require('chalk')
const yargs = require("yargs")

const notes = require("./notes")

// Customize yard version
yargs.version("1.1.0")

// Create add command
yargs.command({
    command: "add",
    describe: "Add a new note",
    builder: {
        title: {
            describe: "Note title",
            demandOption: true,
            type: "string"
        },
        body: {
            describe: "Note body",
            demandOption: true,
            type: "string"
        }
    },
    handler: function (argv) {
        // console.log(`Title: ${argv.title}`);
        // console.log(`Body: ${argv.body}`);
        notes.addNote(argv.title, argv.body)
    },

})

// Create remove command
yargs.command({
    command: "remove",
    describe: "Remove a note",
    handler: function() {
        console.log("Removing a note!");
    }
})

// Create list command
yargs.command({
    command: "list",
    describe: "List all the notes!",
    handler: function() {
        console.log("List all the notes!");
    }
})

// Create reading a note
yargs.command({
    command: "read",
    describe: "Reading a note",
    handler: function() {
        console.log("Reading a note!");
    }
})


yargs.parse()
// console.log(yargs.argv);
