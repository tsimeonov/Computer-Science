// Using the "setInterval" Function

let counter = 1;

const interval = setInterval(() => {
	console.log(`${counter} iteration`);
	if (counter++ > 5) {
		clearInterval(interval);
	}
}, 1000);
