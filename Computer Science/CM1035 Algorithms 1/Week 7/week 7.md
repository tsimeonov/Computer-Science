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
