const lufthanse = {
	airline: 'Lufhthansa',
	iataCode: 'LH',
	bookings: [],
	book(flightNum, name) {
		console.log(
			`${name} booked a sit on ${this.airline} flight ${this.iataCode}${flightNum}`
		);
		this.bookings.push({ flight: `${this.iataCode}${flightNum}`, name });
	},
};

lufthanse.book(239, 'Todor Simeonov');
lufthanse.book(643, 'John Smith');
console.log(lufthanse);

const eurowings = {
	airline: 'Eurowings',
	iataCode: 'EW',
	bookings: [],
};

const book = lufthanse.book;

// Does NOT Work
// book(23, 'Sarah Williams');

// Call method
book.call(eurowings, 23, 'Sarah Williams');
console.log(eurowings);

book.call(lufthanse, 411, 'Mary Cooper');
console.log(lufthanse);

// Apply method
const flightData = [503, 'George Cooper'];
book.apply(lufthanse, flightData);
console.log(flightData);
