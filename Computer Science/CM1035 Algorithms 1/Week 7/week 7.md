## Lesson 7.1: Arrays

<details>

<summary>1. Abstract data types vs Concrete Data Structures</summary>

  <br>

A critical destinction in CS is made between the logical concept and the physical reality of data organization:

|  Concept   |                                   Abstract Data Type (ADT)                                   |                            Data Structure (Concrete)                             |
| :--------: | :------------------------------------------------------------------------------------------: | :------------------------------------------------------------------------------: |
|   Focus    |                               Behavior (What can the data do?)                               |               Implementation (How is the data stored and managed?)               |
| Definition | The kind of data, its possible values, and its allowed operations (e.g., PUSH, POP, LENGTH). | The physical organization of data in memory (e.g., contiguous blocks, pointers). |
|  Examples  |                           Boolean, Integer, Vector, Queue, Stack.                            |                         Array, Linked List, Hash Table.                          |

</details>

  <br>

<details>

<summary>2. The Array: A Concrete Data Structure</summary>

  <br>

The array is introduced as the main reference for implementing ADTs and algorithms, especially since it is available in programming languages like JavaScript.

Array Structure and Memory

- Memory: Arrays organize multiple pieces of data in the computer's RAM (Random Access Memory).

- Contiguous Memory: Each piece of data in an array is assigned a location with a memory address. These locations are contiguous (consecutive numbers, like pages in a book).

- Indexing: In programming languages like JavaScript, the locations (called indices) are numbered starting from zero (0, 1, 2, 3, ...).

- Data Type: Arrays typically hold data of the ** same type** (though JavaScript allows mixing types).

Array Capabilities

- Size (Simpler Arrays): In its simplest form, the size of an array is fixed once created.

- Operations: Arrays fundamentally allow for two actions:

  - Read: Reading the value at a specific index.

  - Write/Overwrite: Changing the value at a specific index.

</details>

  <br>

<details>

<summary>3. Implementing the Vector ADT with an Array</summary>

  <br>

The lecture uses the Vector ADT to clarify how an abstract structure is realized concretely:

| Vector Operation (Abstract) |                                       Array Implementation (Concrete)(ADT)                                       |
| :-------------------------: | :--------------------------------------------------------------------------------------------------------------: |
|           Length            | The array implementation often stores the vector's length in a separate, privileged element of the array itself. |
|         SELECT $k$          |                       Directly implemented using the array's read operation at index $k$.                        |
|         UPDATE $k$          |                  Directly implemented using the array's write/overwrite operation at index $k$.                  |

The array is highly versatile; it can be used not only as the implementation for vectors but also as a basis for other ADTs like Stacks and Queues. The next lecture will explore a new abstract data structure motivated by the array but distinct from the vector.

</details>

  <br>

## Lesson 7.2 Arrays and dynamic arrays

<details>

<summary>1. The dynamic array: Structure and Operations</summary>

  <br>

The Dynamic array is an abstraction that combines the access capabilities of a vector with the flexibility of being resizable.

Structure

- It is finite, swequntial collection of data just like a Vector
- Crucially, it is NOT fixed-size (unlike a Vector). It's length can change during use

Operations

The dynamic array inherits all Vector operations and adds two new ones

|            Operation            | Inherited From |                                                                        Description                                                                        |
| :-----------------------------: | :------------: | :-------------------------------------------------------------------------------------------------------------------------------------------------------: |
| length, select[k], store![o, k] |     Vector     |                                                       Standard read, write, and length operations.                                                        |
|          removeAt![k]           |      New       | Eliminates the element at index $k$. Shifts all subsequent elements one place to the left ($k+1$ moves to $k$). Returns the value of the removed element. |
|         insertAt![o, k]         |      New       |    Puts new element $o$ at index $k$. Shifts all subsequent elements one place to the right. If $k$ is $length + 1$, the element is added to the end.     |

</details>

  <br>

<details>

