const container = document.querySelector('.desserts-container');

async function loadAndRender() {
	const response = await fetch('./data.json');
	const dessertData = await response.json();

	function renderDesserts() {
		const viewPortWidth = window.innerWidth;

		const html = dessertData
			.map((dessert) => {
				let imageSrc = dessert.image.mobile;

				if (viewPortWidth >= 1024) {
					imageSrc = dessert.image.desktop;
				} else if (viewPortWidth >= 768) {
					imageSrc = dessert.image.tablet;
				}

				return `
      <div class="dessert-card">
        <img class="dessert-img" src="${imageSrc}"/
        <div class="dessert-button">
          <img src="./assets/images/icon-add-to-cart.svg"/>
          Add to Cart
        </div>
        <div class="dessert-title">${dessert.category}
        </div>
        <div class="dessrt-name">
          ${dessert.name}
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
