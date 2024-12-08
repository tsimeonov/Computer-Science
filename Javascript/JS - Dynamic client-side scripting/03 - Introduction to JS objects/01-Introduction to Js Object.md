# 1. Object basics
An object is a collection of related data and/or functionality. 

<details>
  <summary>Example</summary>
  
```js
// Object literal
const person = {
  name: ["Bob", "Smith"],
  age: 32,
  bio() {
    console.log(`${this.name[0]} ${this.name[1]} is ${this.age} years old.`);
  },
  introduceSelf() {
    console.log(`Hi! I'm ${this.name[0]}.`);
  },
};

console.log(person.name); // [ 'Bob', 'Smith' ]
console.log(person.name[0]); // Bob
console.log(person.age); // 32
console.log(person.bio()); // Bob Smith is 32 years old.
console.log(person.introduceSelf()); // Hi! I'm Bob.
```
</details>

## 1.1 Dot Notation
```js
person.age;
person.bio();
```

## 1.2 Objects as object properties
In JavaScript, it is possible to use objects as properties of another object. 

<details>
  <summary>Example</summary>
  
```js
// Creating objects
let address = {
  street: '123 Main St',
  city: 'Cityville',
  country: 'Countryland'
};

let person = {
  name: 'John Doe',
  age: 25,
  address: address
};

// Accessing object properties
console.log(person.name); // Output: John Doe
console.log(person.address.street); // Output: 123 Main St
console.log(person.address.city); // Output: Cityville
console.log(person.address.country); // Output: Countryland

// Modifying object properties
person.name = 'Jane Smith';
person.address.city = 'Townsville';

console.log(person.name); // Output: Jane Smith
console.log(person.address.city); // Output: Townsville
```
</details>

## 1.3 Bracket notaion
Bracket notaion provides an alternative way to access object properties.

<details>
  <summary>Example</summary>
  
```js
const person = {
  name: ["Bob", "Smith"],
  age: 32,
};

function logProperty(propertyName) {
  console.log(person[propertyName]);
}

logProperty("name");
// ["Bob", "Smith"]
logProperty("age");
// 32
```
</details>

