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
<details>
  <summary>Example</summary>
  
```js
const person1 = {
  name: ["Bob", "Smith"],
};

const person2 = {
  name: {
    first: "Bob",
    last: "Smith",
  },
};

console.log(person1.name[0]);
console.log(person1.name[1]);

console.log(person2.name.first);
console.log(person2.name.last);
```
</details>
