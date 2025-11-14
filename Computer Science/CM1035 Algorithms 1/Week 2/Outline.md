## Topic 2: Pseudocode

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

<br>

<details>
  <summary>Iteration: The Power of Repetition</summary>

  <br>

Iteration is the process of repeating a set of instruction. In programming, we call these `loops`. Instead of writting the same code then times, we write a loop that runs ten times.

`How is it represented in Pseudocode` (There are two main ways to represent iteration)

`A: The For Loop (Define iteration)`

Used when you know exactly how many times you want to loop

```
FOR i = 1 TO 5
   PRINT "Hello World"
END FOR

// This will print 5 times
```

`B: The While Loop (Indefinite iteration)`

Used when you want to loop as long as a certain condition is true. You don't necessarily know when it will stop.

```
x = 0
WHILE x < 10
   x = x + 1
END WHILE

// This will keep running until x is no longer less than 10
```

</details>

<br>
