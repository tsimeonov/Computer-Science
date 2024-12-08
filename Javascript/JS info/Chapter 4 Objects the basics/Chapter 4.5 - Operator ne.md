The regualr `{...}` syntax allows us to create one object.
But often we need to create namy similar objects, like multiple users or menu items and so on.
That can be done using constructor functions and the `new` operator.

### 4.5.1 Constructor function

Constructor functions technically are regialr functions. There are two conventions though:

1. They are named with capital letter first.
2. They shoul be executed only with "new" operator.

```js
function User(name) {
  this.name = name;
  this.isAdmin = false;
}

let user = new User("Jack");

alert(user.name); // Jack
alert(user.isAdmin); // false
```

When a function is executed with `new`, it does the following steps:

1. A new empty object is created and assigned to `this`.
2. The function body executes. Usually it modifies `this`, adds new properties to it.
3. THe value of `this` is returned.

In other words, `new User(...)` does somethign like:

```js
function User(name) {
  // this = {}; (implicitly)

  //add properties to this
  this.name = name;
  this.isAdmin = false;

  // return this; (implicitly);
}
```

So `let user = new User("Jack")` gives the same result as:

```js
let user = {
  name: "jack",
  isAdmin: false,
};
```

### 4.5.2 Methods in constructor

Using constructor functions to create objects gives a great deal of flexibility. The constructor function may have parameters that define how to construct the object, and waht to put in it.
Of course, we can add to `this` not only properties, but methods as well.
For instance, `new User(name)` below creates an object with the given `name` and the method `sayHi`

```js
function User(name) {
  this.name = name;

  this.sayHi = function () {
    alert("My name is: " + this.name);
  };
}

let john = new User("John");

john.sayHi(); // my name is: John

// john = {
//   name: "John",
//   sayHi: function() {....}
// }
```
