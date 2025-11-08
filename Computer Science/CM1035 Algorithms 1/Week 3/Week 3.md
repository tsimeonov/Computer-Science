## Lesson 2.1 Pseudocode

Discretisation and pseudocode

<details>
  <summary>Discretization</summary>

  <br>

First, it highlights that computers work in `discrete steps`, unlike some continuous real-workd process (like gradually turning up a thermostat) .Therefore, any algorithm for a computer must break down actions into distinct, step-bystep instructions. This process of convering continous actions into discrete ones is called `discretization`.

</details>

  <br>

  <details>
  
  <summary>What is Pseudocode?</summary>

  <br>

`Pseudocode` is a way to write down the steps of an algorithm using a mix of natural language and mathematical notation. It's designed to be easily readable by humans but structured wnough to resemble a computer program. It's more foramal than a flowchart but not tied to the struct syntax of any specific programming language.

</details>

  <br>

  <details>

  <summary>Pseudocode Notation</summary>

  <br>

Key elements used in pseudocode include:

- Assignment (`<-`): Used to give a variable a value (e.g. `x <- 2`). Variables can be created implicitly when assigned.
- Variable Names: Can be letters (`x`, `t`), or descriptive names (`temperature`, `DesiredTemperature`). Names cannot contain spaces (use `Desired_Temperature` or `DesiredTemperature` instead)
- Reading order: Instructions are read left-to-right, topto-bottom
- Self-Reference: Variables can be updated using own current value (`x <- x + 1`)
- Mathematical Operators: Standrad symbols like , +, -, \*, /
- Comparison Operators: Used to compare values

</details>

  <br>

## Lesson 2.2 Iteration

<details>
  <summary>🔁 What is iteration?</summary>

  <br>

Iteration, also known as `looping`, is the concept of repeating a set of instuctions multiple times. This is a fundamental concept in proframming that allows you to automate repetitive taks, such as increasing a thermostat's temperatire, calculating a times table or processing a list of items.

</details>

  <br>

  <details>
  <summary>For loop</summary>

  <br>

A for loop is used when you want to repeat a task a `know or fixed number of times`.

- `How it works`: It uses a variable (often called i) that acts as a counter. The loop is defined by a start value and a target value (e.g., "for i from 2 to 10").

- `Structure`:

  - Condition: The range of the counter (e.g., i = 2 TO 10).
  - Body: The instructions to be repeated for each value of i.

- `Example`: Summing the numbers from 1 to 10.

```
x = 1
FOR i = 2 TO 10
x = x + i
END FOR
```

- `Key Point`: The counter variable (i) does not have to be used inside the body. A for loop can also be used to simply repeat an action (e.g., "do this 3 times") without using the counter's value.

</details>

  <br>

    <details>

  <summary>While Loops</summary>

  <br>

A `while` loop is used to repeat instructions as long as a specific condition remains true. This is ideal when the number of repetitions is unknown beforehand.

- `How it works`: The loop checks the condition before each iteration. If the condition is true, the body of the loop runs. If it's false, the loop stops.

- `Structure`:

  - Condition: A statement that is either true or false (e.g., x < 11).
  - Body: The instructions to be repeated.

- `Critical Rule:` The body of the loop must include an operation that will eventually make the condition false (like incrementing a variable). Otherwise, you will create an infinite loop.

- `Example`: Summing the numbers from 1 to 10 (same result as the for loop example).

```
y = 0
x = 1
WHILE x < 11
  y = y + x
  x = x + 1
END WHILE
```

</details>

  <br>
