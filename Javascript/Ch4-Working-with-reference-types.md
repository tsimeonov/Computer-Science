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

- Objects
- Arrays
- Dates
- Regular Expressions
- Custom objects
  Reference types are not stored directly in the memory, but instead, a reference to the value is stored in the memory (this is referred to as a pointer).

## 4.1.4 Determining the type of a variable

This can be done using the typeof operator. This is a unary operator. T
hat is, it expects only one operand - namely, the value or varialbe the type of which is to be determend.

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
item.printDescription();
```

</details>

### Setters and Getters

Instead of accessing properties directly, it's common in OPP to use special methods reset properties to returrn the values of properties. Those types of methods that set a new value for a property are called `setter methods`, or `setters` for short, and those that return the value of a property are called `getter methods` or `getters`. The advantage of setter methods in particular is that they provide a good opportunity to validate values that are assigned to a property - that is, to check their validity.

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
  },
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
  name: "John",
  age: 30,
  greet: function () {
    console.log(
      `Hello, my name is ${this.name} and I'm ${this.age} years old.`
    );
  },
};

console.log(person.name); // Output: 'John'
delete person.name;
console.log(person.name); // Output: undefined
```

</details>

# 4.3 Working with Arrays

## 4.3.1 Creating and Initializijn Arrays

- Uisng Array Literal Syntax

```js
const numbers = [1, 2, 3, 4, 5];
const fruits = ["apple", "banana", "orange"];
const mixed = [1, "hello", true, null];
```

- Using Array Constructor

```js
const numbers = [1, 2, 3, 4, 5];
const fruits = ["apple", "banana", "orange"];
const mixed = [1, "hello", true, null];
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

## 4.3.11 Convert arrays to a strings

```js
const array = [1, 2, 3, 4, 5];
const arrayAsString = array.join(", ");
console.log(arrayAsString); // Output: "1, 2, 3, 4, 5"
```

# 4.4 Extracting values fro array and objects

## 4.4.1 Extracting values from arrays

- Extracting values from array without destructing

```js
const array = [1, 2, 3, 4, 5];

const value1 = array[0]; // Accessing the first element
const value2 = array[2]; // Accessing the third element
const value3 = array[array.length - 1]; // Accessing the last element

console.log(value1); // Output 1
console.log(value2); // Output 3
console.log(value3); // Output 5
```

- Extracting values from arrays with destructing

```js
const array = [1, 2, 3, 4, 5];

const [value1, value2, , , value5] = array;

console.log(value1); // Output 1
console.log(value2); // Output 2
console.log(value5); // Output 5
```

- Extracting values from multidimensional arrays

```js
const multidimensionalArray = [
  [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9],
];

const value = multidimensionalArray[1][2];

console.log(value); // Output: 6
```

## 4.4.2 Extracting values from objects

## 4.4.3 Extracting values within a loop

```js
const obj = {
  name: "John",
  age: 30,
  city: "New York",
};

for (let key in obj) {
  const value = obj[key];
  console.log(key + ": " + value); // Output: name: John, age: 30, city: New York
}
```

## 4.4.4 Extracting Arguments of a function

```js
function myFunction(a, b, c) {
  console.log(arguments[0]); // Output: 1
  console.log(arguments[1]); // Output: 2
  console.log(arguments[2]); // Output: 3
}

myFunction(1, 2, 3);
```

## 4.4.5 Copying Object Properties to another object

```js
// 1. Object.assign()
const sourceObj = { name: "Todor", age: 30 };
const targetObj = {};

Object.assign(targetObj, sourceObj);

console.log(targetObj); // Output: {name: 'Todor', age: 30}

// 2. Spread Syntax
const sourceObj2 = { name: "Todor", age: 30 };
const targetObj2 = { ...sourceObj };

console.log(targetObj2); // Output: {name: 'Todor', age: 30}
```

# 4.5 Working with Strings

## 4.5.1 The structure of a string

In JS a string is a sequence of characters enclosed in single quotes (''), double quotes ("") or backticks (). It can contain alphanumeric characters, special characters, spaces and even Unicode Characters.

```js
const myString = "Hello, world!";
```

## 4.5.2 Determining the Lengt of a string

```js
const myString = "Hello, world!";
console.log(myString.length); // Output: 13
```

