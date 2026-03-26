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
			const desktopSource = newCard.querySelector('source[media*="1024px"]');
			const tabletSource = newCard.querySelector('source[media*="768px"]');
			const fallbackImg = newCard.querySelector('img');

			// Assign Unique images from the JSON data
			if (desktopSource) desktopSource.srcset = dessert.image.desktop;
			if (tabletSource) tabletSource.srcset = dessert.image.tablet;

			// The img tag handles mobile and general fallback
			fallbackImg.src = dessert.image.mobile;
			fallbackImg.alt = dessert.name;

			// 4, Fill in the Text data
			newCard.querySelector('.dessert-title').textContent = dessert.category;
			newCard.querySelector('.dessert-body').textContent = dessert.name;
			newCard.querySelector('.dessert-price').textContent =
				dessert.price.toFixed(2);

			fragment.appendChild(newCard);
		});
		container.appendChild(newCard);
	}

	// Inital call to show the items
	renderDesserts();

	window.addEventListener('resize', renderDesserts);
}

loadAndRender();
