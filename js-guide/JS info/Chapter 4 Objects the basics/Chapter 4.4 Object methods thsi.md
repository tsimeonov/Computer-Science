## 4.4.1 Object methods, "this"

Objects ar eusually created to represent entities of the real world, like users, orders and so on:

```js
let user = {
  name: "John",
  age: 30,
};
```

And, in the real world, a user can act: select something from the shopping cart, login, logout etc.

Actions are represented in JS by functions in properties.

## 4.4.2 Method examples

For a start, let's teach the `user` to say hello:

```js
let user = {
  name: "John",
  age: 30,
};

user.sayHi = function () {
  alert("Hello");
};

user.sayHi(); // Hello
```

Here we've just used a Function Expression to create a function and assign it to the property `user.sayHi` od the object.

Then we can call it as `user.sayHi()`. The user can now speak!

A function that is a property of an object is called its method.

So, here we've got a method `sayHi` of the object `user`.

## 4.4.3 Method shorthand

There exists a shorter syntax for methods in an object literal:

```js
user = {
  sayHi: function () {
    alert("Hello");
  },
};

// method shorthand looks better, right?
user = {
  sayHi() {
    // same as "sayHi: function () {......}"
    alert("Hello");
  },
};
```

As demonstrated, we can omit `"function"` and just write `sayHi()`

## 4.4.4 "this" in method

It's comman that ab object method needs to access the information stored in the object to do its job.

`To access the object, a method can use the "this" keyword`.

```js
let user = {
  name: "John",
  age: 30,

  sayHi() {
    // "this" is the "current object"
    alert(this.name);
  },
};

user.sayHi(); // John
```

Here during the execution of `user.sayHi()`, the value of `this` will be `user`

### 4.4.5 Arrow functions have no "this"

Arrow functions are special: thy don't have their "own" `this`.
If we reference `this` from such a function, it's taken from outer "normal" function.
For instance, here `arrow()` uses `this` from the outer `user.sayHi()` method.

```js
let user = {
  firstName: "Ilya",
  sayHi() {
    let arrow = () => alert(this.firstName);
    arrow();
  },
};

user.sayHi(); // Ilya
```
