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
	slidesPerView: 3,
	spaceBetween: 30,
});

/*=============== ELEVATE SWIPER ===============*/
const productsSwiper = new Swiper('.product-elevate-swiper', {
	loop: true,
	// If we need pagination
	pagination: {
		el: '.swiper-pagination',
	},
});
