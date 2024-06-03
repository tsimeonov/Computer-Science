## Week 1

### Topic 1.0: Introduction

#### Lesson 1.1 Intorduction to p5.js

<h5 style="color: LightBlue">What is programming? What is p5.js</h5>

- Commands are the smallest building blocks of your program.
- A program is a collection of these individual commands put together in the right order to solve a problem, complete a task or maybe interact with the user.
- A programming language sets the vocabulary for the commands we can use in our programs. When we say we are codding in a specific language, we mean we are instructing the computer with the dictionary commands the language provides. The computer will interpret these commands and convert them into binary instructions that it's specific hardware understands.
- A library is a collection of code written by someone else that we can use in our programs. By using a library, we avoid something programmers like to call reinventing the wheel.

<h5 style="color: LightBlue">Running your first program with Brackets</h5>

<h5 style="color: LightBlue">Learn by hacking</h5>

<h5 style="color: LightBlue">2D coordinate system</h5>

- Computer screens are made up of tiny dots
- These dots are called pixels
- The pixels are arranged into a grid

---

- In p5.js we create an area of pixels on a webpage we can draw to:
- This is called the canvas
- A canvas needs a width and height in pixels

```js
createCanvas(500, 400);

// 500 -> Width
// 400 -> Height
```

## Week 2

#### Lesson 1.2 Introduction to Sleuth

<h5 style="color: LightBlue">Sleuth case 101</h5>

#### Lesson 1.3 Code Philosophy

<h5 style="color: LightBlue">Code philosophy: What it feels like to code</h5>

#### Lesson 1.4 About your assesments

<h5 style="color: LightBlue">How you will be assessed</h5>

## Week 3

### Topic 2.0: Drawing in 2D

#### Lesson 2.1 Drawing functions

<h5 style="color: LightBlue">RGB colours</h5>

<h5 style="color: LightBlue">Fill, stroke, noFill</h5>

Fill example:

```js
fill(0, 0, 255); // Change the fill color of an object
```

noFill example:

```js
nofill(); //  noFill takes no arguments
```

Opacity example:

```js
fill(255, 0, 0, 100); // Change the transparancy
```

<h5 style="color: LightBlue">Setup, draw and program flow</h5>

Program flow:

The `setup()` fuction is called at the start of the program.
When `setup()` is done, `draw()` is then called repeatedly once every frame.

<h5 style="color: LightBlue">Elipse, rect, line, triangle and point</h5>

Elipse:

```js
// ellipse(x, y, width, height);
ellipse(150, 400, 100, 100); // a circle
```

Line:

```js
// line(x1, y1, x2, y2);
line(50, 250, 450, 250); // shows as a horizontal line
line(250, 50, 250, 450); // shows as a vertical line
```

Triangle:

```js
// triangle(x1, y1, x2, y2, x3, y3);
triangle(400, 350, 300, 450, 500, 450);
```

<h5 style="color: LightBlue">Teach it to yourself</h5>

- `beginShape()` and `endShape()` functions allow creating more complex forms.
- `vertex()` - all shapes are constructed by connecting a series of vertices. `vertex()` is used to specify the vertex coordinates for points, lines, triangles, quads and polygons. It is exclusively within the `beginShape()` and `endShape()` functions.

#### Lesson 2.2 The console and debuffing

<h5 style="color: LightBlue">How to access and use the console to view errors</h5>

<h5 style="color: LightBlue">Debugging syntax errors</h5>

## Week 4

#### Lesson 2.3 Asking for help

<h5 style="color: LightBlue">Code philosophy: Asking for help</h5>

Tips for asking a good question:

- Keep the questions short, concise and focused on the problem.
- Include what changes you had made just before the error occurred.

#### Lesson 2.4 Introducing the game project

<h5 style="color: LightBlue">Game project part 1. Background scenery: basic drawing functions</h5>

Drawing a cloud:

```js
fill(255, 255, 255); // white cloud
ellipse(200, 150, 80, 80);
ellipse(160, 150, 60, 60);
ellipse(240, 150, 60, 60);
```

Drawing a tree:

