// CommonJS, every file is module (by default)
// Modules - Encapsulated code (only share minimum)

const names = require('./3_names');
const sayHi = require('./4_utils');

console.log(names);

sayHi(names);
