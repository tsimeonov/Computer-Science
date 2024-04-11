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

#### Lesson 1.4 About you assesments

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
fill(255, 0, 0, 100); // Change the transpancy
```

<h5 style="color: LightBlue">Setup, draw and programe flow</h5>

Programm flow:

The `setup()` fuction is called at the start of the programe.
When `setup()` is being completed, `draw()` is then called repeatedly once every frame.

<h5 style="color: LightBlue">Elipse, rect, line triangle and pont</h5>
