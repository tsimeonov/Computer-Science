## Lesson 1.1: Introduction

<h5>1.101: Welcome to Introduction to Programming IIw</h5>

- Data visualizer
- Drawing app
- Music vizualizer

## Lesson 1.2: Object Orientation

<h5>1.201: Object concepts revisited</h5>

- Variables

<details>
  <summary>Variables example</summary>

```javascript
let x_pos = 100;
let y_pos = 0;
let height = 120;
```

</details>

<br>

- Objects - describe a single entity in the program.

  - Properties
  - Methods

<details>
  <summary>Objects example with properties</summary>

```javascript
let tree = {
  x_pos: 100,
  y_pos: 0,
  height: 120,
  colour: "green",
  hasLeaves: true,
};
```

</details>

<details>
  <summary>Objects example with methods</summary>

```javascript
let tree = {
  x_pos: 100,
  y_pos: 0,
  height: 120,
  colour: "green",
  hasLeaves: true,
  wilt: function () {
    console.log("I am wilting");
  },
};
```

</details>
<br>

- Constructor functions - Create multiple vursions of an object

<details>
  <summary>Constructor functions example</summary>

```javascript
function Tree (col) {
  this.x_pos =  100,
  this.y_pos =  0,
  this.height =  120,
  this.colour = col,
  hasLeaves: true,
  this.wilt: function () {
    this.hasLeaves = false;
  },
};

let tree_1 = new Tree("pink")
let tree_2 = new Tree("green")
```

</details>

<h5>1.202: Objects in practice, part 1</h5>

<h5>1.203: Objects in practice, part 2</h5>

<h5>1.205: Object Orientation</h5>

Object Orientaion Principles;

- Encapsulation

It involves bundling data (properties) and methods (functions) together while restricting access to some of that data to protect its integrity.

```javascript
function Employee(name, salary) {
  let _name = name; // Private variable
  let _salary = salary; // Private variable

  return {
    getName: function () {
      return _name;
    },
    getSalary: function () {
      return _salary;
    },
    setSalary: function (newSalary) {
      if (newSalary > 0) {
        _salary = newSalary;
      } else {
        console.log("Invalid salary");
      }
    },
  };
}

const emp = Employee("Alice", 3000);
console.log(emp.getName()); // Alice
emp.setSalary(4000);
console.log(emp.getSalary()); // 4000
```

- Abstraction

Is the concept of hiding the complex implementation details of a system and exposing only the essential, high-level functionality.

```javascript
function createUser(username, password) {
  // Abstracting complex logic
  function encryptPassword(password) {
    return password.split("").reverse().join(""); // Example encryption
  }

  return {
    username: username,
    password: encryptPassword(password), // Only encrypted password exposed
    login: function () {
      console.log(`${username} logged in.`);
    },
  };
}

const user = createUser("johnDoe", "password123");
console.log(user.password); // Encrypted password output: '321drowssap'
user.login(); // Output: johnDoe logged in.
```
