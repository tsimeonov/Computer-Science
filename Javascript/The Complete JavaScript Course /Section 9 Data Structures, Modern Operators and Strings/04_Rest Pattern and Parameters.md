### Rest patterns and parameters

**Rest Pattern**

The rest pattern collects multiple elements and condenses them into a single array. It is used in destructuring assignments.

```js
const [a, b, ...rest] = [1, 2, 3, 4, 5];
console.log(a); // 1
console.log(b); // 2
console.log(rest); // [ 3, 4, 5 ]
```
