## Topic 3: Vectors, stacks and queues

<details>

<br>

  <summary>Basic elements of an abstract data structure (ADS)</summary>

An `Abstract Data Structure (ADS)` is a logical model for how data is organized and the operations that can be performed on it. It focuses on what the data structure does, not how it's implemented (which would be the concrete data structure).

The basic elements of any ADS are:

1. `Data`: The types of elements the structure holds (e.g., numbers, strings, objects).

2. `Structure (or Axioms)`: The rules governing the data's organization and relationships (e.g., LIFO, FIFO, or ordered indexing).

3. `Operations`: The set of allowed functions for accessing, adding, or removing data (e.g., PUSH, POP, HEAD, ENQUEUE, SELECT).

  <br>

</details>

<br>

<details>

<br>

  <summary>Structure and Operations of Key ADSs</summary>

The three core ADSs—Vectors, Queues, and Stacks—are defined entirely by their structure and the limited set of operations they expose.

A. Vector (or Array)

- Structure: Data is stored in a contiguous, ordered sequence of memory locations. Every element is accessible by its numerical position (index).

- Access Principle: Random Access—any element can be accessed or modified directly and instantly using its index.

- Key Operations:
  - SELECT[$k$]: Retrieves the element at index $k$.
  - UPDATE[$k, o$]: Replaces the element at index $k$ with the object $o$.
  - LENGTH: Returns the total number of elements.

B. Queue

- Structure: Data is arranged linearly, but access is restricted to the endpoints.

- Access Principle: FIFO (First-In, First-Out)—The element that has been in the queue the longest is the first one out. This is analogous to a line of people.

- Key Operations:ENQUEUE[$o$]: Adds an element $o$ to the tail (back).DEQUEUE: Removes and returns the element from the head (front).HEAD: Returns the element at the head without removing it.

C. Stack

- Structure: Data is arranged linearly, but access is restricted to a single endpoint.

- Access Principle: LIFO (Last-In, First-Out)—The element most recently added is the first one removed. This is analogous to a stack of plates.

- Key Operations:

- PUSH[$o$]: Adds an element $o$ to the top.
- POP!: Removes and returns the element from the top.
- TOP: Returns the element at the top without removing it.

  <br>

</details>

<br>

<details>

<br>

  <summary>Comparison of Abstract Data Structures</summary>

The primary difference between these three ADSs lies in their access rules and flexibility.

|     Feature      |                       Vector (Array)                       |                                 Queue                                 |                                         Stack                                          |
| :--------------: | :--------------------------------------------------------: | :-------------------------------------------------------------------: | :------------------------------------------------------------------------------------: |
| Access Principle |                       Random Access                        |                      FIFO (First-In, First-Out)                       |                               LIFO (Last-In, First-Out)                                |
|  Access Points   |                      Any index ($k$)                       |                Two: Head (Read/Remove) & Tail (Write)                 |                              One: Top (Read/Write/Remove)                              |
|   Flexibility    | Highest. Allows for arbitrary modification and retrieval.  |             Low. Strict ordering imposed for processing.              |                      Low. Strict ordering imposed for processing.                      |
|   Primary Use    | Storing structured data, lookup tables, list manipulation. | Task scheduling, handling data streams, processing requests in order. | Function call management (call stack), undo/redo functionality, expression evaluation. |

  <br>

</details>

<br>
