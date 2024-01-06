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

<h5>Methods pop/push, shift/unshift</h5>

A `Queue` is one of the most common uses of an array. In computer science, this means an ordered collection of elements which supports two operations:

- `push` appends an element to the end.
- `shift` get an element from the beginning, advancing the queu, so that the 2nd element becomes the 1st.

<p>pop</p>

Extrachts the last eleemnt of the array and returns it:

```js
let fruits = ["Apple", "Orange", "Plum"];
alert(fruits.pop()); // remove "Pear" and alert it
alert(fruits); // Apple, Orange
```

Both `fruits.po()` and `fruits.at(-1)` returns the last element of the array, but `fruits.pop()` aldo modifies the array by removing it.

<p>push</p>

Append the element to the end of the array.

```js
let fruits = ["apple", orange];

fruits.push("pear");

alert(fruits); // apple, orange. pear
```

<p>shift</p>

Extract the first element of the array and rerurns it.

```js
let fruits = ["Apple", "Orange", "Pear"];
alert(fruits.shift()); // remove Apple ad alert it
alert(fruits); // Orange, Pear
```

<p>unshift</p>

Add the element to the beginning of the array:

```js
let fruits = ["Orange", "Pear"];
fruits.unshift("Apple");
alert(fruits); // Apple, Orange, Pear
```

---

<h5>Internals</h5>

---

<h5>Performance</h5>

Methods `push/pop` run fast, while `shift/unshift` are slow.

---

<h5>Loops</h5>

One of the oldest ways to cycle array items is the `for` loop over indexes:

```js
let arr = ["Apple", "Orange", "Pear"];

for (let i = 0; i < arr.length; i++) {
  alert(arr[i]);
}
```

But for arrays there is another form of loop, `for..of`

```js
let fruits = ["Apple", "Orange", "Pear"];

// iterates over array elements
for (let fruit of fruits) {
  alert(fruit);
}
```

---

<h5>new Array()</h5>

There is one more syntax to create an array:

```js
let arr = new Array("Apple", "Pear", "etc");
```

It's rarely used, because square brackets `[]` are shorter.

---

<h5>Multidimensional  arrays</h5>

Arrays can have items that are also arrays. We can use it for multidimensional arrays, for example to store matrices:

```js
let matrix = [
  [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9],
];

alert(matrixp[1][1]); // 5, the central element
```

---

<h5>toString()</h5>

---

<h5>Don't compare arrays with ==</h5>

Arrays in JS, unlike some other programming languages, shouldn't be compared with `==`.

When we compare arrays with `==`, they are never the same, unless we compare two variables that reference exactly the same array.

```js
alert([] == []); // false
alert([0] == [0]); // false
```

---

<h5>Summary</h5>

Array is a special kind of object, suited to storing and managing ordered data items.

The declaration:

```js
// square brackets (usual)
let arr = [item1, item2...];

// new Array (exceptionally rare)
let arr = new Array(item1, item2...);
```

The call to `new Array(number) `creates an array with the given length, but without elements.

- The `length` property is the array length or, to be precise, its last numeric index plus one. It is auto-adjusted by array methods.
- If we shorten `length` manually, the array is truncated.

Getting the elements:

- we can get element by its index, like `arr[0]`
- also we can use `at(i)` method that allows negative indexes. For negative values of `i`, it steps back from the end of the array. If `i >= 0`, it works same as `arr[i]`.

We can use an array as a deque with the following operations:

- `push(...items) `adds `items` to the end.
- `pop()` removes the element from the end and returns it.
- `shift()` removes the element from the beginning and returns it.
- `unshift(...items)` adds `items` to the beginning.

To loop over the elements of the array:

- `for (let i=0; i<arr.length; i++)` – works fastest, old-browser-compatible.
- `for (let item of arr)` – the modern syntax for items only,
- `for (let i in arr)` – never use.

To compare arrays, don’t use the `==` operator (as well as `>`, `<` and others), as they have no special treatment for arrays. They handle them as any objects, and it’s not what we usually want.

Instead you can use `for..of` loop to compare arrays item-by-item.

---
