<h2>Section 9 Data Structures, modern operators and Strings</h2>

---

<h5>Destructing arrays</h5>

Destructing - allows you to unpack values from arrays and objects into separate variables.

Example without destructuring

```js
const arr = [2, 3, 4];
const a = arr[0];
const b = arr[1];
const c = arr[2];

console.log(a, b, c);
```

Example with destructuring

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

Show the first and second element

```js
const [first, second] = restaurant.categories;
console.log(first, second); // Italian Pizzeria
```

Show the first and third element

```js
const [first, , third] = restaurant.categories;
console.log(first, third); // Italian Vegetarian
```

---