<summary>2. Implementing the Dynamic array with concrete array</summary>

  <br>

Since concrete arrays are fixed-size, implementign a dynamic, extensible structure requires a workaround: `resizing the underlying array`

`The main Idea`

Whenever a Dynamic array operation requires the collection to get larger (like `insertAt!`) the computer must

1. Create a new, larger array in memory
2. Copy all elements from the old, full array into the new array
3. Perform the insertion/addition

`Implementation Details of new operation`

- Implementing removeAt![k]: This involves two steps within the underlying array:
  1. Shifting elements to fill the gap (e.g., writing the value at index $k+1$ into index $k$).
  2. Updating the stored length value (usually at index 0 of the array implementation).
- Implementing insertAt![o, k]: This is the most costly operation. If the current array is full, a new, larger array is created and copied. Then, existing elements are shifted one position to the right to make space for the new element $o$ at index $k$.

</details>

  <br>

<summary>3. Linear abstraction data structures</summary>

  <br>

All the ADSs covered — `Vector, Queue, Stack, and Dynamic Array` —share one key property: they are sequential.

- `Definition`: The data in these structures can be organized in a line, where one element comes after another in a fixed total order.

- `Terminology`: This is why they are collectively called Linear Abstract Data Structures (or linear collections of data).

- `Implementation Choice`: The simple, fixed-size array is an intuitive choice for implementing these linear ADSs because the array's memory is also ordered in a linear fashion.

- `Future Note`: While linear implementations are intuitive, the lecturer notes that for some complex ADSs (like priority queues), non-linear implementations might prove far more efficient.

</details>

  <br>

## 7.3 Linear Search Algorithm

  <br>

<details>

<summary>1. Abstraction vs Implementation</summary>

  <br>

Algorithms can be defined based on the abstract operations of a data type (like a stack's push or pop). However, implementation matters in algorithm design because the cost and difficulty of implementing a data structure vary.

- Abstract Data Types (ADTs): Algorithms like the Euclidean algorithm or those using a stack are initially defined purely in terms of basic data operations, making them "agnostic about the implementation."

- Implementation: In algorithm design, one must eventually consider the actual cost of implementation (e.g., using a static array vs. a dynamic array).

</details>

  <br>

<details>

  <summary>2. The Searching Problem</summary>

  <br>

The lecture introduced searching where the input is an abstract data structure (like a stack, queue, or vector) instead of a simple integer.

- Input: An abstract data structure (vector, stack, queue, etc.).
- Structure vs. Values: The user knows the global structure (e.g., it's a stack) but nothing about the values or number of elements it contains.
- Types of Search Problems:

  - Existence: Is the value $x$ present? (Output is a Boolean: true/false). This makes sense for stacks and queues.
  - Location: Which element (index $i$) contains the value $x$? (Output is an integer index). This only makes sense for vectors and dynamic arrays because their elements are readily accessible via an index (select k operation).

- Constraint: Any algorithm must respect the limited operations allowed on the input structure (e.g., to inspect a stack, you must pop elements).

</details>

  <br>

<details>

  <summary>3. Linear Search Algorithm</summary>

  <br>

The linear search algorithm is presented as the first concrete solution for searching a vector.

- Problem: Given a vector $v$ and a value $x$, find if $x$ is stored in any element of $v$ (returning a Boolean) or return the index $i$ if found (returning an integer index $i$).

- Idea: Since nothing is known about the vector's contents, the algorithm must systematically inspect every element from beginning to end until the value is found or the end is reached.

- Pseudocode (Index-Returning Variant):

```
FUNCTION LinearSearch(v, item):
    FOR i FROM 1 UNTIL LENGTH[v]:
        IF v[i] = item THEN
            RETURN i
    RETURN false
```

- Implementation Note: The linear search algorithm can be directly applied to arrays as well as vectors, provided the length of the vector/array is known (e.g., stored in the array's $0^{th}$ element).

</details>

  <br>
