## Optional Chaining (?.)

Optional chaining in JS is a feature that allows you to safely access deeply nested properties of an object **without having to check each level manually**.
It helps avoid runtime errors when trying to access a property of `undefined` or `null`

Syntax

```
obj?.prop
obj?.[expr]
obj?.method?()
```

1. Accessing a nested property

```js
const user = {
  profile: {
    name: "Alice",
  },
};

console.log(user.profile?.name); // "Alice"
console.log(user.settings?.theme); // undefined (no error)
```

2. Calling a method

```js
const user = {
  sayHi: () => console.log("Hi"),
};

user.sayHi?.(); // "Hi"
user.sayBy?.(); // nothing happens, no error
```

3. Optional chaining with arrays

```js
const data = {
  items: [{ id: 1 }, { id: 2 }],
};

console.log(data.items?.[0]?.id); // 1
console.log(data.items?.[1]?.id); // 2
console.log(data.items?.[10]?.id); // Undefined
```