```js
fill(120, 100, 40);
rect(900, 282, 60, 150); // tree trunk
//branches
fill(0, 155, 0);
triangle(850, 332, 930, 232, 1010, 332);
triangle(850, 282, 930, 182, 1010, 282);
```

#### Lesson 2.5 Continuing with Sleuth

## Week 5

### Topic 3: Variables, objects and interaction

#### Lesson 3.1 Interaction with built in variables and events

<h5 style="color: LightBlue">Built-in variables: mouseX, mouseY</h5>

```js
// mouseX --> The system variable mouseX always contains the current
// horizontal position of the mouse, relative to (0, 0) of the canvas.

// mouseY --> The system variable mouseY always contains the current
// vertical position of the mouse, relative to (0, 0) of the canvas.
```

<h5 style="color: LightBlue">Built-in events: mousePressed, keyPressed</h5>

```js
// Calls a function when the mouse is pressed over the element.

function mousePressed() {
  // change the color to red
  fill(255, 0, 0);
}
```

```js
// The keyPressed() function is called once every time a key is pressed.

function keyPressed() {
  // change the color to yellow
  fill(255, 255, 0);
}
```

#### Lesson 3.2 User defined variables and objects

<h5 style="color: LightBlue">Create your own variables: var, initialising and assigning</h5>

- Declaring a variable:

```js
var treePos_x;
```

- Initialize a variable

```js
treePos_x = 156;
```

<h5 style="color: LightBlue">12 top tips for naming variables</h5>

1. Avoid `keywords`
2. Avoid weird symbolss
3. Avoid long varialbe names
4. Avoid joke names
5. Avoid abstract names
6. Use camelCasing

```js
var xPos;
var yPos;
```

7. Use underscoring

```js
var x_pos;
var y_pos;
```

8. Combine both methods

```js
var ballPos_x;
var ballPos_y;
```

9. Be consistent

10. When using a varialbe to describe a variable, replace them with an object.
11. Adapt your variables
12. Use find and replace

<h5 style="color: LightBlue">Objects</h5>

```js
// Declare an object
var tree;

// Initialize an object
tree = { pos_x: 256, trunkHeight: 100, radius: 120, trunkWidht: 40 };
```

<h5 style="color: LightBlue">Working with operators</h5>

<h5 style="color: LightBlue">Mathematical functions: `random`, `min`, `max`</h5>

The version of `random()` with no parameters returns a random number from 0 up to but not including 1.

The `min()` returns the smallest value in a sequence of numbers.

```js
// Calculate the minimum of 10,5, and 20.
let m = min(10, 5, 20);
// It returns 5
```

The `max()` returns the largest value in a sequence of numbers.

```js
// Calculate the maximum of 10,5, and 20.
let m = max(10, 5, 20);
// It returns 20
```

The `map()` re-maps a number from one range to another.

```js
// Remap mouseX from [0,100] to [0,50]
let x = map(mouseX, 0, 100, 0, 50);
```

The `constrain()`, constrains a number between a minimum and maximim value.

#### Lesson 3.3 Working with variables

<h5 style="color: LightBlue">Inspecting variables in the console</h5>

## Week 6

### Topic 3: Variables, objects and interactions (cont.)

#### Lesson 3.4 Code Philosophy: The elegant coder

<h5 style="color: LightBlue">Code philosophy: the elegant coder</h5>

- Well named variables
- Good use of objects
- Logical organization
- Explanatory comments

#### Lesson 3.5 Game project 2: Game character

<h5 style="color: LightBlue">Game project 2a: Game character</h5>

The code for the character standing, facing forwards

```js
// The head
fill(200, 150, 150);
ellipse(gameChar_x, gameChar_y - 50, 35);

// The body
fill(255, 0, 0);
rect(gameChar_x - 13, gameChar_y - 35, 26, 30);

// The Legs
fill(0);
rect(gameChar_x - 15, gameChar_y - 5, 10, 10);
rect(gameChar_x + 5, gameChar_y - 5, 10, 10);
```

<h5 style="color: LightBlue">Game project 2b: using variables</h5>

The code for step 2: Movable character

```js
function mousePressed() {
  gameChar_x = mouseX;
  gameChar_y = mouseY;
}
```

