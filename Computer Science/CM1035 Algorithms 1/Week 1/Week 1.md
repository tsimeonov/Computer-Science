<details>
  <summary>What is a problem? What is an algorithm?</summary>

  <br>

`What is a problem?`

In computing, a `problem` isn't a rea--world issue but a well defined question with clear mathematical inputs and outputs. A vague question like "Should I take a holiday?" is not a computable problem. However, it can be translated into one:

- `Input`: You have `x` total holiday days and have used `y` days.
- `Question`: How many holiday days do you have left?
- `Output`: The number `x-y`

A problem poses a precise question about a given input to generate a specific output.

`What is an Algorithm?`

An `algorithm` is simple, step by step set of instuctions that, when folowed, correctly solves a problem. Think of it like a recipe. An algorith must have two key properties:

1. `Correctness`: It must always produce the right answer
2. `Basic instuctions`: It must be described using simple steps a computer can easily execute, like basic arithmetic (`+`, `-`, `*`. `/`) or simple logic (if-then statements).

</details>

<br>

<details>
  <summary>Al-Khwarizmi and Euclid</summary>

`Historical Origins`

The idea of a step-bystep procedure predates computers by centuries.

- `Euclid's Algorithm`: Dataing back to around 300BC, this is one of the first knowm algorithms, designed to find the greatest common divisor of two numbers
- `Al-khwarizmi`: The moder word "algorithm" is derived from the Latinized name of the 9th-century Persian mathematician Al-Khwarizmi, considered the father of algebra. His book provided the first systematic methods for solving kinear and qudratic equations.

`Algorithm vs. Computer Program`

- `Algorithm`: This is a general, mathematical concept. It's independent of any specific language or machine.
- `Computer Program`: This is the concrete `implementation` of an algorithm, written in a specific programming language that a computer can execute.

</details>
<br>

<details>
  <summary>From Mathematics to digital computers</summary>

`Representing Numbers`

- `Whole Numbers` (integers) and `Rational Numners` (fractions of integers) can be stored exactly because they can be represented using a finite amount of information.
- `Irrational Numbers` (like π or) $\sqrt{2}$ cannot be represented exactly in any number ystem using finite memory. They don't have a finite decimal representation or a representation as a simnple fraction.

`Approximation is Key`

To handle irrationale numbers, computers must use `approximation`. An irrational number is represented by a nearby rational number, with the difference between the true value and the approximation defining the `precision` (or error) of the calculation.

`Heron's Method: An ancient approximation algorithm`

To approximate $\sqrt{2}$

1. Start: Know that 1 < $\sqrt{2}$ < 2. Take an inline guess x<sub>g</sub>, as the average: x<sub>g</sub> = (1 + 2) / 2 = 1.5
2. Refine: since 1.5<sup>2</sup> = 2.25 > 2, we kmow 1.5 > $\sqrt{2}$. Also 2 / 1.5 ≈ 3 < $\sqrt{2}$.
   So, $\sqrt{2}$ is between 1.33 and 1.5
3. Iterate: Take a new guess as the average of those bounds (1.33 + 1.5)/2 ≈ 1.416
4. RepeatL Continue this process of averaging the current guess (x<sub>g</sub>) and 2/ x<sub>g</sub>
to get progressively better approximationsw until the desired precision is reached.
</details>
