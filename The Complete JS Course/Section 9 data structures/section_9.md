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

---
