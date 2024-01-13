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
