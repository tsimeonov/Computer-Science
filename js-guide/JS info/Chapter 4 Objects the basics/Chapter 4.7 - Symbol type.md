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

### 4.7.3 Symbols in an object literal 

If we want to use a symbol in an object literal `{...}`, we need square brackets around it.

```js
let id = Symbol("id");

let user = {
  name: "John",
  [id]:123 // not "id": 123
}
````
That's because we need the value from the variable `id` as the key, not the string "id".

### 4.7.4 Symbols are skipped by for...in

Symbolic properties do not participate in `for...in` loop.

```js
let id = Symbol("id");
let user = {
  name: "John",
  age: 30,
  [id]: 123
};

for (let key in user) alert(key); // name, age (no symbols)

// the direct access by the symbol works
alert( "Direct: " + user[id] ); // Direct: 123
```

### 4.7.4 Global symbols

As we've seen, usually all symbols are different, even if they have the same name. But sometimes we want same-named symbols to be the same entities. For insance, different parts of our application want to access symbol `"id"` meaning exactly the same property.

```js
// read from the global registry
let id = Symbol.for("id"); // if the symbol did not exist, it is created

// read it again (maybe from another part of the code)
let idAgain = Symbol.for("id");

// the same symbol
alert(id === idAgain); // true
```
