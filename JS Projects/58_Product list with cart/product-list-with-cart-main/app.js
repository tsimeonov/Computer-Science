const dessertImg = document.querySelector('.dessert-img');

function updateImage() {
	const viewportWidth = window.innerWidth;

	// Update desktop image
	if (viewportWidth < 375) {
		dessertImg.src = './assets/images/image-waffle-mobile.jpg';
	} else if (viewportWidth < 768) {
		dessertImg.src = './assets/images/image-waffle-tablet.jpg';
	} else {
		dessertImg.src = './assets/images/image-waffle-desktop.jpg';
	}
}

updateImage();

window.addEventListener('resize', updateImage);

// console.log(dessertImg);
