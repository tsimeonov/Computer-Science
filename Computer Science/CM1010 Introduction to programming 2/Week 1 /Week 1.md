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

<h5>1.202: Objects in practice, part 2</h5>
