const validator = require("validator")
const getNotes = require("./notes")

const chalk = require("chalk")

console.log(getNotes());

console.log(validator.isURL("https:/todor.bg"));

console.log(chalk.green("Hello"));
