/*=============== ACCORDION ===============*/
const accordionItems = document.querySelectorAll('.accordion-item');

accordionItems.forEach((item) => {
	const header = item.querySelector('.accordion-header');
	const content = item.querySelector('.accordion-content');
	const icon = item.querySelector('.accordion-header i');

	header.addEventListener('click', () => {
		const isOpen = item.classList.toggle('accordion-open');

		content.style.height = isOpen ? content.scrollHeight + 'px' : '0';
		icon.className = isOpen ? 'ri-subtract-line' : 'ri-add-line';
	});
});
