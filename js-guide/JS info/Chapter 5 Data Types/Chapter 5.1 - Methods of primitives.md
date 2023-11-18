Let's look at the distinctions between primitives and objects:

A primitive

- Is a value of a primitive type
- There are 7 primitive types: `string`, `number`, `bigint` , `boolean`, `symbol`, `null` and `undefined`.

An object

- Is capable of storing multiple values as properties.
- Can be created with `{}`, for instance: `{name: "John", age: 30}`. There are other kinds of objects in JavaScript: functions, for example, are objects.

### 5.1.1 A primitive as an object

In JS, primitives like string, numbers, booleans, null and undefined are not objects; they are immutable and have no methods or properties. However, JS provides the ability to temporarily treat primitives as objects by using their associated object wrappers.
