## Looping objects: Object keys, values and entries

Loping through objects in JS cna be done using **Object.keys()**, **Object.values()** and **Object.entries()**

1. Object.keys(obj)

Returns an array of the objects own property names (keys)

```js
const user = { name: "Alice", age: 25 };

Object.keys(user).forEach((key) => {
  console.log(key); // name, age
  console.log(user[key]); // Alice, 25
});
```
