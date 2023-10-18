### Chapter 4.2.1 Object reference and copying

One of the fundamental differences of objects versus primitives is that objects are stored and copied 'by reference', whereas primitive values: string, numbers, booleans, etc. - are always copied 'as a whole value'.

For example, lets' start with a primitive, such as a string.

Here we put a copy of `message` into `phrase`:

```js
let message = "Hello";
let phrase = message;
```

As a result we have two independent variables, each oone storing the string `'Hello'`.

Objects are not like that.

`A variable assigned to an object stores not hte object itself, but its "address in memory" - in other words "a reference" to it`.

Let's look at an example of such a variable.

```js
let user = {
  name: "John",
};
```

<img src="../img/object_reference.png" width="450px"/>

The object is stored somewhere in memory (at the right of the picture), while the `user` variable (athe the left) has a 'reference' to it.

`When an object variable is copied, the reference is copied, but the object itself is not duplicated.`

For instance:

```js
let user = { name: "John" };

let admin = user; // copy the reference
```

<img src="../img/multiple objects.png" width="450px"/>

As you can see, there's still one object, but now with variables that reference it.

---

### Chapter 4.2.2 Comparison by reference

Two objects are equal only if they are the same object.

For instance, here `a` and `b` reference the same object, thus they are equal:

```js
let a = {};
let b = a; // copy the reference

alert(a == b); // true, both variables reference the same object
alert(a === b); // true
```

And here two independent objects are not equal, even though they look alike (bot are empty)

```js
let a = {};
let b = {}; // two independent objects

alert(a == b); // false
```

---

### Chapter 4.3 Cloning and merging, Object.assign

Object can be duplicated by iterating over its properties and copying them on the primitive level.

```js
let user = {
  name: "John",
  age: 30,
};

let clone = {}; // the new empty object

// let's copy all user properties into it
for (let key in user) {
  clone[key] = user[key];
}

// now clone is a fully independent object with the same content
clone.name = "Pete"; // changed the data in it

alert(user.name); // still John in the original object
```

We can also use the method `Object.assign`

The syntax is:

```js
Object.assign(dest, ...sources);
```

- The first argument `dest` is a target object.
- Further arguments is a list of source objects.

It copies the properties of all source objects into the target `dest`, and then returns it as the result.

```js
let user = { name: "John" };

let permissions1 = { canView: true };
let permissions2 = { canEdit: true };

// copies all properties from permissions1 and permissions2 into user
Object.assign(user, permissions1, permissions2);

// now user = {name: "John", canView: true, canEdit: true}
alert(user.name); // John
alert(user.canView); // true
alert(user.canEdit); // true
```

---

### Chapter 4.4 Nested cloning

Until now we assumed that all properties of `user` are primitive. But properties can be references to other objects.

```js
let user = {
  name: "John",
  sizes: {
    height: 182,
    width: 50,
  },
};

alert(user.sized.height); // 182
```

Now it's not enough to copy `clone.sizes = user.sizes`, because `user.sizes` is an object, and will be copied by reference, so `clone` and `user` will share the same size.

```js
let user = {
  name: "John",
  sizes: {
    height: 182,
    width: 50,
  },
};

let clone = Object.assign({}, user);

alert(user.sizes === clone.sizes); // true, same object

// user and clone share sizes
user.sizes.width = 60; // change a property from one place
alert(clone.sizes.width); // 60, get thew result from the oter one
```

To fix that and make `user` and `clone` truly separate objects, we should use a cloning loop that examines each value of `user[key]` and if it's an object, then replicate its structure as well.

`structuredClone`

The call `structuredClone(object)` clones the `object` with all nested properties.

```js
let user = {
  name: "John",
  sizes: {
    height: 182,
    width: 50,
  },
};

let clone = structuredClone(user);

alert(user.sizes === clone.sizes); // false, different objects

// user and clone are totally unrelated now
user.sizes.width = 60; // change a property from one place
alert(clone.sizes.width); // 50, not relates
```

---
