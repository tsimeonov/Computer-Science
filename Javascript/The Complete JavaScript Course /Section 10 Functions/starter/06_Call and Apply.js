const lufthanse = {
	airline: 'Lufthansa',
	iataCode: 'LH',
	bookings: [],
	book(flighNum, name) {
		console.log(
			`${name} booked a set on ${this.airline} flight ${this.iataCode}${flighNum}`
		);
	},
};

lufthanse.book(239, 'Todor Simeonov');
lufthanse.book(643, 'John Smith');
