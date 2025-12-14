const { readFile, writeFile } = require('fs');

console.log('Started first task');
// Check file path
readFile('../content/first.txt', 'utf-8', (err, result) => {
	if (err) {
		console.log(err);
		return;
	}
	console.log(result);
	console.log('completed first task');
});

console.log('started next task');
