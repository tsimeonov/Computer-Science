## Destructing objects

```js
"use strict";

// Data needed for a later exercise
const flights =
  "_Delayed_Departure;fao93766109;txl2133758440;11:25+_Arrival;bru0943384722;fao93766109;11:45+_Delayed_Arrival;hel7439299980;fao93766109;12:05+_Departure;fao93766109;lis2323639855;12:30";

// Data needed for first part of the section
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

<details>
  <summary>1. Basic Object Destructing</summary>

```javascript
const restaurant = {
  name: "Classico Italiano",
  categories: ["Italian", "Pizzeria", "Vegetarian"],
  openingHours: {
    fri: { open: 11, close: 23 }
  }
};

const { name, categories, openingHours } = restaurant;

console.log(name);         // "Classico Italiano"
console.log(categories);   // ["Italian", "Pizzeria", "Vegetarian"]
console.log(openingHours); // { fri: { open: 11, close: 23 } }
```

</details>

---

<details>
  <summary>2. Renaming Variables</summary>

```javascript
const { name: restaurantName, categories: tags } = restaurant;

console.log(restaurantName); // "Classico Italiano"
console.log(tags);           // ["Italian", "Pizzeria", "Vegetarian"]

```

</details>

---

<details>
  <summary>3. Default variables</summary>

```javascript
const { menu = [], starterMenu = [] } = restaurant;

console.log(menu);        // [] (default, since `menu` does not exist)
console.log(starterMenu); // ["Focaccia", "Bruschetta", "Garlic Bread"]
```

</details>

---

<details>
  <summary>4. Mutaing Existing Varialbes</summary>

```javascript
let a = 10, b = 20;
const obj = { a: 5, b: 15 };

({ a, b } = obj);

console.log(a); // 5
console.log(b); // 15

```

</details>

---

<details>
  <summary>5. Nested Object Destructing</summary>

```javascript
// Extract values from nested obhects directly

const { fri: { open, close } } = restaurant.openingHours;

console.log(open);  // 11
console.log(close); // 23

// You can also rename nested values:

const { fri: { open: o, close: c } } = restaurant.openingHours;

console.log(o); // 11
console.log(c); // 23
```

</details>

---

<details>
  <summary>6. Destructing in Function Parameters</summary>

```javascript
restaurant.orderDelivery = function ({
  starterIndex = 1,
  mainIndex = 0,
  time = "20:00",
  address
}) {
  console.log(`Order received! ${this.starterMenu[starterIndex]} and ${this.mainMenu[mainIndex]} will be delivered to ${address} at ${time}.`);
};

restaurant.orderDelivery({
  address: "Via del Sole, 21",
  starterIndex: 2
});
// Output: Order received! Garlic Bread and Pizza will be delivered to Via del Sole, 21 at 20:00.

```

</details>

---
