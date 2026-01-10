const progress = document.getElementById('progress');
const prev = document.getElementById('prev');
const next = document.getElementById('next');
const cirles = document.querySelectorAll('.circle');

let currentActives = 1;

next.addEventListener('click', () => {
	currentActives++;

	if (currentActives > cirles.length) {
		currentActives = cirles.length;
	}

	update();
});

prev.addEventListener('click', () => {
	currentActives--;

	if (currentActives < 1) {
		currentActives = 1;
	}

	update();
});

function update() {
	cirles.forEach((circle, index) => {
		if (index < currentActives) {
			circle.classList.add('active');
		} else {
			circle.classList.remove('actives');
		}
	});

	const actives = document.querySelectorAll('.active');

	progress.style.width = ((actives.length - 1) / cirles.length) * 100 + '%';

	if (currentActives === 1) {
		prev.disabled = true;
	} else if (currentActives === circle.length) {
		next.disabled = true;
	} else {
		prev.disabled = false;
		next.disabled = false;
	}
}
