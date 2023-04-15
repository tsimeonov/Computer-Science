# Week 1 

## Setting up 

### Introduction to Programming with JS
JS is used for both front and back-end development, and the creation of mobile applications.

## Welcome to Programming

### Introduction to programming
- Computer program - A series of instructions that tell a computer what todo in specific curcumstances.
- Programming language - A bridge that facilitates communication between computers and people.
- Low level languages - Closer to being understood by a computer's CPU.
- High level languages - Languages that must be converted to binary code so that a CPU can work with them.

### Why JavaScript?
- JS is a language used to build interactivity into web pages.
- Direct interaction - JS allows direct interaction with webpages dynamically on the client.

### Programming in JS 

### Variables

### Data Types 
Primitive data types
1. String
2. Number
3. Boolean
4. Null - The absence of value
5. Undefined - A variable not yet assigned a value
6. BigInt - A data type that accommodated a greater range of numbers.
7. Symbol - A data type used as a unique identifier.

Non-Primitive data types 
1. Objects 
2. Array
3. Functions

### Operators 
- Assignment operator = 
```javascript
let person = 'Jim'
```
- Arithmetic Operators

| Operator   | Meaning        | Example  |
| -----------|:-------------: | -----:|
| +          | Addition       | 2 + 3 |
| -          | Substraction   | 3 - 2 |
| /          | Division       | 35 / 5 |
| *          | Multiplication | 7 * 4 |

- Comparison Operators

| Operator   | Meaning        | Example  |
| -----------|:-------------: | -----:|
| >          | Greater than   | 3 > 2 |
| <          | Less than      | 2 < 3 |
| ==          | Equal to      | 5 == 5 |
| !=          | Not equal to  | 5 ! 6 |

- Comparison Operators

| Operator   | Meaning        | Example  |
| -----------|:-------------: | -----:|
| >          | Greater than   | 3 > 2 |
| <          | Less than      | 2 < 3 |
| ==          | Equal to      | 5 == 5 |
| !=          | Not equal to  | 5 ! 6 |

- Logiacal Operators

| Operator   | Meaning        | Example  |
| -----------|:-------------: | -----:|
| &&          | Checks for both conditions to be true   | a > 5 && a < 10 |
| &#x7c;&#x7c;          | Checks for at least one condition to be true      | a > 5 &#x7c;&#x7c; a > 10 |
| !          | Returns false if the result is true      | !(a > 5) |

### Number data type
Foundational data type that represents integers and decimal points.

### Strings
A collection of characters ecnclosed in single quotes or double quotes.

## Conditions and Loops 

### Writing statements
- If Statement
```javascript
if (condition == true) {
  // Execute code
}
```
- If-else statement
```javascript
if (condition == true) {
  // Execute code
} else {
  // Execute code
}
```
- Else-if statement
- Switch statement

### Looping constructs

- For loop
- While loop
- Nested loops

# Week 2

## Arrays, Objects and Functions

### Functions

### Storing data in arrays

Array literal syntax `[]`
```javascript 
  let train1 = ['wheat', 'barley', 'potato', 'salt', 'rocks']
  console.log(train[0]) // Output: wheat
```
### Introduction to objects

### Math object

# Week 3

## Introduction to functional programming

### Functional programming

Programming paradigms - Different ways in which a given progamming language can be organized.
In programming there two commonly used paradigms:
- Functional programmming(FP)
- Object-oriented programming (OOP)

Functional programming is a aprroach to software development that uses functions to create maintainable software.

```javascript
// Functional programming

let currencyOne = 100;
let currencyTwo = 0;
let exchangeRate = 1.2;

function convertCurrency(amount, rate) {
  return amount * rate;
}

currencyTwo = convertCurrency(currencyOne, exchangeRate);

console.log(currencyTwo); // Output:  120
```

### Function calling and recursion

Recursion is a technique in programming where a function calls itself until it reacheas base case.

Example that calculates the factorial of a number:

```javascript
function factorial(n) {
  if (n === 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

console.log(factorial(5)); // Output: 120
```

In this example, the function `factorial` takes an integer `n` as input and returns its factorial. The base case is when `n` equals 0, in which case the function returns 1. Otherwise, the function multiplies `n` by the factorial of `n-1`, which is calculated by recursively calling the `factorial` function with `n-1` as the argument.

```javascript
factorial(5)
= 5 * factorial(4)
= 5 * 4 * factorial(3)
= 5 * 4 * 3 * factorial(2)
= 5 * 4 * 3 * 2 * factorial(1)
= 5 * 4 * 3 * 2 * 1 * factorial(0)
= 5 * 4 * 3 * 2 * 1 * 1
= 120

```
### Introduction to scope

```javascript
let globalVar = 'I am in the global scope'

function scopeTest (){
  let localVar = 'I am scoped to the function'
}
```

## Introduction to Object-Oriented Programming

### Introduction to Object-Oriented Programming
OOP focuses on the use og objects to represent real-world concepts. In JS, objects can becreated using literals, constructors function, and classes.

### Classes
Classes are a core feature of OOP, which allow you to create objects based on a blueprint, or template.

To define a class in JS, you can use `class` keyword, follows by the name of the class, and then the curly braces that enclose the body of the class.

```javascript
class Person {
  constructor(name, age) {
    this.name = name;
    this.age = age;
  }

  sayHello() {
    console.log(`Hello, my name is ${this.name} and I am ${this.age} years old.`);
  }
}
```
To create an instance of the `Person` class, you can use the `new` keyword and call the constructor with the appropriate arqument.

```javascript
const john = new Person('John', 30);
john.sayHello(); // logs "Hello, my name is John and I am 30 years old."
```
### Inheritance
Inheritance is a key feature of OOP tah allows objects to inherit properties and methods from their parent objects. In JS, inheriatance is implemented using the prototype chain.
In JavaScript, every object has a prototype property, which points to another object. This prototype object can also have its own prototype, forming a chain of objects called the prototype chain. 
To implement inheritance in JavaScript, you can create a new object that inherits from an existing object using the `Object.create()` method.

```javascript
let bird = {
  hasWings: true,
  canFly: true,
  hasFeathers: true
}

let eagle1 = Object.create(bird)
console.log('eagle1:', eagle1)

console.log('eagle1 has wings:', eagle1.hasWings)
console.log('eagle1 can fly:', eagle1.canFly)
console.log('eagle1 has fethers:', eagle1.hasFeathers)

let eagle2 = Object.create(bird)
console.log('eagle2 has wings:', eagle2.hasWings)

let pingui1 = Object.create(bird)
pingui1.canFly = false;
console.log('pingui1:', pingui1)
```

