## 4.5.3 Searching within a String

```js
// 1. indexOf()
const myString = "Hello, world!";
console.log(myString.indexOf("world")); // Output: 7

// 2. Regular Expressions (RegExp)
const myString2 = "Hello, world!";
const pattern = /world/;
const isMatch = pattern.test(myString2);
console.log(isMatch); // Output: true
```

## 4.5.4 Extracting parts of a string

```js
// 1. slice()
const myString = "Hello, world!";
const extracted = myString.slice(7, 12);
console.log(extracted); // Output: world

// 2. split()
const myString2 = "Hello, world!";
const extracted2 = myString.split(", ")[1];
console.log(extracted2); // Output: world!
```

# 4.6 Using Maps

## 4.6.1 Creating Maps

What is a Map - a Map is built-in data structure that allows you to store key-value pairs.

```js
// 1. Using curly braces '{}'
const myMap = {
  key1: "value1",
  key2: "value2",
  key3: "value3",
};
console.log(myMap.key1); // Output: value1

// 2. Using the 'Map' constructor
const myMap2 = new Map();
myMap2.set("key1", "value1");
myMap2.set("key2", "value2");
myMap2.set("key3", "value3");
console.log(myMap2.get("key1")); // Output: value1
```

## 4.6.2 Basic Operations

- Creating a `Map`

```js
const map = new Map();
```

- Adding entries to the `Map`

```js
map.set(key, value);
```

- Getting the value of a specific key

```js
const value = map.get(key);
```

- Checking if a key exists in the `Map`

```js
const haskey = map.has(key);
```

- Updating the value of a key

```js
map.set(key, newValue);
```

- Deleting an entry from the `Map`

```js
map.delete(key);
```

## 4.6.3 Iterating over Maps

- Using the `for...of` loop

```js
const map = new Map();
map.set("key1", "value1");
map.set("key2", "value2");

for (const [key, value] of map) {
  console.log(key, value);
}

// Output: key1 value1 key2 value2
```

- Using the `forEach` method

```js
map.forEach((value, key) => {
  console.log(key, value);
});
```

### Iterating over the values of Maps

```js
const map = new Map();
map.set("key1", "value1");
map.set("key2", "value2");

for (const value of map.values()) {
  console.log(value);
}
```

# 4.7 Using Sets

## 4.7.1 Creating Sets

In JS, a `set` is a built-in object that allows you to store unique value of any type. It provides an unordered collection of elements where each element occurs only once.

<details>
  <summary>Example</summary>

```js
// Creating a set
const mySet = new Set();

// Adding elements to the Set
mySet.add(1);
mySet.add(1);
mySet.add("Hello");
mySet.add(true);

// Checking the size of the Set
console.log(mySet.size); // Output 3, 1 repeats, doens't count

// Checking if an element exists in the Set
console.log(mySet.has("Hello")); // Output: true

// Removing an element from the Set
mySet.delete(1);

// Iterating over the elements of the Set
mySet.forEach((value) => {
  console.log(value); // Output: Hello true
});
```

</details>

# 4.8 Other global objects

## 4.8.1 Working with Date and Time information

<details>
  <summary>Example</summary>

```js
const today = new Date();
console.log(today.getMonth()); // Returns the current month (0-11)
console.log(today.getFullYear()); // Returns the year in the format YYYY
console.log(today.getDate()); // Returns the current day of the month (1-31)

console.log(today.getDay()); // Returns the day of the week (starts on Sunday with 0)

console.log(today.getHours()); // Returns the current hour of the day (0-23)
console.log(today.getTime()); // Returns the milliseconds since 1/1/1970
```

</details>

## 4.8.2 Performing complex calculations

<details>
  <summary>Example</summary>

```js
console.log(Math.min(0, 4711, 30, 5, -6, -40)); // Output: -40
console.log(Math.max(0, 4711, 30, 5, -6, -40)); // Output 4711
console.log(Math.random()); // Output a random number
console.log(Math.round(4.6)); // 5
console.log(Math.ceil(4.4)); // 5
console.log(Math.floor(4.7)); // 4
```

</details>

# 4.9 Working with regular expressions

Regular expresson are specific character patterns that are used to check whether a text (or a string) contains a specific combination of characters.

