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
