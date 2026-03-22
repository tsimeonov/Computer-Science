const container = document.querySelector('.desserts-container');

// 1. Create the function to fetch the data
async function loadAndRender() {
	const response = await fetch('./data.json');
	const dessertData = await response.json();

	console.log(dessertData);

	// 2. Define render logic
	function renderDesserts() {
		const viewportWidth = window.innerWidth;

		// Create HTML string

		const html = dessertData
			.map((dessert) => {
				// Determine the correct image path based on width
				let imageSrc = dessert.image.mobile;

				// Update desktop image
				if (viewportWidth >= 1024) {
					imageSrc = dessert.image.desktop;
					console.log('Desktop');
				} else if (viewportWidth >= 768) {
					imageSrc = dessert.image.tablet;
					console.log('Tablet');
				}

				return `
      <div class="dessert-card">
        <img class="dessert-img" src="${imageSrc}" alt="${dessert.name}">
        <div class="dessert-button">
          <img src="./assets/images/icon-add-to-cart.svg"/>
          Add to Cart
        </div>
        <div class="dessert-title">${dessert.category}</div>
        <div class="dessert-body">${dessert.name}</div>
        <div class="dessert-price">$${dessert.price.toFixed(2)}</div>
      </div>
    `;
			})
			.join('');
		container.innerHTML = html;
	}
	renderDesserts();

	window.addEventListener('resize', renderDesserts);
}

loadAndRender();
