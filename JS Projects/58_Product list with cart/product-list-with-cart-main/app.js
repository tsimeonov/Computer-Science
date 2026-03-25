const container = document.querySelector('.desserts-container');

const dessertCard = document.querySelector('.dessert-card');

// 1. Create the function to fetch the data
async function loadAndRender() {
	const response = await fetch('./data.json');
	const dessertData = await response.json();

	console.log(dessertData);

	// Clear the container of the manual HTML placeholder
	container.innerHTML = '';

	// 2. Define render logic
	function renderDesserts() {
		// Clear current list before re-rendering (useful for resize)
		const cuurentCards = container.querySelectorAll('.dessert-card');

		cuurentCards.forEach((card) => card.remove());

		const width = window.innerWidth;

		// 2. Clone the tempalte we grabbed earlier
		const newCard = dessertCard.cloneNode(true);

		// 3. Update Image based on Screen Width
		const img = newCard.querySelector('.dessert-img');
		let imageSrc = dessert.image.mobile;

		if (width >= 1024) imageSrc = dessert.image.desktop;
		else if (width >= 768) imageSrc = dessert.image.tablet;

		img.src = imageSrc;
		img.alt = dessert.name;

		// 4, Fill in the Text data
		newCard.querySelector('.dessert-title').textContent = dessert.category;
		newCard.querySelector('.dessert-body').textContent = dessert.name;
		newCard.querySelector('.dessert-price').textContent =
			dessert.price.toFixed(2);

		// 5. Put it back i nthe container
		container.appendChild(newCard);
	}

	window.addEventListener('resize', renderDesserts);
}

loadAndRender();
