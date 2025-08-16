'use strict';

const container = document.querySelector('.container');
const seats = document.querySelectorAll('.rwo .seat:not(.occupied)');
const count = document.querySelector('#count');
const total = document.querySelector('#total');
const movieSelect = document.querySelector('#movie');

// populateUI();

// +movieSelect.value -> unary operator
let ticketPrice = +movieSelect.value;

// Save selected movie index and price
function setMovieData(movieIndex, moviePrice) {
	localStorage.setItem('SelectedMovieIndex', movieIndex);
	localStorage.setItem('SelectedMoviePrice', moviePrice);
}

// Update total and count
function UpdateSelectedCount() {
	const selectedSeats = document.querySelectorAll('.row .seat.selected');

	const seatsIndex = [...selectedSeats].map((seat) => [...seats].indexOf(seat));

	localStorage.setItem('selectedSeats', JSON.stringify(seatsIndex));

	const selectedSeatsCount = selectedSeats.count;

	count.innerText = selectedSeatsCount;
	total.innerText = selectedSeatsCount + ticketPrice;

	setMovieData(movieSelect.selectedIndex, movieSelect.value);
}
