<h2>Array Methods</h2>

<h5 style="color: FireBrick;">Add/remove items</h5>

We already know methods that add and remove items from the beginning or the end:

- `arr.push(...items) `– adds items to the end,
- `arr.pop()` – extracts an item from the end,
- `arr.shift()` – extracts an item from the beginning,
- `arr.unshift(...items) `– adds items to the beginning.

<h5>splice</h5>

How to delete an element from an array?

The arrays ar objects, so we can try to use `delete`.

```js
let arr = ["I", "go", "home"];
delete arr[1]; // remove "go"
alert(arr[1]); // undefined

// now arr = ["I", , "home"]
alert(arr.length); // 3
```

The element is removed, but the array still has 3 elements, we can see that `arr.length == 3`

The `arr.splice` method is a swiss army knife for arrays. It can do everything: insert, remove and replace elements.

the syntax is :

```js
arr.aplice(start[, deleteCount, elem1, ..., elemN]);
```

It modifies `arr` starting from the index `start`: removes `deleteCount` elements and then inserts `elem1, ..., elemN` at their place.

This method is easy to graps by examples.

Let's start with the deletion:

```js
let arr = ["I", "study", "Javascript"];

arr.splice(1, 1); // from index 1 remove 1 element

alert(arr); // ["I", "Javascript"]
```

In the next example we remove 3 elements and replace them with the other two.

```js
let arr = ["I", "study", "JavaScript", "right", "now"];

// remove 3 first elements and replace them with another
arr.splice(0, 3, "Let's", "dance");

alert(arr); // now ["Let's", "dance", "right", "now"]
```

<h5>slice</h5>

The method `arr.slice` is much simpler than similar-looking `arr.splice`.

The syntax is:

```js
arr.slice([start], [end]);
```

It returns a new array copying to it all items from index `start` to `end` (not including `end`).
Both `start` and `end` can be neggative, in that case posiotn from arrat end is assumed.

For instance:

```js
let arr = ["t", "e", "s", "t"];

alert(arr.slice(1, 3)); // e, s (copy from 1 to 3)
alert(arr.slice(-2)); // s,t (copy from -2 till the end)
```

<h5>concat</h5>

The method `arr.concat` creates a new array that includes values from other arrays and additional items.

```js
arr.concat(arg1, arg2...)
```

Example

```js
let arr = [1, 2];

// create an array from: arr and [3,4]
alert(arr.concat[(3, 4)]); // 1,2,3,4

// Create an array from: arr and [3,4] and [5,6]
alert(arr.concat([3, 4], [5, 6])); // 1,2,3,4,5,6

// Create an array from arr and [3,4], then add values 5 and 6
alert(arr.concat([3, 4], 5, 6)); // 1,2,3,4,5,6
```

<h5 style="color: FireBrick;">Iterate: forEach</h5>

The `arr.forEach` method allows to run a function for every element of the array.

The syntax:

```js
arr.forEach(function (item, index, array) {
  // ... do something with item
});
```

For instance, this shows each element of the array.

```js
// for each element call alert
["Bilbo", "Gandalf", "Nazgul"].forEach(alert);
```

And this code is more elaborate about theit position in the target array:

```js
["Bilbo", "Gandalf", "Nazgul"].forEach((item, index, array) => {
  alert(`${item} is at index ${index} in ${array}`);
});
```

<h5 style="color: FireBrick;">Searching in array</h5>

indexOf/lastIndexOf and includes

```js
let arr = [1, 0, false];

alert( arr.indexOf(0) ); // 1
alert( arr.indexOf(false) ); // 2
alert( arr.indexOf(null) ); // -1

alert( arr.includes(1) ); // true
```

find and findIndex/findLastIndex
