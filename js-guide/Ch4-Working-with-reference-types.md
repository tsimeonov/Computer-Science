# 4.1 Difference between Primitive Data Types and Reference Types

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
  
## 4.1.4 Determining the type of a variable
  This can be done using the typeof operator. This is a unary operator; that is, it expects only one operand - namely, the value or varialbe the type of which is to be determend.

# 4.2 Encapsulating State and Behavior in Objects
## 4.2.1 Introduction to Object-oriented-programming
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

## 4.2.3 Creating Objects via Constructor Functions
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


## 4.2.3 Creating objects using classes

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

## 4.2.5 Creating Objects via the Object.crate() function

<details>
  <summary>Example</summary>

```js
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
```
</details>


## 4.2.6 Accessing Properties and Calling Methods
To access object properties or call object methods, js usually uses dot notation.

<details>
  <summary>Example of dot notaion</summary>

```js
// Access to Object Properties and Object Methods via Dot Notation
const itemName - item.name;
item.printDescription()
```
</details>

### Setters and Getters
Instead of accessing properties directly, it's common in OPP to use special methods reset properties or returrn the values of properties. Those types of methods that set a new value for a property are called `setter methods`, or `setters` for short, and those that return the value of a property are called `getter methods` or `getters`. The advantage of setter methods in particular is that they provide a good opportunity to validate values that are assigned to a property - that us, to check their validity.

<details>
  <summary>Example of setters and getters</summary>

```js
const obj = {
  _value: 0, // underscore is a common convention to indicate private property

  get value() {
    return this._value;
  },

  set value(newValue) {
    if (newValue >= 0) {
      this._value = newValue;
    } else {
      console.log("Invalid value. Please provide a positive number.");
    }
  }
};

console.log(obj.value); // Output: 0

obj.value = 10;
console.log(obj.value); // Output: 10

obj.value = -5; // Output: Invalid value. Please provide a positive number.
console.log(obj.value); // Output: 10 (value remains unchanged)

```
</details>

`Data encapsulation` in OOP, technical term for allowing access to the properties of an object only via (setters and getters) methods. The properties are thus protected from direct access from the outside.
### 4.2.8 Deleting Object Propertiesa and Object Methods
In JavaScript, you can delete object properties using the delete keyword.

<details>
  <summary>Deleting Object Propertiesa and Object Methods</summary>

```js
const person = {
  name: 'John',
  age: 30,
  greet: function () {
    console.log(`Hello, my name is ${this.name} and I'm ${this.age} years old.`);
  }
}

console.log(person.name); // Output: 'John'
delete person.name;
console.log(person.name); // Output: undefined

```
</details>

# 4.3 Working with Arrays
## 4.3.1 Creating and Initializijn Arrays
- Uisng Array Literal Syntax

```js
const numbers = [1,2,3,4,5]
const fruits = ['apple', 'banana', 'orange']
const mixed = [1, 'hello', true, null]

```

- Using Array Constructor

```js
const numbers = [1,2,3,4,5]
const fruits = ['apple', 'banana', 'orange']
const mixed = [1, 'hello', true, null]

```
- Creating an empty array and adding elements
```js
// Creating an Empty Array and adding elements
const numbers = [];
numbers.push(1);
numbers.push(2);
numbers.push(3);
```
## 4.3.2 Accessing elements of an array
- Using square bracket notation
```js
const numbers = [10, 20, 30, 40];

console.log(numbers[0]); // 10
console.log(numbers[2]); // 30
console.log(numbers[3]); // 40
```
- You can use variables or expressions as the index to access array elements dynamically
```js
const fruits = ["apple", "banana", "orange"];

let index = 1;
console.log(fruits[index]); // 'banana'

let dynamicIndex = 2;
console.log(fruits[dynamicIndex]); // 'orange'
```
## 4.3.3 Adding elements to array
- Adding an element to the end of an Array
```js
const numbers = [1, 2, 3, 4, 5];
numbers.push(6);
console.log(numbers); // 1,2,3,4,5,6
```
- Adding an element to the gebinning of an array
```js
const numbers = [1, 2, 3, 4, 5];
numbers.push(6);
console.log(numbers); // 1,2,3,4,5,6
```
- Inserting elements at any position in the array
```js
const numbers = [1, 2, 5, 6];
const index = 2;
const newElements = [3, 4];

numbers.splice(index, 0, ...newElements);

console.log(numbers); // Output: [1, 2, 3, 4, 5, 6]
```
## 4.3.4 Removing elements from an array
- Removing the last element from an array
```js
const numbers = [1, 2, 3, 4, 5];
numbers.pop();
console.log(numbers); // Output [1,2,3,4,5]
```
- Removing the first element from an array
```js
const numbers = [1, 2, 3, 4, 5];
numbers.pop();
console.log(numbers); // Output [1,2,3,4,5]
```
- Removing some of the elements from an array
```js
const numbers = [1, 2, 3, 4, 5];
// Remove elements starting from index 2 and remove 2 elements
numbers.splice(2, 2);
console.log(numbers); // Output: [1,2,5]
```
