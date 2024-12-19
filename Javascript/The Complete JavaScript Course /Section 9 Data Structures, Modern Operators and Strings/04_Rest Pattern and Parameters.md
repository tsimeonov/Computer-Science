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
