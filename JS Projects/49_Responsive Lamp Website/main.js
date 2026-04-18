/*=============== SHOW MENU ===============*/
const navMenu = document.getElementById('nav-menu');
const navToggle = document.getElementById('nav-toggle');
const navClose = document.getElementById('nav-close');

// MENU SHOW
// Validate if constant exists
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
	// When we click on each nav-link, we remove the show-menu class
	navMenu.classList.remove('show-menu');
};

navLink.forEach((n) => n.addEventListener('click', linkAction));

/*=============== CHANGE BACKGROUND HEADER ===============*/
const scrollHeader = () => {
	const header = document.getElementById('header');
	// When the scroll is greater than 50 viewport height, add the bg-header class to the header tag
	this.scrollY >= 50
		? header.classList.add('bg-header')
		: header.classList.remove('bg-header');
};

window.addEventListener('scroll', scrollHeader);

/*=============== SWIPER POPULAR ===============*/
const popularSwiper = new Swiper('.popular-content', {
	// Optional parameters
	slidesPerView: 'auto',
	loop: true,

	// Navigation arrows
	navigation: {
		nextEl: '.swiper-button-next',
		prevEl: '.swiper-button-prev',
	},
	breakpoints: {
		768: {
			centeredSlides: false,
		},
	},
});

/*=============== CHOOSE FAQ ===============*/
const faqItems = document.querySelectorAll('.choose-faq-item');

// 1. Select each item
faqItems.forEach((item) => {
	const faqHeader = item.querySelector('.choose-faq-header');

	// 2. Select each button click
	faqHeader.addEventListener('click', () => {
		// 7. Select the current faq-open class
		const openItem = document.querySelector('.faq-open');

		// 5. Call the toggleItem function
		toggleItem(item);

		// 8. Remove the faq-open class from other items
		if (openItem && openItem != item) {
			toggleItem(openItem);
		}
	});

	// 3. Create function to display the content
	const toggleItem = (item) => {
		// 3.1 Select each faq content
		const faqContent = item.querySelector('.choose-faq-content');

		// 6. If the same item contains the faq-open class, remove
		if (item.classList.contains('faq-open')) {
			faqContent.removeAttribute('style');
			item.classList.remove('faq-open');
		} else {
			// 4. Add max-height to the content and add the faq-open class
			faqContent.style.height = faqContent.scrollHeight + 'px';
			item.classList.add('faq-open');
		}
	};
});

/*=============== SHOW SCROLL UP ===============*/
const scrollUp = () => {
	const scrollUp = document.getElementById('scroll-up');
	// When the scroll is higher than 350 viewport height, add the show-scroll class to the a tag with the scrollup class
	this.scrollY >= 350
		? scrollUp.classList.add('show-scroll')
		: scrollUp.classList.remove('show-scroll');
};

window.addEventListener('scroll', scrollUp);

/*=============== SCROLL SECTIONS ACTIVE LINK ===============*/
const sections = document.querySelectorAll('section[id]');

const scrollActive = () => {
	const scrollY = window.scrollY;

	sections.forEach((current) => {
		const sectionHeight = current.offsetHeight;
		const sectionTop = current.offsetTop - 58;
		const sectionId = current.getAttribute('id');
		const sectionsClass = document.querySelector(
			'.nav-menu a[href*=' + sectionId + ']'
		);

		if (scrollY > sectionTop && scrollY <= sectionTop + sectionHeight) {
			sectionsClass.classList.add('active-link');
		} else {
			sectionsClass.classList.remove('active-link');
		}
	});
};

window.addEventListener('scroll', scrollActive);

/*=============== DARK LIGHT THEME ===============*/
const themeButton = document.getElementById('theme-button');
const darkTheme = 'dark-theme';
const iconTheme = 'ri-sun-line';

// Previously selected topic (if user selected)
const selectedTheme = localStorage.getItem('selected-theme');
const selectedIcon = localStorage.getItem('selected-icon');

// We obtain the current theme that the interfacer has by validating the dark-theme class
const getCurrentTheme = () =>
	document.body.classList.contains(darkTheme) ? 'dark' : 'light';
const getCurrentIcon = () => {
	themeButton.classList.contains(iconTheme) ? 'ri-moon-line' : 'ri-sun-line';
};

// We validate if the user previously chose a topic
if (selectedTheme) {
	// If the validation is fulfilled, we ask what the issue was to know if we activated or deactived the darl
	document.body.classList[selectedTheme === 'dark' ? 'add' : 'remove'](
		darkTheme
	);
	themeButton.classList[selectedIcon === 'ri-moon-line' ? 'add' : 'remove'](
		iconTheme
	);
}

// Activate / deactivate the theme manually with the button
themeButton.addEventListener('click', () => {
	// Add or remove the dark / icon theme
	document.body.classList.toggle(darkTheme);
	themeButton.classList.toggle(iconTheme);
	// We save the theme and the current icon that the user chose
	localStorage.setItem('selected-theme', getCurrentTheme());
	localStorage.setItem('selected-icon', getCurrentIcon());
});

/*=============== SCROLL REVEAL ANIMATION ===============*/

const sr = ScrollReveal({
	origin: 'top',
	distance: '60px',
	duration: 2500,
	delay: 400,
});

sr.reveal(
	`.home-content, .popular-container, .products-container, .join-bg, .footer-container`
);
sr.reveal(`.home-image`, { origin: 'bottom' });
sr.reveal(`.choose-image, .features-image`, { origin: 'left' });
sr.reveal(`.choose-content, .choose-content`, { origin: 'right' });
