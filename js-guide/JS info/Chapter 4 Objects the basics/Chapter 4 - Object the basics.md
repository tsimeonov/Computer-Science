## 4.1 Objects

An object can be created with figure brackets `{}` with an optional list of properties. A property is a "key:value" pair, where `key` is a string (also called a "property name"), and `value` can be anything.

An empty object can be created using one of two syntaxes:

```js
let user = new Object(); // "object constructor" syntax
let user = {}; // "object literal" syntax
```

## 4.1.1 Literals and properties

```js
ket user = {        // an object
    name: "John",   // by key "name" store value "John"
    age: 30         // by key "age" store value 30
};
```

A property has a key (also knows as "name" or "identifier") before the colon `":"`
and a value to the right of it.
In the `user` object, there are two properties:

1. The first property has the name `"name"` and the value `"John"`.
2. The seocnd one has the name `"age"` and the value 30.

---

The property values are accessible using the dot notaion:

```js
// get property values of the object:
alert(user.name); // John
alert(user.age); // 30
```

---

The value can be of any type. Let's add a boolean one:

```js
user.isAdmin = true;
```

---

To remove a property, we can use the `delete` operator:

```js
delete user.age;
```

---

We can also use multiword property names, but then they must be qouted:

```js
let user = {
  name: "John",
  age: 30,
  "likes birds": true, // multiword property name must be quoted
};
```

---

The last property in the list may end with a comma:

```js
let user = {
  name: "John",
  age: 30,
};
```

That is called a `trailing` or `hanging` comma. Makes it easier to add/remove/move around properties, because all lines become alike.

---

## 4.1.2 Square brackets

For multiword properties, the dot access doesn't work:

```js
// this woul give a syntax error
user.likes birds = true;
```

JS doesn't understand that. It thinks that we address user.likes, and then gives a syntax error when comes across unexpected `birds`.

The dot requires the ky to be valid variable identifier. That implies: contains no spaces, doesn;t start with a digit and doesn't include special characters (`$` and `_` are allowed).

There is an alternative "sqare bracket notation" that works with any string:

```js
let user = {};

// set
user["likes birds"] = true;

// get
alert(user["likes birds"]); // true;

// delete
delete user["likes birds"];
```

---
