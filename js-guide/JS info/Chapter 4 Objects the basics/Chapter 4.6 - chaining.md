The optional chaining `?` is a safe way yo access nested object properties, even if an intermediate property doesn't exist.

### 4.6.1 The "non-existing propery" problem

If you've just started to read the tutorial and learn JS, maybe the problem hasn't touched you yet, but it's quite common.
As an example, let's say we have `user` pbjects that hold the information about the users.
Most of our users have addresses in `user.address` property, with the street `user.address.streer`, nut some did not provide them.
In such case, when we attempt to get `user.address.street`, and the user happens to be without an address, we get an error:

```js
let user = {}; // a user without "address" property

alert(user.address.street); / Error!
```

That's the expected result. As `user.address` is undefined, an attempt to get `user.address.street` fails with an error.

In many practical cases we'd prefer to get `undefined` instead of an error (meaning "no street").

...and another example. in WEeb development, we can get an object that corresponds to a web page element using a special method call, such as `document.querySelector('.elem')`, and it returns `null` when there's no such element.

```js
// document.querySelectro('.elem') is nulle if there's no element
let html = document.querySelector(".elem").innerHTML; // error if it's null
```

Once again, if the element doens't exist. we'll get an error accessing `.innerHTML` propery of `null`. And in some cases, when the absence of the element is normal, we'd like to avoid the error and just accept `html = null` as the result.

How can we do this?

The obvious solution would be to check the value using `if` or the conditional operator `?`, before accessing it's property:

```js
let user = {};

alert(user.address ? user.address.street : undefined);
```

It works, there's no error.... But it's quite inelegant. As yo can see, the `user.address` appears twice in the code.

Here's how the same would look for `document.querySelector`

```js
let html = document.querySelector(".elem")
  ? document.querySelector(".elem").innerHTML
  : null;
```

We can see that the element search `document.querySelector('.elem')`
is actually called twice here. Not good.

For more deeply nested properties, it becomes even uglier, as more repetitions are required.

E.g let's get `user.address.street.name` is a similar fashion.

```js
let user = {}; // user has no address

alert(
  user.address ? (user.address.street ? user.address.street.name : null) : null
);
```

That's just awful, one may even have problems understanding such code.

There’s a little better way to write it, using the `&&` operator:

```js
let user = {}; // user has no address

alert(user.address && user.address.street && user.address.street.name); // undefined (no error)
```

AND’ing the whole path to the property ensures that all components exist (if not, the evaluation stops), but also isn’t ideal.

As you can see, property names are still duplicated in the code. E.g. in the code above, `user.address` appears three times.

That’s why the optional chaining `?.` was added to the language. To solve this problem once and for all!

### 4.6.2 Optional chaining

The optional chaining `?.` stops the evaluation if the value before `?.` is `undefined` or `null` and returns `undefined`.

In other words, `value?.prop`:

- works as `value.prop`, if `value` exists.
- otherwise (when `value` is `undefined/null`) it returns `undefined`.

Here's the safe way to access `user.address.street` using `?.`

```js
let user = {}; // user has no address

alert(user?.address?.street); // undefined (no error)
```

### 4.6.3 Short-circuiting

As it was said before, the `?.` immediately stops ("short-circuits") tje evaluation if the left part doens't exist.

So, if there are any further calls or operations to the right of `?.`, they won't be made.

```js
let user = null;
let x = 0;

user?.sayHi(x++); // no "user", so the execution doesn't reach sayHi call and x++

alert(x); // 0, value not incremented
```

### 4.6.4 Other variants: ?.(), ?.[]

The optional chaining `?.` is not an operator, but a special syntax construct, that also works with functions and square brackets.

For example, `?.()` is used to call a function that may not exist.

In the code below, some of our users have `admin` method, and some don't:

```js
let userAdmin = {
  admin() {
    alert("I am admin");
  },
};

let userGuest = {};

userAdmin.admin?.(); // I am admin
userGuest.admin?.(); // nothing happens (no such method)
```

The `?.[]` syntax also works, if we'd like to use brackets `[]` to access properties instead of `.`. Similar to previous case, it allows to safely read a property from an object that may not exist.

```js
let key = "firstName";

let user1 = {
  firstName: "John",
};

let user2 = null;

alert(user1?.[key]); // John
alert(user2?.[key]); // undefined
```

### 4.6.5 Summary

The optional chaining `?.` syntax has three forms:

1. `obj?.prop` - returns `onj.prop` if `obj` exists, otherwise `undefined`.
2. `obj?.[prop]` - returns `obj[prop]` if `obj` exists, otherwise `undefined`.
3. `obj.method?.()` - calls `obj.method()` if `onj.method` exists, otherwise returns `undefined`.

As we can see, all of them are straightforward and simple to use. The `?.` checjs the left part for `null/undefined` and allows the evaluation to proceed if it's not so.
A chain of `?.` aloows to safelt access nested properties.
