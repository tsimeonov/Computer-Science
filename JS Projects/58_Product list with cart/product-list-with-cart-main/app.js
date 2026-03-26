const container = document.querySelector('.dessert-container');

const originalCard = document.querySelector('.dessert-card');

// Clear the container of the manual HTML placeholder
const dessertCard = originalCard.cloneNode(true);
container.innerHTML = '';

// 1. Create the function to fetch the data
async function loadAndRender() {
	const response = await fetch('./data.json');
	const dessertData = await response.json();

	console.log(dessertData);

	// 2. Define render logic
	function renderDesserts() {
		// Use a DocumentFragment for better performance (avoid multiple repaints)
		const fragment = document.createDocumentFragment();

		const width = window.innerWidth;

		dessertData.forEach((dessert) => {
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
		});
	}

	// Inital call to show the items
	renderDesserts();

	window.addEventListener('resize', renderDesserts);
}

loadAndRender();
