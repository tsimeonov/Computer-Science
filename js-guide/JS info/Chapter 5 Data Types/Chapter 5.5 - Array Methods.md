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
