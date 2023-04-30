# Chaprer 4

## Working with Reference Types

### Difference between Primitive Data Types and Reference Types

Primitive data types include:

- String
- Number
- Boolean
- Undefined
- Null
- Symbol (added in ECMAScript 6)
  The primitive data types are stored in the memory, and they have fixed size.

Reference data types:

- Ojects
- Arrays
- Dates
- Regular Expressions
- Custom objects
  Reference types are not stored directly in the memory, but instead, a reference to the value is stored in the memory (this is referred to as a pointer).
  
  #### Determining the type of a variable
  This can be done using the typeof operator. This is a unary operator; that is, it expects only one operand - namely, the value or varialbe the type of which is to be determend.

## Encapsulating State and Behavior in Objects
### Introduction to Object-oriented-programming
Objects have a state and a behavior. The `state` of an object is described by its properties and connections to other objects. The `behavior` of an object is defined by its methods.
### Creating Objects Using Literal Notation
Here the `item` object is created with four properties - `name`, `price`, `author` and `isbn` as well as the `printDescription()` method
```js
const item = {
  name: 'JS book',
  price: 50,
  author: 'T.S',
  isbn: '978-1-4932-2286-5',
  printDescription: function () {
    console.log(`${this.author}: ${this.name}`);
 }
}

console.log(item.name); // JS book
console.log(item.price); // 50
console.log(item.author); // T.S
console.log(item.isbn); // 978-1-4932-2286-5
console.log(item.printDescription()); // T.S: JS book
```
### Creating Objects via Constructor Functions
```js
function Item(name, price, author, isbn) {
  this.name = name;
  this.price = price;
  this.author = author;
  this.isbn = isbn;
  this.printDescription = function () {
    console.log(`${this.author}: ${this.name}`);
  };
}

const item = new Item("JS Book", 50, "T.S", "978 - 1 - 4932 - 2286 - 5");

console.log(item.name); // JS Book
console.log(item.author); // T.S
console.log(item.price); // 50
console.log(item.isbn); // 978 - 1 - 4932 - 2286 - 5
console.log(item.printDescription()); // T.S: JS Book

const item2 = new Item("Node.js Book", 40, "T.S", "974 - 1 - 4921 - 2286 - 5");

console.log(item2.name); // Node.js Book
console.log(item2.author); // T.S
console.log(item2.price); // 40
console.log(item2.isbn); // 974 - 1 - 4921 - 2286 - 5
console.log(item2.printDescription()); // T.S: Node.js Book

```
