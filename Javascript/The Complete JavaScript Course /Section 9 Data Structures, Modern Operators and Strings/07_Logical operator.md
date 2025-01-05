### Logical Assignment Operators

```js
const rest1 = {
  name: "Capri",
  // numGuest: 20,
  numGuest: 0,
};

const rest2 = {
  name: "La piazza",
  owner: "Giovanni Rossi",
};

// rest1.numGuest = rest1.numGuest || 10;
// rest1.numGuest ||= 10;
// Nullish assignment operator
rest1.numGuest ??= 10;

// rest2.numGuest = rest2.numGuest || 10;
// rest2.numGuest ||= 10;
// Nullish assignment operator
rest2.numGuest ??= 10;

// AND assignment operator
// rest1.owner = rest1.owner && "<ANONYMOUS>";
// rest2.owner = rest2.owner && "<ANONYMOUS>";
rest1.owner &&= "<ANONYMOUS>";
rest2.owner &&= "<ANONYMOUS>";

console.log(rest1);
console.log(rest2);
```
