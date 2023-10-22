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
