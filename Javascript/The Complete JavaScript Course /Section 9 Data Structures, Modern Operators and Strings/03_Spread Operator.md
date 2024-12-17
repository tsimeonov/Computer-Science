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

  orderPasta: function (ing1, ing2, ing3) {
    console.log(`Here is your delicious pasta with ${ing1}, ${ing2}, ${ing3}`);
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

<details>
  <summary>Join two arrays</summary>

```js
const wholeMenu = [...restaurant.starterMenu, ...restaurant.mainMenu];

console.log(wholeMenu); // ['Focaccia','Bruschetta','Garlic Bread','Caprese Salad','Pizza','Pasta','Risotto']
```

</details>

<br>

<details>
  <summary>Use spread operator on a string</summary>

```js
// Iterables: arrays, strings, maps, sets. NOT objects
const str = "Todor";
const letters = [...str, "", "S."];

console.log(letters); //['T',  'o', 'd','o',  'r', '','S.']
```

</details>

<br>

<details>
  <summary>Real world example</summary>

```js
const ingredients = [
  prompt("Let's make pasta! Ingredient 1?"),
  prompt("Ingredient 2?"),
  prompt("Ingredient 3?"),
];
console.log(ingredients); // (3) ['a', 'b', 'c']

restaurant.orderPasta(ingredients[0], ingredients[1], ingredients[2]);
// Output Here is your delicious pasta with a, b, c

restaurant.orderPasta(...ingredients);
// Output Here is your delicious pasta with a, b, c
```

</details>

<br>

<details>
  <summary>Add new properties to an object</summary>

```js
// Add new properties to an object
const newRestaurant = { foundedIn: 1988, ...restaurant, founder: "Guiseppe" };
console.log(newRestaurant);
```

</details>

<br>

<details>
  <summary>Crate a copy of an object</summary>

```js
const restaurantCopy = { ...restaurant };
restaurantCopy.name = "Ristorante Roma";
console.log(restaurantCopy.name); // Ristorante Roma
console.log(restaurant.name); //Classico Italiano
```

</details>

<br>
