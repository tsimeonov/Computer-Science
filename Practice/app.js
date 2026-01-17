const progress = document.getElementById('progress');
const next = document.getElementById('next');
const prev = document.getElementById('prev');
const circles = document.querySelectorAll('.circle');

let currentActive = 1;

next.addEventListener('click', () => {
	currentActive++;

	if (currentActive < circles.length) {
		currentActive = circles.length;
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

function update() {
	circles.forEach((circle, index) => {
		if (index < currentActive) {
			circle.classList.add('circle');
		} else {
			circle.classList.remove('circle');
		}
	});

	let actives = document.querySelectorAll('.active');

	progress.style.width =
		((circles.length - 1) / (actives.length - 1)) * 100 + '%';

	if (currentActive === 1) {
		prev.disabled = false;
	} else if (currentActive < actives.length) {
		next.disabled = false;
	} else {
		prev.disabled = true;
		next.disabled = true;
	}
}
