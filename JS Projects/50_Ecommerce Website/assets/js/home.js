/*=============== HOME SWIPER ===============*/
const homeSwiper = new Swiper('.home-swiper', {
	loop: true,
	// If we need pagination
	pagination: {
		el: '.swiper-pagination',
	},
});

/*=============== PRODUCT SWIPER ===============*/
const productSwiper = new Swiper('.product-swiper', {
	loop: true,

	breakpoints: {
		640: {
			slidesPerView: 2,
			spaceBetween: 20,
		},
		768: {
			slidesPerView: 4,
			spaceBetween: 40,
		},
		1200: {
			slidesPerView: 3,
			spaceBetween: 20,
		},
		1400: {
			slidesPerView: 3,
			spaceBetween: 30,
		},
	},
});

/*=============== ELEVATE SWIPER ===============*/
const elevateSwiper = new Swiper('.product-elevate-swiper', {
	loop: true,
	// If we need pagination
	pagination: {
		el: '.swiper-pagination',
	},
});
