### Rest patterns and parameters

---

```js
// Restaurant Object

const restaurant = {
	name: 'Classico Italiano',
	location: 'Via Angelo Tavanti 23, Firenze, Italy',
	categories: ['Italian', 'Pizzeria', 'Vegetarian', 'Organic'],
	starterMenu: ['Focaccia', 'Bruschetta', 'Garlic Bread', 'Caprese Salad'],
	mainMenu: ['Pizza', 'Pasta', 'Risotto'],

	openingHours: {
		thu: {
			open: 12,
			close: 22,
		},
		fri: {
			open: 11,
			close: 23,
		},
		sat: {
			open: 0, // Open 24 hours
			close: 24,
		},
	},

	order: function (starterIndex, mainIndex) {
		return [this.starterMenu[starterIndex], this.mainMenu[mainIndex]];
	},

	orderDelivery: function ({
		startIndex = 1,
		mainIndex = 0,
		time = '20.00',
		address,
	}) {
		console.log(
			`Order received! ${this.starterMenu[starterIndex]} and ${this.mainIndex[mainIndex]} will be delivered to ${address} at ${time}`
		);
	},

	orderPasta: function (ing1, ing2, ing3) {
		console.log(`Here is your delicious pasta with ${ing1}, ${ing2}, ${ing3}`);
	},
};
```

---

<details>
  <summary>1. Spread vs. Rest – Key Difference</summary>

Spread syntax (...) unpacks values from arrays/objects.

Rest syntax (...) collects values into arrays/objects or parameters.

They look the same but behave oppositely, depending on where they are used.

</details>

---

<details>
  <summary>2. Rest Pattern in Destructuring</summary>

Used to collect remaining elements of an array or object into a new array/object.

```js
// Array Destructing

const [a, b, ...others] = [1, 2, 3, 4, 5];
console.log(a); // 1
console.log(b); // 2
console.log(others); // [3, 4, 5]

// Object Destructing

const { sat, ...weekdays } = restaurant.openingHours;
console.log(sat); // Saturday's hours
console.log(weekdays); // { thu: ..., fri: ... }
```

</details>

---

<details>
  <summary>3. Rest Parameters in Functions</summary>

Used in function definitions to gather all remaining arguments into an array.

```js
// Summing Numbers
const add = function (...numbers) {
	let sum = 0;
	for (let i = 0; i < numbers.length; i++) sum += numbers[i];
	console.log(sum);
};

add(2, 3); // 5
add(5, 3, 7, 2); // 17

const x = [23, 5, 7];
add(...x); // 35 (spread passed to rest)
```

</details>

---

<details>
  <summary>4. Real-World Example – Restaurant Pizza Order Function</summary>

```js
restaurant.orderPizza = function (mainIngredient, ...otherIngredients) {
	console.log(mainIngredient);
	console.log(otherIngredients);
};

restaurant.orderPizza('mushrooms', 'onion', 'olives', 'spinach');
// 'mushrooms'
// ['onion', 'olives', 'spinach']

restaurant.orderPizza('mushrooms');
// 'mushrooms'
// []
```

</details>

---
