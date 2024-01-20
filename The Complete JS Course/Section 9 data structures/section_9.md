<h2>Section 9 Data Structures, modern operators and Strings</h2>

---

<h5>Destructing arrays</h5>

Destructing - allows you to unpack values from arrays and objects into separate variables.

<span style="color: #FAA5A5">Example without destructuring</span>

```js
const arr = [2, 3, 4];
const a = arr[0];
const b = arr[1];
const c = arr[2];

console.log(a, b, c);
```

<span style="color: #FAA5A5">Example with destructuring</span>

```js
const [x, y, z] = arr;
console.log(x, y, z);
```

<details>
  <summary>Show the object restaurant </summary>

```js
const restaurant = {
  name: "Classico Italiano",
  location: "Via Angelo Tavanti 23, Firenze, Italy",
  categories: ["Italian", "Pizzeria", "Vegetarian", "Organic"],
  starterMenu: ["Focaccia", "Bruschetta", "Garlic Bread", "Caprese Salad"],
  mainMenu: ["Pizza", "Pasta", "Risotto"],

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
};
```

</details>

<span style="color: #FAA5A5">Show the first and second element</span>

```js
const [first, second] = restaurant.categories;
console.log(first, second); // Italian Pizzeria
```

<span style="color: #FAA5A5">Show the first and third element</span>

```js
const [first, , third] = restaurant.categories;
console.log(first, third); // Italian Vegetarian
```

<span style="color: #FAA5A5">Switch the position of the two variables</span>

```js
// Example whitout destructiring

let [main, secondary] = restaurant.categories;

const temp = main;
main = secondary;
secondary = temp;
console.log(main, secondary); // Pizzeria Italian

// Example with destructuring

let [main, secondary] = restaurant.categories;

[main, secondary] = [secondary, main];
console.log(main, secondary); // Pizzeria Italian
```

<span style="color: #FAA5A5">Add a method "order" to the object "restaurant"</span>

```js
const restaurant = {
  name: "Classico Italiano",
  location: "Via Angelo Tavanti 23, Firenze, Italy",
  categories: ["Italian", "Pizzeria", "Vegetarian", "Organic"],
  starterMenu: ["Focaccia", "Bruschetta", "Garlic Bread", "Caprese Salad"],
  mainMenu: ["Pizza", "Pasta", "Risotto"],

  order: function (starterIndex, mainIndex) {
    return [this.starterMenu[starterIndex], this.mainMenu[mainIndex]];
  },
};

console.log(restaurant.order(2, 0)); // ["Garlic Bread", "Pizza"]
// Destructring example
// Receiving two retirn values from a function
const [start, main] = restaurant.order(2, 0);
console.log(start, main); // Garlic Bread Pizza
```

<span style="color: #FAA5A5">Nested array</span>

```js
const nested = [2, 4, [5, 6]];
const [i, , j] = nested;
console.log(i, j); // 2 [5,6]
```

```js
// Break down the second array using destructuring
const nested = [2, 4, [5, 6]];
const [i, , [j, k]] = nested;
console.log(i, j, k); // 2 5 6
```

---

<h5 style="color: #FC3C3C">Destructing Objects</h5>

```js
const restaurant = {
  name: "Classico Italiano",
  location: "Via Angelo Tavanti 23, Firenze, Italy",
  categories: ["Italian", "Pizzeria", "Vegetarian", "Organic"],
  starterMenu: ["Focaccia", "Bruschetta", "Garlic Bread", "Caprese Salad"],
  mainMenu: ["Pizza", "Pasta", "Risotto"],
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
};
```

<span style="color: #FAA5A5">Destructing Objects</span>

```js
// Destruct the restaurant object
const { name, openingHours, categories } = restaurant;
console.log(name, openingHours, categories);
```

<span style="color: #FAA5A5">Change the variable name to be different from the property name</span>

```js
const {
  name: restaurantName,
  openingHours: hours,
  categories: tags,
} = restaurant;
console.log(restaurantName, hours, tags);
```

<span style="color: #FAA5A5">Set a default value</span>

```js
// Rename the `starterMenu` to `starters`, set the default value to an empty array
const { menu = [], starterMenu: starters = [] } = restaurant;
console.log(menu, starters); // [] ["Focaccia", "Bruschetta", "Garlic B...]
```

<span style="color: #FAA5A5">Mutating variables while destructing objects</span>

```js
let a = 111;
let b = 999;
const obj = { a: 23, b: 7, c: 14 };

({ a, b } = obj);
console.log(a, b); // Output 23 7
```

<span style="color: #FAA5A5">Nested Objects</span>

```js
const {
  fri: { open, close },
} = openingHours;
console.log(open, close); // 11 23
```

<span style="color: #FAA5A5">Call a function and pass an object of function</span>

```js
const restaurant = {
  name: "Classico Italiano",
  location: "Via Angelo Tavanti 23, Firenze, Italy",
  categories: ["Italian", "Pizzeria", "Vegetarian", "Organic"],
  starterMenu: ["Focaccia", "Bruschetta", "Garlic Bread", "Caprese Salad"],
  mainMenu: ["Pizza", "Pasta", "Risotto"],
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

  orderDelivery: function (obj) {
    console.log(obj);
  },
};

restaurant.orderDelivery({
  time: "22.30",
  address: "Via del Sole, 21",
  mainIndex: 2,
  starterIndex: 2,
});

// Output: {time: '22.30', address: 'Via del Sole, 21', mainIndex: 2, starterIndex: 2}
```

<span style="color: #FAA5A5">Example Object Destructuring</span>

