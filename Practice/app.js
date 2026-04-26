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

class Car {
	constructor(make, model) {
		this.make = make;
		this.model = model;
		this.start();
	}

	start() {
		console.log('Brrrrrr');
	}
}

const car2 = new Car('Toyota', 'Rav5');
console.log(car2);
