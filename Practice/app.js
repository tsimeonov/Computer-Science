const progress = document.getElementById('progress');
const prev = document.getElementById('prev');
const next = document.getElementById('next');
const cirlces = document.querySelectorAll('.circle');

let currentActive = 1;

next.addEventListener('click', () => {
	currentActive++;

	if (currentActive > cirlces.length) {
		currentActive = cirlces.length;
	}

	update();
});

prev.addEventListener('click', () => {
	currentActive--;

	if (currentActive < 1) {
		currentActive = 1;
	}

	update();
});
