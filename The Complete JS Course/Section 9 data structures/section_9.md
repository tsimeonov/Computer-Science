<h2>Section 9 Data Structures, modern operators and Strings</h2>

---

<h5>Destructing arrays</h5>

Destructing - allows you to unpack values from arrays and objects into separate variables.

Example without destructuring

```js
const arr = [2, 3, 4];
const a = arr[0];
const b = arr[1];
const c = arr[2];

console.log(a, b, c);
```

Example with destructuring

```js
const [x, y, z] = arr;
console.log(x, y, z);
```

---
