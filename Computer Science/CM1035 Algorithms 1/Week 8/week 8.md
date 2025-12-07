# Week 7 Data structures and Searhing part 2

This lecture introduces the Linked List as an alternative to the array for implementing abstract data structures like vectors, stacks, and queues. The core concept enabling the linked list is the pointer.

<details>

<summary>1. The Pointer: A fundamental Concept</summary>

  <br>

A `pointer` is a data item that stores a memory address. It tells the computer where to look in memory; it does not store the value itself.

- `Analogy`: A pointer is like a page number in a textbook index.

- `Dereferencing`: To find the actual data value stored at the memory address pointed to, you must dereference the pointer. This is analogous to turning to the page number to read the words.

</details>

  <br>

<details>

<summary>2. Linked Lists: Structure and Terminology</summary>

  <br>

A linked list is a sequential collection of data where data elements are not necessarily stored in contiguous memory locations. Instead, data is collected together by storing a pointer along with the data itself.

- `Node`: The fundamental component of a linked list. Each node contains two fields:

  1. `Value Field`: Stores the actual data (e.g., an integer).

  2. `Link/Next Pointer`: Stores the memory address (pointer) of the next node in the sequence.

- `Head`: A special pointer that stores the address of the very first node of the list. Dereferencing the head pointer accesses the value of the first node.

- `Null`: The special memory address referenced by the final node's pointer, signifying the end of the linked list.

- `Empty List`: A linked list where the head pointer references the null address.

- `Singly Linked List`: A list where each node has only one pointer pointing to the next node.

</details>

  <br>
