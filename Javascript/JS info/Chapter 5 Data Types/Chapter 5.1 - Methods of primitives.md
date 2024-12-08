Let's look at the distinctions between primitives and objects:

A primitive

- Is a value of a primitive type
- There are 7 primitive types: `string`, `number`, `bigint` , `boolean`, `symbol`, `null` and `undefined`.

An object

- Is capable of storing multiple values as properties.
- Can be created with `{}`, for instance: `{name: "John", age: 30}`. There are other kinds of objects in JavaScript: functions, for example, are objects.

### 5.1.1 A primitive as an object

In JS, primitives like string, numbers, booleans, null and undefined are not objects; they are immutable and have no methods or properties. However, JS provides the ability to temporarily treat primitives as objects by using their associated object wrappers.

For ecample, you can use object wrappers to access properties or methods for a primitive:

```js
let str = "Hello";
let strObj = new String(str); // Wrapping the primitive string in a String object

console.log(strObj.length); // Accessing the length property as if it were an object

let num = 42;
let numObj = new Number(num); // Wrapping the primitive number in a Number object

console.log(numObj.toFixed(2)); // Using the toFixed method available to numbers
```

Summary:

- Primitives except `null` and `undefined` provide many helphul methods. We will study those in the upcomming chapters.
- Formally. these methods work via temporary objects, but JS engines are well tuned to optimaze that internally, so they are not expensive to call
