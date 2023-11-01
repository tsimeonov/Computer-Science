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

### 4.7.2 "Hidden" properties

Symbols allow us to create "hidden" properties of an object, that no other part of code can accidentally access or overwrite.

For instance, if we're working with `user` objects, that belongs to a third-party code.
We'd like to add identifiers to them.

```js
let user = {
  // belongs to another code
  name: "John",
};

let id = Symbol("id");

user[id] = 1;

alert(user[id]); // we can access the data using the symbol as the key
```

What's the benefit of using `Symbol("id")` over a string "id"?

As `user` objects belong to another codebase, it's unsafe to add fields to them, since we might affect pre-defined behavior in that other codebase. However, symbols cannot be accessed accidentally. The third-pary code won't be aware of newly defined symbols, so it's safe to add symbols to the `user` objects.
