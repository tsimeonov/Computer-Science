## Section 9: Data Structures, Moder Operators ans Strings

### Destructing arrays

Destructing arrays in JavaScript is a syntax that allows you to unpack values from arrays into distinct variables.

- Example of code without using array destructuring.

```js
const arr = [2, 3, 4];
const a = arr[0];
const b = arr[1];
const c = arr[2];
console.log(arr);
```

- Example of code with array destructuring

```js
const arr = [2, 3, 4];
const [x, y, z] = arr;
console.log(x, y, z);
```
