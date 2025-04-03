## Maps

A Map is similar to an object ({}), but with some key advantages:

✅ Key Features of Map

- Any type can be used as a key — not just strings.

- Maintains insertion order of keys.

- Has built-in methods like .set(), .get(), .has(), etc.

🔧 Basic Usage

```js
const myMap = new Map();

// Set values
myMap.set("name", "Alice");
myMap.set(42, "The answer");
myMap.set(true, "yes");

// Get values
console.log(myMap.get("name")); // Alice
console.log(myMap.get(42)); // The answer
```
