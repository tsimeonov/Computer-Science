const container = document.querySelector('.desserts-container');

async function loadAndRender() {
	const response = await fetch('./data.json');
	const dessertData = await response.json();

	console.log(dessertData);

	// Define render logic
	function renderDesserts() {
		const viewportWidth = window.innerWidth;

		const html = dessertData
			.map((dessert) => {
				// Determine the correct image path based on width
				let imageSrc = dessert.image.desktop;

				if (viewportWidth < 375) {
					imageSrc = dessert.image.mobile;
				} else if (viewportWidth < 768) {
					imageSrc = dessert.image.tablet;
				}

				return `
      <div>
        <img class="desset-img" src="${imageSrc}" alt="${dessert.name}"/>
        <div class="dessert-button">
          <img src="./assets/images/icon-add-to-cart.svg"/>
          Add to cart
        </div>
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
