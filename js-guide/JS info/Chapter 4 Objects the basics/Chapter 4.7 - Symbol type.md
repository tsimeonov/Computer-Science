By specification, only two primitive types may serve as object property keys:

- string type, or
- symbol type

Otherwise, if one uses another type, such as number, it's autoconverted to string. So that `obj[1]` is the same as `obj["1"]`, and `obj[true]` is the same as `obj["true"]`.

Until now we've been using only strings.
Now, lets' explore symbols, see what they can do for us.

### 4.7.1 Symbols

A "symbol" represents a unique identifier.
A value of this type can be created using `Symbol()`:

```js
let id = Symbol();
```

Upon creation, we can give symbols a description (also called a symbol name), mostly useful for debugging pirposes:

```js
// id is a symbol withe the description "id"
let id = Symbol("id");
```

For instance, here are two symbols withe the same description - they are not equal:

```js
let id1 = Symbol("id");
let id2 = Symbol("id");

alert(id1 === id2); // false
```
