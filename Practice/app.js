const progress = document.getElementById('progress');
const prev = document.getElementById('prev');
const next = document.getElementById('next');
const cirlces = document.querySelectorAll('.circle');

let currentActive = 1;

function update() {
	cirlces.forEach((circle, index) => {
		if (index < currentActive) {
			circle.classList.add('active');
		} else {
			cirlces.classList.remove('active');
		}
	});

	const actives = document.querySelectorAll('.active');
}
