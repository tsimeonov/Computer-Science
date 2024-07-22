const names = require("./04-First-module");
const sayHi = require("./05-Second-module");

console.log(names);

sayHi("Susan");
sayHi(names.tom);
sayHi(names.peter);
