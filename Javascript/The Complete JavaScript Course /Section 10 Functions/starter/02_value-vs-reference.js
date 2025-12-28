'use strict';

const flight = 'LH234';
const todor = {
	name: 'Todor Simeonov',
	passport: 12421421412,
};

const checkIn = function (flightNum, passenger) {
	flightNum = 'LH999';
	passenger.name = `MR. ${passenger.name}`;

	if (passenger.passport === 12421421412) {
		alert('Checke In');
	} else {
		alert('Wrong passport');
	}
};

// checkIn(flight, todor);
// console.log(flight);
// console.log(todor);

// Is the same as doing...
const flightNum = flight;
const passenger = todor;

const newPassport = function (person) {
	person.passport = Math.trunc(Math.random() * 100000000);
};

newPassport(todor);
checkIn(flight, todor);
