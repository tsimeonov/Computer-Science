// 1. Object literal

const car = {
	make: 'Toyota',
	model: 'Rav4',
	start: function () {
		console.log('Vrom');
	},
};

console.log(car);
console.log('-----------');

// Factory function
function createCar(make, model) {
	return {
		make: make,
		model: model,
		start() {
			console.log('Hello');
		},
	};
}

const car2 = createCar('Honda', 'Civic');
console.log(car2);

// Es6 class
class Car {
	constructor(make, model) {
		this.make = make;
		this.model = model;
		this.start();
	}
	start() {
		console.log('Hello');
	}
}

const car3 = new Car('Honda', 'Civic');
console.log(car3);