The code for step 3: Place the tree

```js
// The Tree
fill(120, 100, 40);
rect(treePos_x, treePos_y, 60, 150);

// branches
fill(0, 155, 0);
triangle(
  treePos_x - 50,
  treePos_y + 50,
  treePos_x + 30,
  treePos_y - 50,
  treePos_x + 110,
  treePos_y + 50
);
triangle(
  treePos_x - 50,
  treePos_y,
  treePos_x + 30,
  treePos_y - 100,
  treePos_x + 110,
  treePos_y
);
```

The code for Step 4: Add the canyon

```js
canyon = { x_pos: 0, width: 100 };

// Canyon
fill(230, 170, 20);
rect(canyon.x_pos + canyon.width, 430, 80, 150);
```

The code for collactable

```js
collectable = { x_pos: 100, y_pos: 100, size: 50 };

// Add the collectable
fill(237, 194, 66);
//   ellipse(350, 400, 40, 40);
ellipse(
  collectable.x_pos + 250,
  collectable.y_pos + 300,
  collectable.size - 10,
  collectable.size - 10
);
fill(225, 160, 52);
//   ellipse(350, 400, 30, 30);
ellipse(
  collectable.x_pos + 250,
  collectable.y_pos + 300,
  collectable.size - 20,
  collectable.size - 20
);
fill(255, 255, 255);
text("C", 345, 405);
```

The code for the cloud

```js
cloud = { x_pos: 100, y_pos: 100, width: 50 };

// Cloud
fill(255, 255, 255);
//   ellipse(200, 150, 80, 80);
ellipse(
  cloud.x_pos + 100,
  cloud.y_pos + 50,
  cloud.width + 30,
  cloud.width + 30
);
//   ellipse(160, 150, 60, 60);
ellipse(cloud.x_pos + 60, cloud.y_pos + 50, cloud.width + 10, cloud.width + 10);
//   ellipse(240, 150, 60, 60);
ellipse(
  cloud.x_pos + 140,
  cloud.y_pos + 50,
  cloud.width + 10,
  cloud.width + 10
);
```

#### 3.6 Continuing with Sleuth

<h5 style="color: LightBlue">Sleuth case by case: 301</h5>

<h5 style="color: LightBlue">Sleuth case by case: 302</h5>

<h5 style="color: LightBlue">Sleuth case by case: 302</h5>

## Week 7

### Topic 4: Conditionals and variable types

#### Lesson 4.1 Conditional logic

<h5 style="color: LightBlue">Conditional statements using ==</h5>

```js
// The basic syntax of a conditional statement
if () {}
```

<h5 style="color: LightBlue">Conditional statements using !=</h5>

<h5 style="color: LightBlue">Conditional statements using Else and Else if</h5>

<h5 style="color: LightBlue">&& and ||</h5>

#### Lesson 4.2 Conditionals with types

<h5 style="color: LightBlue">Introducing types: String, Number and Boolean</h5>

Numbers

- Whole numbers or floating point
- Positive or negative (or zero)

```js
var rectX = 100;
var rectY = 200.32;
var speed_x = -2.3;
var volume = 0;
```

Arithmetic with Numbers

- `*` Multiplication
- `/` Division
- `+` Addition
- `-` Minus
- `()` Brackets

Boolean

- Can be either true or false
- We can't perform arithmetic with booleans

```js
var play = true;
var pause;
pause = false;
```

Strings

- A sequence of characters
- Enclosed within "" or ''

```js
var greeting = "hello world";

var leaving = "goodbye Earth";
```

String Concatenation

We can't do arithmetic with strings but we can combine them using the `+` operator.

```js
var string1 = "hello";
var string2 = "world!";
var string3 = string1 + string2; // string3 = "hello world!"
```

Mixing types and performing operations

- JS makes confusing assumptions
- Unexpected behaviours
- We can check the type of a variable using the `typeof()` function
- Changing from one type to another is called casting

<h5 style="color: LightBlue">Working with booleans</h5>

<h5 style="color: LightBlue">Working with numbers</h5>

#### Lesson 4.3 Debugging techniques

