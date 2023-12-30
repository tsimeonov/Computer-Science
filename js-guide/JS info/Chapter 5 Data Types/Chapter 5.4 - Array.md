<h2>Arrays</h2>

Quite often we find that we need an ordered collection, where we have 1st, 2nd, 3rd element and so on.
It's not convenietnt to use an object here, because it provides no methods to manage the orderof elements.

---

<h5>Declaration</h5>

There are two syntaxes for creating an empty array.

```js
let arr = new Array();
let arr = [];
```

Array elements are numbered, starting with zero.

We can get an element by its number in square brackets:

```js
let fruits = ["Apple", "Orange", "Plum"];

alert(fruits[0]); // Apple
alert(fruits[1]); // Orange
alert(fruits[2]); // Plum
```

We can replace an element

```js
fruits[2] = "Pear"; // now ["Apple", "Orange", "Pear"]
```

The total count of the elements in the array is its `length`:

```js
let fruits = ["Apple", "Orange", "PLum"];
alert(fruits.lengt); // 3
```

We can also use `alert` to show the whole array.

```js
let fruits = ["Apple", "Orange", "Plum"];
alert(fruits); // Apple, Orange, Plum
```

An array can store elements of any type:

```js
// mix of values
let arr = [
  "Apple",
  { name: "John" },
  true,
  function () {
    alert("hello");
  },
];

// get the object at index 1 and then show its name
alert(arr[1].name); // John

// get the function at index 3 and run it
arr[3](); // hello
```

---

<h5>Get last elements with "at"</h5>

We can explicitly calculate the last element index and then access it

```js
let fruits = ["Apple", "Orange", "Plum"];
alert(fruits[fruits.length - 1]); // Plum
```

There is a shorter syntax `fruits.at(-1)`

```js
let fruits = ["Apple", "Orange", "Plum"];

// same as fruits[fruits.length-1]
alert(fruits.at(-1)); // Plum
```

---
