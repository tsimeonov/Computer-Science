### Spread Operator

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