<h5 style="color: LightBlue">Code philosophy: the debugger's mindset</h5>

<h5 style="color: LightBlue">Isolation and commenting</h5>

## Week 8

### Topic 4: Conditionals and variable types (cont.)

#### Lesson 4.4 Game project 3 - Interaction with the game character

<h5 style="color: LightBlue">Game project 3a: Interaction with the game</h5>

## Week 9

### Topic 5: For loops and arrays

#### Lesson 5.1 For Loops

<h5 style="color: LightBlue">Introduction to for loops</h5>

```js
for (let i = 0; i < 10; i += 1) {
  console.log("Hello world");
}

// let i = 0; --> Initialisation
// i < 10; --> Condition
// i+=1; --> Afterthought
```

p5.js Example:
Create random ellipses with different shade of gray

```js
function setup() {
  createCanvas(800, 800);

  for (let i = 0; i < 10; i++) {
    fill(random(0, 255));
    ellipse(random(0, 800), random(0, 800), 100, 100);
  }
}
```

p5.js Example:
Creta ellipses by moving the mouse using the function `mouseX`

```js
function setup() {
  createCanvas(800, 800);
}

function draw() {
  background(255);

  for (let i = 0; i < mouseX; i++) {
    console.log(mouseX);

    fill(random(0, 255));
    ellipse(random(0, 800), random(0, 800), 50, 50);
  }
}
```

<h5 style="color: LightBlue">For loops using variable incrementation and the index variable
</h5>

Example using p5.js

```js
let x_pos;
let y_pos;

function setup() {
  createCanvas(800, 800);
}

function draw() {
  background(0);
  fill(255, 0, 255);

  x_pos = 100;
  y_pos = 100;

  for (let i = 0; i < 20; i++) {
    ellipse(x_pos + i * 30, y_pos + i * 30, 20, 20);
    // x_pos += 30
    console.log(x_pos);
  }
}
```

<h5 style="color: LightBlue">Combining for loops with conditional statements</h5>

```js
// Setup code
function setup() {
  createCanvas(800, 600);
  strokeWeight(2);
}

function draw() {
  background(255);
  noFill();
  stroke(150);

  for (let i = 0; i < 9; i++) {
    rect(80 + i * 80, 80, 60, 60);
  }
}
```

```js
// Completed Code
function setup() {
  createCanvas(800, 600);
  strokeWeight(2);
}

function draw() {
  background(255);
  noFill();

  for (let i = 0; i < 9; i++) {
    let r = 0;
    if (i > 7) {
      stroke(220, 200, 255);
    } else if (i > 3) {
      stroke(155, 0, 100);
      r = 20;
    } else if (i > 1) {
      stroke(255, 100, 0);
      r = 5;
    } else {
      stroke(150);
    }

    rect(80 + i * 80 + random(-r, r), 80 + random(-r, r), 60, 60);
  }
}
```

#### Lesson 5.2 Arrays

<h5 style="color: LightBlue">What are arrays? Why do we need them</h5>

What is an array?

- A new type of variable
- A list of items (booleans, strings, numbers)
- A data structure

Objects vs. Array

|         Object         |         Array         |
| :--------------------: | :-------------------: |
| Abstraction of an item | Abstraction of a list |
|    Key value pairs     |     Unnamed items     |
|        Literal         |        Indexed        |
|                        |      Generative       |

When to use an array

- List of related values
- Normally of the same type

<h5 style="color: LightBlue">Coding with arrays</h5>

```js
// Array examples
let myArrayNumbers = [1,2,3,4,5,6,7]
let myArrayStrings = ["hello", "world", "earth"]
let myArrayMixed = [1,2.32, "hello"]
let my ArrayEmpty = []

// Accessing the values
let myArray = [1,2,43.2, 0, 78, 13,3, 21,3]

console.log(myArray[0]) // 1
console.log(myArray[5]) // 13.3
myArray[5] = 100
console.log(myArray[5]) // 100
console.log(myArray[10]) // undefined

```

#### Lesson 5.3 Debugging techniques

<h5 style="color: LightBlue">Common bugs with loops and arrays</h5>

## Week 10
