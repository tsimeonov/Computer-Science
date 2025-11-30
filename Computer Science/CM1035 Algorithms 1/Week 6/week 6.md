## Lesson 6.1: Abstract data strucutre: stacks

<details>

<summary>Introduction to the Stack</summary>

  <br>

The Stack is a data structure similar to a Queue but differs in its access rules.

- `Access Point`: Unlike the Queue (which has accessible Head and Tail elements), the Stack has only one accessible element called the `Top of the Stack`.
- `access Rule (LIFO)`: A stack adheres to `Last-In, First-Out (LIFO)` access. Elements are added and removed only from the top.
- `Analogy`: A stack of plates. Plates are added or removed only from the top to ensure safety and quick access.
- `Purpose`: Stacks are excellent for quick, reliable loading and unloading of data in one specific location, often used for dynamic memory storage.

</details>

  <br>

<details>

<summary>Stack Operations</summary>

  <br>

|  Operation  |                         Description                          |                 Effect                 |
| :---------: | :----------------------------------------------------------: | :------------------------------------: |
| PUSH!($o$)  |        Adds an element ($o$) to the Top of the Stack.        |           Adds to the stack.           |
|  TOP($q$)   |    Returns the value of the element currently at the Top.    | Views the top value (does not remove). |
|  POP!($q$)  | Returns the value on the Top, and then removes that element. |         Removes from the stack         |
| EMPTY?($q$) |          Checks if the stack contains any elements.          |         Returns True or False.         |

</details>

  <br>
