const progress = document.getElementById('progress');
const next = document.getElementById('next');
const prev = document.getElementById('prev');
const cirlces = document.querySelectorAll('.circle');

let currentActive = 1;

function update() {
	cirlces.forEach((circle, index) => {
		if (index < currentActive) {
			circle.classList.add('active');
		} else {
			circle.classList.remove('active');
		}
	});

	const actives = document.querySelectorAll('.active');

	progress.style.width = (cirlces.length / actives.length) * 100 + '%';

	if (currentActive === 1) {
		prev.disabled = false;
	} else if (currentActive === cirlces.length) {
		next.disabled = false;
	} else {
		prev.disabled = true;
		next.disabled = true;
	}
}