## 4.9.1 Defining regular expressions

```js
// Creating a Regular expression via the constructor function
const regExp = new RegExp("abcde");

// Creating a Regular expression using literal notaion
const regExp2 = /abcde/;
```

## 4.9.2 Testing charecters agains regular expression

```js
const regExp = /abcde/;
console.log(regExp.test("abcdefghijklmnopqrstuvwxyz")); // Output true
```

## 4.9.3 Using character classes

You define a character class within a regular expression using square brackets: the opening square bracket starts the character class; the closing square bracket ends the character class.

<details>
  <summary>Example</summary>

```js
const regExp = /[abcde]/;
console.log(regExp.test("a")); // true
console.log(regExp.test("f")); // false
console.log(regExp.test("afghj")); // true
console.log(regExp.test("fghij")); // false
```

</details>

- simple class `[xyz]` - One of the characters x, y or z
- negation `[^xyz]` - none of the characters x, , or z but any other CharacterData
- range `[a-zA-Z]` - one of the characters between a and z or between A aqnd Z

## 4.9.5 Using quantifiers

in JS, they are used to specify the quantty or repetition of a character or group of characters.

1. `*` (asterisk): Matches zero or more occurrences of the preceding element.
   Example: /a\*b/ matches "ab", "aab", "aaab", and so on.
2. `+` (plus): Matches one or more occurrences of the preceding element.
   Example: /a+b/ matches "ab", "aab", "aaab", but not "b" alone.
3. `?` (question mark): Matches zero or one occurrence of the preceding element. It denotes an optional element.
   Example: /a?b/ matches "ab" and "b", but not "aab".
4. {n}: Matches exactly n occurrences of the preceding element.
   Example: /a{3}b/ matches "aaab" but not "aab" or "ab".
5. {n,}: Matches n or more occurrences of the preceding element.
   Example: /a{2,}b/ matches "aab", "aaab", "aaaab", and so on.
6. {n,m}: Matches between n and m occurrences of the preceding element (inclusive).
   Example: /a{2,4}b/ matches "aab", "aaab", and "aaaab", but not "ab" or "aaaaab".
7. `.` (dot): Matches any single character except a newline.
   Example: /a.b/ matches "aab", "acb", "axb", and so on.

## 4.9.6 Searching for occurrences

```js
const text = "The phone number is +49 30 1234567";
const regExp = /\+?\d{2}\s\d{2}\s\d{5,7}/;
const result = regExp.exec(text);
console.log(`Number is ${result[0]} found at index ${result.index}`);
// Output: Number is +49 30 1234567 found at index 20
```

# 4.10 Functions as reference types

## 4.10.1 Using functions as arguments

<details>
  <summary>Example</summary>

```js
// Passing functions as arguments of another function
function function1(f) {
  console.log("Function 1 start"); //Calling the passed function
  f();
  console.log("Function 1 end");
}

function function2() {
  console.log("Function 2 start");
  console.log("Function 2 end");
}
// Call wit ha function ising its name
function1(function2);
// function1 (function2()); // This does nit work

// Call with an anonymous function as an argument
function1(function () {
  console.log(`Anonymous function start`);
  console.log(`Anonymous function end`);
});
```

</details>

## 4.10.2 Using functions as return values

<details>
  <summary>Example</summary>

```js
// Functions as return values
function createAddFunction() {
  return function (x, y) {
    return x + y;
  };
}

const addFunction1 = createAddFunction();
const addFunction2 = createAddFunction();
console.log(addFunction1(22, 55)); // 77
console.log(addFunction1(33, 66)); // 99
```

</details>

## 4.10.3 Standard methods of each function

Functions are objects, which means that they can contain methods. By default, every function already provides three methods: `apply()` , `call()` and `bind()`.

<details>
  <summary>Example</summary>

```js
// apply()
function greet(name) {
  console.log(`Hello, ${name}`);
}

greet.apply(null, ["John"]); // Output: Hello, John

// call()
function greet(name) {
  console.log(`Hello, ${name}`);
}

greet.call(null, "John"); // Output: Hello, John

// bind()
function greet(name) {
  console.log(`Hello, ${name}!`);
}

let greetJohn = greet.bind(null, "John");
greetJohn(); // Output: Hello, John!
```

</details>
