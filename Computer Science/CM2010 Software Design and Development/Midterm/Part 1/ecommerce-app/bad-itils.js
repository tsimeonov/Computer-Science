// bad-utils.js
// NEGATIVE COHESION: This file handles database connection,
// date formatting, and math calculations all in one place.

const mysql = require('mysql');

class Utilities {
	connectToDatabase(credentials) {
		// DB connection logic
		console.log('Connecting to DB...');
	}

	formatDate(date) {
		// Date formatting logic
		return `${date.getFullYear()}-${date.getMonth()}-${date.getDate()}`;
	}

	calculateTax(amount, rate) {
		// Financial logic
		return amount + amount * rate;
	}
}

module.exports = Utilities;
