// 1. Object literal the most common way

// 2. Factory function is a normal function that builds and returns a new object literal

// 2. Factory function is a simple function that builds and returns a new object literal

// 2. Factory function is simply a function that builds and returns a object literal

// 1. Object literal
// 2. factory function
// 3. ES6 classes, the modern standats
// 4. constructor function the old-school way

// 1. Object literal, the most common
// 2. Factory function
// 3. ES6 classes, the modern way
// 4. constructor function

// 1. Object Literal
const car = {
	make: 'Toyota',
	model: 'Rav4',
	start: function () {
		console.log('Vroom');
	},
};

class Car {
	constructor(make, model) {
		this.make = make;
		this.model = model;
	}

	start() {
		console.log('Vroom');
	}
}

const newCar = new Car('Honda', 'Civic');

console.log(newCar);
