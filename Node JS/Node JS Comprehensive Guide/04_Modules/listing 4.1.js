// Loading core modules

// Loading the entire module

const os = require('os');

// Printing os.uptime() value
let ut_sec = os.uptime();
let ut_min = ut_sec / 60;
let ut_hour = ut_min / 60;

ut_sec = Math.floor(ut_sec);
ut_min = Math.floor(ut_min);
ut_hour = Math.floor(ut_hour);

ut_hour = ut_hour % 60;
ut_min = ut_min % 60;
ut_sec = ut_sec % 60;

console.log(`Up time: ${ut_hour} Hours, ${ut_min} Minutes, ${ut_sec} seconds`);
