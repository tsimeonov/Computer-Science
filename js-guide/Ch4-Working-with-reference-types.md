# Chaprer 4 - Working with Reference Types

## 4.1 Difference between Primitive Data Types and Reference Types

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
  
### 4.1.4 Determining the type of a variable
  This can be done using the typeof operator. This is a unary operator; that is, it expects only one operand - namely, the value or varialbe the type of which is to be determend.

## 4.2 Encapsulating State and Behavior in Objects
### 4.2.1 Introduction to Object-oriented-programming
Objects have a state and a behavior. The `state` of an object is described by its properties and connections to other objects. The `behavior` of an object is defined by its methods.
### 4.2.2 Creating Objects Using Literal Notation
Here the `item` object is created with four properties - `name`, `price`, `author` and `isbn` as well as the `printDescription()` method

<details>
  <summary>Example</summary>
  
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
</details>

### 4.2.3 Creating Objects via Constructor Functions
What makes a function a constructor function in the first place is the `new` keyword prepended when it's called.

<details>
  <summary>Example</summary>
  
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
</details>


### 4.2.3 Creating objects using classes

<details>
  <summary>Example</summary>
  
```js
// Exampple of a class
class Item {
  constructor(name, price, author, isbn) {
    this.name = name;
    this.price = price;
    this.author = author;
    this.isbn = isbn;
  }
  printDescription() {
    console.log(`${this.author}: ${this.name}`);
  }
}

// Creating an Object using a class
const item = new Item(
  "JS: the complete guide",
  59.95,
  "Philip Ackermann",
  "978-4921-2231-5"
);

console.log(item.name); // JS: the complete guide
console.log(item.price); // 59.95
console.log(item.author); // Philip Ackermann
console.log(item.isbn); // 978-4921-2231-5
```
</details>

### 4.2.5 Creating Objects via the Object.crate() function
<details>
  <summary>Example</summary>
  
// Crating an Object via the Object.create() Helper function
const item = Object.create(Object.prototype, {
  name: {
    value: "JS: The complete guide",
  },
  price: {
    value: 59.95,
  },
  author: {
    value: "Philip Ackermann",
  },
  isbn: {
    value: "978-4921-2231-5",
  },
  printDescription: {
    value: function () {
      console.log(`${this.author}: ${this.name}`);
    },
  },
});

console.log(item.name); // JS: the complete guide
console.log(item.price); // 59.95
console.log(item.author); // Philip Ackermann
console.log(item.isbn); // 978-4921-2231-5
</details>

