**Destructuring arrays in JavaScript** is a concise way to **extract values** from arrays and assign them to variables.

---

### 🔹 Basic Syntax

```js
const arr = [1, 2, 3];
const [a, b, c] = arr;

console.log(a); // 1
console.log(b); // 2
console.log(c); // 3
```

---

### 🔹 Skipping Items

```js
const arr = [10, 20, 30];
const [, second] = arr;

console.log(second); // 20
```

---

### 🔹 Default Values

```js
const arr = [5];
const [a, b = 10] = arr;

console.log(a); // 5
console.log(b); // 10 (default used)
```

---

### 🔹 Swapping Variables

```js
let x = 1;
let y = 2;

[x, y] = [y, x];

console.log(x); // 2
console.log(y); // 1
```

---

### 🔹 Nested Destructuring

```js
const nested = [1, [2, 3]];
const [a, [b, c]] = nested;

console.log(b); // 2
```

---

### 🔹 Using Rest `...`

```js
const arr = [1, 2, 3, 4];
const [first, ...rest] = arr;

console.log(first); // 1
console.log(rest); // [2, 3, 4]
```

---

Great! Here’s how you can **use array destructuring inside loops** in JavaScript:

---

### 🔹 Destructuring in `for...of` Loops

You can destructure arrays of arrays or arrays of objects inside a loop.

#### ✅ Example 1: Looping through pairs (tuples)

```js
const coordinates = [
  [1, 2],
  [3, 4],
  [5, 6],
];

for (const [x, y] of coordinates) {
  console.log(`x: ${x}, y: ${y}`);
}
```

---

### 🔹 Destructuring Array of Objects

```js
const users = [
  { name: "Alice", age: 25 },
  { name: "Bob", age: 30 },
];

for (const { name, age } of users) {
  console.log(`${name} is ${age} years old.`);
}
```

---

### 🔹 Destructuring with `entries()` (to get index and value)

```js
const colors = ["red", "green", "blue"];

for (const [index, color] of colors.entries()) {
  console.log(`${index}: ${color}`);
}
```

---

### 🔹 Using `forEach` with Destructuring

```js
const items = [
  ["pen", 1.5],
  ["notebook", 3.0],
];

items.forEach(([item, price]) => {
  console.log(`${item}: $${price}`);
});
```

---
