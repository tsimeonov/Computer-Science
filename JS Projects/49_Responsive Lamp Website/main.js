/*=============== SHOW MENU ===============*/

const navMenu = document.getElementById('nav-menu');
const navToggle = document.getElementById('nav-toggle');
const navClose = document.getElementById('nav-close');

// MENU SHOW
// Valiadate if constant exists
if (navToggle) {
	navToggle.addEventListener('click', () => {
		navMenu.classList.add('show-menu');
	});
}

// MENU HIDDEN
// Validate if constant exists
if (navClose) {
	navClose.addEventListener('click', () => {
		navMenu.classList.remove('show-menu');
	});
}

/*=============== REMOVE MENU MOBILE ===============*/

const navLink = document.querySelectorAll('.nav-link');

const linkAction = () => {
	const navMenu = document.getElementById('nav-menu');
	// When we click on each nav-link, we remove the show-menu
	navMenu.classList.remove('show-menu');
};

navLink.forEach((n) => n.addEventListener('click', linkAction));

/*=============== CHANGE BACKGROUND HEADER ===============*/
const scrollHeader = () => {
	const header = document.getElementById('header');
	// When the scroll is greater than 50 viewport height, and the scroll-header calls
	window.scrollY >= 50
		? header.classList.add('bg-header')
		: header.classList.remove('bg-header');
};
window.addEventListener('scroll', scrollHeader);

/*=============== SWIPER POPULAR ===============*/
// Initialize Swiper
const popularSwiper = new Swiper('.popular-content', {
	// Optional parameters
	slidesPerView: 'auto',
	centeredSlides: true,
	loop: true,

	// Navigation arrows
	navigation: {
		nextEl: '.swiper-button-next',
		prevEl: '.swiper-button-prev',
	},
});

/*=============== CHOOSE FAQ ===============*/

/*=============== SHOW SCROLL UP ===============*/

/*=============== SCROLL SECTIONS ACTIVE LINK ===============*/

/*=============== DARK LIGHT THEME ===============*/

/*=============== SCROLL REVEAL ANIMATION ===============*/
