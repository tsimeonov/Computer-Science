### Spread Operator

<details>
  <summary>Restaurant object</summary>

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

  orderDelivery: function ({
    startIndex = 1,
    mainIndex = 0,
    time = "20.00",
    address,
  }) {
    console.log(
      `Order received! ${this.starterMenu[starterIndex]} and ${this.mainIndex[mainIndex]} will be delivered to ${address} at ${time}`
    );
  },
};
```

</details>

<br>

<details>
  <summary>Adding values to an existing array</summary>

```js
// Without spread operator
const arr = [7, 8, 9];
const badNewArr = [1, 2, arr[0], arr[1], arr[2]];
console.log(badNewArr); // [ 1, 2, 7, 8, 9 ]

// With spread operator
const newGoodArr = [1, 2, ...arr];
console.log(newGoodArr); // [ 1, 2, 7, 8, 9 ]
```

</details>

<br>

<details>
  <summary>Adding a new value to restaurant.mainMenu</summary>

```js
const newMenu = [...restaurant.mainMenu, "Gnocci"];
console.log(newMenu); // [ 'Pizza', 'Pasta', 'Risotto', 'Gnocci' ]
```

</details>

<br>

<details>
  <summary>Create a copy of an array</summary>

```js
const mainMenuCopy = [...restaurant.mainMenu];
console.log(mainMenuCopy); // [ 'Pizza', 'Pasta', 'Risotto' ]
```

</details>

<br>
