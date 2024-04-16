## Week 1

### Lesson 1.0 Introduction

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

### Lesson 2.0 Drawing in 2D

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
When `setup()` is being completed, `draw()` is then called repeatedly once every frame.

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
