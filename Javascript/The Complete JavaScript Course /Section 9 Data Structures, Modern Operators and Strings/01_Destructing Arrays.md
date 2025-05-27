## Destructing arrays

Destructing arrays in JavaScript is a syntax that allows you to unpack values from arrays into distinct variables.

```js
// THE STARTER CODE
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

  order: function (starterIndex, mainIndex) {
    return [this.starterMenu[starterIndex], this.mainMenu[mainIndex]];
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
};
```

<details>
  <summary>Basic Destructing</summary>
  
  ```javascript
const arr = [10, 20];
const [a, b] = arr;
console.log(a); // 10
console.log(b); // 20

  ```
</details>

<details>
  <summary>Skipping Elements</summary>
  
  ```javascript
const arr = ['apple', 'banana', 'cherry'];
const [first, , third] = arr;
console.log(first); // 'apple'
console.log(third); // 'cherry'
  ```
</details>

<details>
  <summary>Swapping Variables</summary>
  
  ```javascript
let x = 'coffee';
let y = 'tea';
[x, y] = [y, x];
console.log(x); // 'tea'
console.log(y); // 'coffee'
  ```
</details>

<details>
  <summary>Destructing Function Return Values</summary>
  
  ```javascript
function getCoordinates() {
  return [12, 34];
}
const [lat, long] = getCoordinates();
console.log(lat);  // 12
console.log(long); // 34

  ```
</details>

<details>
  <summary>Nested Destructing</summary>
  
  ```javascript
const nested = [1, 2, [3, 4]];
const [ , , [m, n]] = nested;
console.log(m); // 3
console.log(n); // 4
  ```
</details>

<details>
  <summary>Default Values</summary>
  
  ```javascript
const values = [7];
const [p = 1, q = 1, r = 1] = values;
console.log(p); // 7
console.log(q); // 1
console.log(r); // 1

  ```
</details>

