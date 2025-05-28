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
