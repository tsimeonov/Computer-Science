'use strict';

const container = document.querySelector('.container');
const seats = document.querySelectorAll('.rwo .seat:not(.occupied)');
const count = document.querySelector('#count');
const total = document.querySelector('#total');
const movieSelect = document.querySelector('#movie');

// populateUI();

// +movieSelect.value -> unary operator
let ticketPrice = +movieSelect.value;