```js
const restaurant = {
  name: "Classico Italiano",
  location: "Via Angelo Tavanti 23, Firenze, Italy",
  categories: ["Italian", "Pizzeria", "Vegetarian", "Organic"],
  starterMenu: ["Focaccia", "Bruschetta", "Garlic Bread", "Caprese Salad"],
  mainMenu: ["Pizza", "Pasta", "Risotto"],
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

  orderDelivery: function ({ starterIndex, mainIndex, time, address }) {
    console.log(
      `Order received ${this.starterMenu[starterIndex]} amd ${this.mainMenu[mainIndex]} will be delivered to ${address}`
    );
  },
};

restaurant.orderDelivery({
  time: "22.30",
  address: "Via del Sole, 21",
  mainIndex: 2,
  starterIndex: 2,
});

// Output: Order received Garlic Bread amd Risotto will be delivered to Via del Sole, 21
```

---

<h5 style="color: #FC3C3C">The Spread Operator (...)</h5>

<span style="color: #FAA5A5">Using the spread operator</span>

```js
const arr = [7, 8, 9];
// Creating arrays inefficiently, adding two elemetns in the begining
const badNewArr = [1, 2, arr[0], arr[1], arr[2]];
console.log(badNewArr);

// Using the spread operator
const newArr = [1, 2, ...arr];
console.log(newArr);
```

<span style="color: #FAA5a5">Add one more element to an array</span>

```js
// Create an array with one more food item in the mainMenu
const newMenu = [...restaurant.mainMenu, "Gnocci"];
console.log(newMenu); // (4) ["Pizza", "Pasta", "Risotto", "Gnocc...]
```

<span style="color: #FAA5a5">Merge two arrays together</span>

```js
// Copy array
const mainMenuCopy = [...restaurant.mainMenu];

// Join 2 arrays, containng both the mainMenu and the starterMenu
const menu = [...restaurant.starterMenu, ...restaurant.mainMenu];
console.log(menu); // ["Focaccia", "Bruschetta", "Garlic Bread", "Caprese Salad", "Pizza", "Pasta", "Risotto"]
```

<span style="color: #FAA5a5">Iterables</span>

Iterables are: arrays, strings, maps, sets. NOT objects

Example with a string:

```js
const str = "Todor";
const letters = [...str, "", "s."];
console.log(letters);
```

<span style="color: #FAA5a5">Function that accepts multiple arguments and uses the spread operator to pass those arguments</span>

```js
// Add a method (orderPasta) to the restaurant object

const restaurant = {
  name: "Classico Italiano",
  location: "Via Angelo Tavanti 23, Firenze, Italy",
  categories: ["Italian", "Pizzeria", "Vegetarian", "Organic"],
  starterMenu: ["Focaccia", "Bruschetta", "Garlic Bread", "Caprese Salad"],
  mainMenu: ["Pizza", "Pasta", "Risotto"],
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

  orderDelivery: function ({ starterIndex, mainIndex, time, address }) {
    console.log(
      `Order received ${this.starterMenu[starterIndex]} amd ${this.mainMenu[mainIndex]} will be delivered to ${address}`
    );
  },

  orderPasta: function (ing1, ing2, ing3) {
    console.log(`Here is your delicious pasta with ${ing1}, ${ing2}, ${ing3}`);
  },
};

restaurant.orderDelivery({
  time: "22.30",
  address: "Via del Sole, 21",
  mainIndex: 2,
  starterIndex: 2,
});
```

Create a new array that execpts promts from the user.
Call the `orderPasta` method

```js
const ingredients = [
  prompt(`Let\s make pasta! Ingredient 1?`),
  prompt(`Let\s make pasta! Ingredient 2?`),
  prompt(`Let\s make pasta! Ingredient 3?`),
];

console.log(ingredients);

restaurant.orderPasta(...ingredients);
```

Example with Objects

```js
// Objects
const newRestaurant = { foundedIn: 1998, ...restaurant, founder: "Guiseppe" };
console.log(newRestaurant);

const restaurantCopy = { ...restaurant };
restaurantCopy.name = "Ristorante Roma";
console.log(restaurantCopy.name); // Output: Ristorante Roma
console.log(restaurant.name); // Output: Classico Italiano
```

---

<h5 style="color: #FC3C3C">Rest Pattern and Parameters</h5>

Rest pattern looks exactly like the spread operator.
So it has the same syntax with the three dots.

The use cases for the spread operator are:

- Use the spread opeartor to nuild new arrays.
- Pass multiple values into a function.

The spread operator is to unpack an array while rest is to pack elements into an array.

```js
// SPREAD, because in RIGHT side of =
const arr = [1, 2, ...[3, 4]];

// REST, because on LEFT side of =
const [a, b, ...others] = [1, 2, 3, 4, 5];
console.log(a, b, others); // Output: 1 2 (3) [3, 4, 5]
```

<span style="color: #FAA5a5">Example with the `restaurant` object</span>

```js
// Array
const [pizza, , risotto, ...otherFood] = [
  ...restaurant.mainMenu,
  ...restaurant.starterMenu,
];

console.log(pizza, risotto, otherFood); // Pizza Risotto (4) ['Focaccia', 'Bruschetta', 'Garlic Bread', 'Caprese Salad']

// Object
const { sat, ...weekDays } = restaurant.openingHours;
console.log(weekDays); // Output: {thu, fri}
```

Using the Rest Operator with functions

```js
// Using the Rest parameter with function
const add = function (...numbers) {
  let sum = 0;
  for (let i = 0; i < numbers.length; i++) {
    sum += numbers[i];
  }
  console.log(sum);
};

add(2, 3);
add(2, 5, 6);
add(2, 35, 11, 12);
```
