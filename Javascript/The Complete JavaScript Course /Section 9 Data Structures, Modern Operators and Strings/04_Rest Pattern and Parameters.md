### Rest patterns and parameters

**Rest Pattern**

The rest pattern collects multiple elements and condenses them into a single array. It is used in destructuring assignments.

```js
const [a, b, ...rest] = [1, 2, 3, 4, 5];
console.log(a); // 1
console.log(b); // 2
console.log(rest); // [ 3, 4, 5 ]
```

**Rest Parameter**

Rest parameters allow a function to accept an indefinite number of arguments as an array.

```js
function sum(...numbers) {
  return numbers.reduce((acc, curr) => acc + curr, 0);
}

console.log(sum(1, 2, 3)); // 6
console.log(sum(4, 5, 6, 7)); // 22
```

**SPREAD vs REST**

```js
// SPREAD, because on RIGHT side of = (assignment operator)

const arr = [1, 2, ...[3, 4]];

// REST, because on LEFT side of = (assignment operator)
const [a, b, ...others] = [1, 2, 3, 4, 5];
console.log(a, b, others); // 1 2 [3, 4, 5]
```

**Rest operator**

```js
const [pizza, , risotto, ...otherFood] = [
  ...restaurant.mainMenu,
  ...restaurant.starterMenu,
];

console.log(pizza, risotto, otherFood); // Pizza Risotto ["Focaccia", "Bruschetta", "Garlic Bread", "Caprese Salad"]

// Objects
const { sat, ...weekDays } = restaurant.openingHours;
console.log(weekDays); // {open: 0, close: 24} {thu: {…}, fri: {…}}

// Function
const add = function (...numbers) {
  let sum = 0;
  for (let i = 0; i < numbers.length; i++) {
    sum += numbers[i];
  }
  console.log(sum);
};

add(2, 3); // 5
add(5, 3, 7, 2); // 17
add(3, 4, 5, 6, 7, 8); // 33
```
