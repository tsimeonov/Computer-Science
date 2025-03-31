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
