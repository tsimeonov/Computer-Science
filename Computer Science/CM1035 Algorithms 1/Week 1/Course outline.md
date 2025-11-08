## Topic 1: Problems, algorithms and flowcharts

### Explain in broad strokes what are problems and algorithms in Computer Science

<details>
  <summary>💡 Problems and Algorithms</summary>

  <br>

In computer science, a `problem` isn't a bug or a mistake. A problem is simply a task to be solved or a `question to be answered`. It's defined by:

- `An input`: The information you start with.

- `A desired output`: The information or result you want to get.

| Problem Example |                 Input                 |                Desired Output                 |
| :-------------: | :-----------------------------------: | :-------------------------------------------: |
|     Sorting     |     A list of numbers: [5, 1, 3]      |          The list sorted: [1, 3, 5]           |
|    Searching    | A list of names and one specific name | True if the name is in the list, False if not |
|     Baking      |              Ingredients              |                    A cake                     |

An `algorithm` is the `set of instructions`—the step-by-step recipe—that solves a problem. A good algorithm must be:

1. `Finite`: It must eventually end.

2. `Unambiguous`: Each step must be clear and have only one meaning.

3. `Correct`: It must successfully produce the desired output for the given input.

So, if the `problem` is "bake a cake," the algorithm is the recipe that tells you exactly how to mix the ingredients and how long to bake them.

</details>

### Explain the basic elements and construction of flowcharts

<details>
  <summary>🗺️ Flowchart Elements and Construction</summary>

  <br>

A `flowchart` is a visual diagram that represents an algorithm. It uses specific shapes to show the different types of steps and arrows to show the "flow" of logic.

`Basic Elements`

Here are the most common shapes:

- `Oval` (Terminator): Represents the Start or End of the algorithm.

- `Rectangle (Process)`: Represents a specific action, calculation, or assignment.

  - Examples: x ← x + 1, "Turn on light"

- `Diamond (Decision)`: Represents a question or a branch. It always has at least two paths leading out of it (e.g., "Yes/No" or "True/False"). This is used for if statements and while loops.

  - Example: "Is x > 0?"

- `Parallelogram (Input/Output)`: Represents any step that gets input from a user or displays output.

  - Examples: "Get user_name", "Print x"

- `Arrows (Flowlines)`: Connect the shapes and show the direction of the algorithm.

`Construction`

To build a flowchart, you:

1. Begin with a Start (Oval).

2. Add the shapes for each step in logical order, connecting them with arrows.

3. Use a Diamond for any conditional logic.

4. Ensure all paths eventually lead to an End (Oval).

</details>

### Express elements of simple algorithms as flowchart

<details>
  <summary>1. Sequence (Simple Process)</summary>

  <br>

This is a simple list of steps, one after the other.

- Problem: Greet a user by name.

- Algorithm:

  1. Start

  2. Get the user's name

  3. Print "Hello, " + name

  4. End

- Flowchart:

Start

<img src="./image 1.png" style="width: 350px; border-radius: 10px"/>

</details>

  <br>

<details>
  <summary>2. Selection (Decision)</summary>

  <br>

This is an `if-then-else `statement, where the path changes based on a condition.

- Problem: Decide if a number is positive or not.

- Algorithm:

1. Start

2. Get number `x`

3. If `x > 0`, print "Positive"

4. Else, print "Not positive"

5. End

- Flowchart:

<img src="./image 2.png" style="width: 350px; border-radius: 10px"/>

</details>
