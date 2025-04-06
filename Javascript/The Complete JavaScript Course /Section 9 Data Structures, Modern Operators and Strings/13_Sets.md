## Sets

A `Set` is a built-in object that lets you store unique values of any type - primitives or object references.

1. Basic Usage

```js
const mySet = new Set();

mySet.add(1);
mySet.add(2);
mySet.add(2); // Duplicate, will be ignored
mySet.add("Hello");

console.log(mySet);
```

2. Useful Methods

| Method           | Description                                   |
| ---------------- | --------------------------------------------- |
| `.add(value) `   | Adds a value (if it's not already in the set) |
| `.has(value)`    | Checks if a value exist in the set            |
| `.delete(value)` | Removes a value from the set                  |
| `.clear()`       | Removes all values                            |
| `.size`          | Returns number of values in the set           |

```js
mySet.has(1); // true
mySet.delete(2); // true
mySet.size; // 2
```

3. Iterating over a Set

```js
const mySet = new Set();

mySet.add(1);
mySet.add(2);
mySet.add(2); // Duplicate, will be ignored
mySet.add("Hello");

for (let value of mySet) {
  console.log(value);
}
```

Examples

```js
const orderSet = new Set(["Pasta", "Pizza", "Pizza", "Risotto"]);

console.log(orderSet);

console.log(orderSet.size); // 3
console.log(orderSet.has("Pizza")); // true
console.log(orderSet.has("Bread")); // false

orderSet.add("Garlic bread");
orderSet.add("Garlic bread");
orderSet.delete("Risotto");
orderSet.add(orderSet);

for (const order of orderSet) {
  console.log(order);
}

// Example
const staff = ["Waiter", "Chef", "Waiter", "Manager", "Chef", "Waiter"];

const staffUnique = [...new Set(staff)];
console.log(staffUnique);
console.log(
  new Set(["Waiter", "Chef", "Waiter", "Manager", "Chef", "Waiter"]).size
);

console.log(new Set("todorsimeonov").size);
```
