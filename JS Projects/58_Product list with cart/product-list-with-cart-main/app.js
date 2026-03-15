const AllDessertImg = document.querySelectorAll('.dessert-img');

function updateImage() {
	const viewportWidth = window.innerWidth;

	AllDessertImg.forEach((img) => {
		const name = img.getAttribute('src');

		// Update desktop image
		if (viewportWidth < 375) {
			img.src = `./assets/images/image-${name}-mobile.jpg`;
		} else if (viewportWidth < 768) {
			img.src = `./assets/images/image-${name}-tablet.jpg`;
		} else {
			img.src = `./assets/images/image-${name}-desktop.jpg`;
		}
	});
}

updateImage();

window.addEventListener('resize', updateImage);

// console.log(dessertImg);
