'use strict';

const movements = [200, 450, -400, 3000, -650, -130, 70, 1300];

// FOR OF
console.log('FOR OF');
for (const [i, movement] of movements.entries()) {
	if (movement > 0) {
		console.log(`Movement ${i + 1} You deposited ${movement}`);
	} else {
		console.log(`Movement ${i + 1} You withdre ${movement}`);
	}
}

// FOR EACH
console.log('FOR EACH');
movements.forEach(function (movement, i, arr) {
	if (movement > 0) {
		console.log(`Movement ${i + 1} You deposited ${movement}`);
	} else {
		console.log(`Movement ${i + 1} You withdre ${movement}`);
	}
});

// 0: function (200)
// 1. function (450)
