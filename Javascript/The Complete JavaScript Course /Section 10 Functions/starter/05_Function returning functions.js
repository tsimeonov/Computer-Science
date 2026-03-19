const greet = function (greeting) {
	return function (name) {
		console.log(`${greeting}, ${name}`);
	};
};

// Arrow function
// const greet = (greeting) => (name) => console.log(`${greeting}, ${name}`);

const greeterHey = greet('Hey');

greeterHey('Todor');
greeterHey('Steven');

greet('Hello')('Jonas');
