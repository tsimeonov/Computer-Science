### Spread Operator

```js
// Restaurant Object

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

<details>
  <summary>1. Expanding Arrays</summary>

```js
const arr = [7, 8, 9];
const newArr = [1, 2, ...arr];
console.log(newArr); // [1, 2, 7, 8, 9]

```

</details>

<br>

<details>
  <summary>2. Logging Array elements individually</summary>

```js
console.log(...newArr); // 1 2 7 8 9
```

</details>

<br>

<details>
  <summary>3. Adding Items to existing Arrays</summary>

```js
const newMenu = [...restaurant.mainMenu, "Gnocchi"];
console.log(newMenu); // ['Pizza', 'Pasta', 'Risotto', 'Gnocchi']

```

</details>

<br>

<details>
  <summary>4. Copying Arrays (Shallow Copy)</summary>

```js
const mainMenuCopy = [...restaurant.mainMenu];

```

</details>

<br>

<details>
  <summary>5. Merging Array</summary>

```js
const fullMenu = [...restaurant.starterMenu, ...restaurant.mainMenu];
console.log(fullMenu); 
// ['Focaccia', 'Bruschetta', 'Garlic Bread', 'Caprese Salad', 'Pizza', 'Pasta', 'Risotto']

```

</details>

<br>

<details>
  <summary>6. Using Spread on Strings</summary>

```js
const name = "Jonas";
const letters = [...name, ' ', 'S.'];
console.log(letters); // ['J', 'o', 'n', 'a', 's', ' ', 'S.']
```

</details>

<br>

<details>
  <summary>7. Passing Array as Function Arguments</summary>

```js
const ingredients = ['mushrooms', 'asparagus', 'cheese'];
restaurant.orderPasta(...ingredients);
// Output: Here is your delicious pasta with mushrooms, asparagus, cheese

```

</details>

<br>

<details>
  <summary>8. Spread with Objects (ES2018+)</summary>

```js
// Create a new object
const newRestaurant = {
  ...restaurant,
  founder: "Giuseppe",
  foundedIn: 1998,
};
console.log(newRestaurant);

// Copy an Object
const restaurantCopy = { ...restaurant };
restaurantCopy.name = "Ristorante Roma";
console.log(restaurant.name);        // Classico Italiano
console.log(restaurantCopy.name);   // Ristorante Roma

```

</details>

<br>



