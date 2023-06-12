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
## 4.2.2 Creating Objects Using Literal Notation
Here the `item` object is created with four properties - `name`, `price`, `author` and `isbn` as well as the `printDescription()` method

<details>
  <summary>Example</summary>
  
```js
// Create a person object using object literal notation
let person = {
  name: "Alice",
  age: 25,
  gender: "female",
};

console.log(person); // Output: { name: 'Alice', age: 25, gender: 'female' }
```
</details>

## 4.2.3 Creating Objects via Constructor Functions
What makes a function a constructor function in the first place is the `new` keyword prepended when it's called.

<details>
  <summary>Example</summary>
  
```js
// Constructor function for creating Person objects
function Person(name, age) {
  this.name = name;
  this.age = age;
}

// Create new objects using the Person constructor function
let person1 = new Person("Alice", 25);
let person2 = new Person("Bob", 30);

console.log(person1); // Output: Person { name: 'Alice', age: 25 }
console.log(person2); // Output: Person { name: 'Bob', age: 30 }
```
</details>

## 4.2.3 Creating objects using classes

<details>
  <summary>Example</summary>
  
```js
// Define a class called Person
class Person {
  constructor(name, age) {
    this.name = name;
    this.age = age;
  }

  sayHello() {
    console.log(`Hello, my name is ${this.name}.`);
  }
}

// Create new objects using the Person class
let person1 = new Person("Alice", 25);
let person2 = new Person("Bob", 30);

console.log(person1); // Output: Person { name: 'Alice', age: 25 }
console.log(person2); // Output: Person { name: 'Bob', age: 30 }

person1.sayHello(); // Output: Hello, my name is Alice.
person2.sayHello(); // Output: Hello, my name is Bob.
```
</details>

## 4.2.5 Creating Objects via the Object.crate() function

<details>
  <summary>Example</summary>

```js
// Create a prototype object
let personPrototype = {
  introduce() {
    console.log(`My name is ${this.name}, and I am ${this.age} years old.`);
  },
};

// Create a new object using the personPrototype as the prototype
let person = Object.create(personPrototype);
person.name = "Alice";
person.age = 25;

person.introduce(); // Output: My name is Alice, and I am 25 years old.
```
</details>


## 4.2.6 Accessing Properties and Calling Methods
To access object properties or call object methods, js usually uses dot notation.

<details>
  <summary>Example of dot notaion</summary>

```js
// Access to Object Properties and Object Methods via Dot Notation
const itemName = item.name;
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
## 4.3.5 Copying some of the elements from an array
```js
const numbers = [1, 2, 3, 4, 5];
// Copy elements from index 1 to index 3
const copiedElements = numbers.splice(1, 3);
console.log(copiedElements); // Output: [2,3,4]
```
## 4.3.6 Sorting Arrays
- Reversing the order of elements in an Array
```js
let array = [1, 2, 3, 4, 5];
array.reverse();
console.log(array); // Output: [5, 4, 3, 2, 1]
```
- Sorting the elements in an array according to specific criteria
```js
let array = [5, 2, 8, 1, 4];
array.sort(function (a, b) {
  return a - b; // Sort in ascending order
});

console.log(array); // Output: [1, 2, 4, 5, 8]
```
- Sorting Object in Arrays
```js
let array = [
  { name: "John", age: 25 },
  { name: "Alice", age: 30 },
  { name: "Bob", age: 20 },
];

array.sort(function (a, b) {
  return a.age - b.age; // Sort based on age in ascending order
});

console.log(array);
// {name: 'Bob', age: 20}
// {name: 'John', age: 25}
// {name: 'Alice', age: 30}
```
## 4.3.7 Using Array as a Stack
In programming (and in computer science in general), a stack refers to a data structure that operates according to the last in, first out (LIFO)
principle, which means that the last element added to the is the first element to be removed. <br>
In JS, you can use an array as a stack data structure by utilizing the `push()` and `pop()` methods. The `push` method adds an element to the top of the stack, while the `pop()` method removes the top element.

<details>
  <summary>Example</summary>

```js
let stack = [];

// Pushing elements onto the stack
stack.push(1);
stack.push(2);
stack.push(3);

console.log(stack); // Output: [1,2,3]

// Poping elements from the stack
let poppedElement = stack.pop();
console.log(poppedElement); // Output 3

console.log(stack); // Output : [1,2]
```
</details>

## 4.3.8 Using arrays as a queue
Like the stack, a queue is also a data structure, but it works in exactly the opposite way: a queue always returns the element that was added as the first of the elements contained in the queue, via the first in, first out (FIFO) principle.
<details>
  <summary>Example</summary>

```js
let queue = [];

// Add elements to the queue
queue.push(1);
queue.push(2);
queue.push(3);

console.log(queue); // Output: [1,2,3]

// Remove element from the front of the queue
let dequeuedElement = queue.shift();
console.log(dequeuedElement); // Output 1

console.log(queue); // Output : [2, 3]
```
</details>

## 4.3.9 Finding Elements in arrays
- Searching from the beginning of the array
```js
const transactions = [-20, 500.5, -40, -34.5, 200, 500.5, -20, 200];

console.log(transactions.indexOf(-20)); // Output 0
console.log(transactions.indexOf(500)); // Output -1
console.log(transactions.indexOf(200)); // Output 4
console.log(transactions.indexOf(200, 5)); // Output 7
// An optional second parameter to control from which index to start the search.
```
- Searching from the end of the array
```js
const transactions = [-20, 500.5, -40, -34.5, 200, 500.5, -20, 200];

console.log(transactions.lastIndexOf(-20)); // Output 6
console.log(transactions.lastIndexOf(500)); // Output -1
console.log(transactions.lastIndexOf(200)); // Output 7
console.log(transactions.lastIndexOf(200, 5)); // Output 4
```
- Finding elements by search criterion
```js 
const result = [2, 3, 4, 5, 6, 7, 2, 3, 4, 5].find(
  (element) => element % 2 !== 0
);
console.log(result);

const result2 = [2, 3, 4, 5, 6, 7, 2, 3, 4, 5].findIndex(
  (element) => element % 2 !== 0
);
console.log(result2);
```
## 4.3.10 Copying Elements within an array
```js
const todoList = ["Clean bathroom", "Go shopping", "Tidy up", "Mow lawn"];

// Copy elements from index 2 to index 4 and paste them starting at index 0
todoList.copyWithin(0, 2, 4);

console.log(todoList);
// ['Tidy up', 'Mow lawn', 'Tidy up', 'Mow lawn']
```
