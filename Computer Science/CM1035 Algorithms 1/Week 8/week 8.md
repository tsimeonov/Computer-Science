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

<details>

<summary>3. Operations on Linked Lists</summary>

  <br>

A. Traversing and Accessing Data

Unlike arrays, which allow direct access to arbitrary elements using an integer index (e.g., array[i]), linked lists require following the pointers to access a specific node.

- `Temporary Pointer `(temp): A temporary pointer variable is used to keep track of the current location (node address) in the list, similar to how an integer tracks an index in an array.

- `Traversing`: To move through the list, the temporary pointer temp is repeatedly assigned the value of the next pointer of the current node.

B. Insertion (Advantage over Arrays)
One major advantage of linked lists is the ease of insertion or removal of nodes at arbitrary positions, requiring only the manipulation of a few pointers.

Insertion Location (Front)

1. Create a new node.
2. Set the new node's next pointer to the current head of the list.
3. Update the head pointer to point to the new node.

Insertion Location (End)

1. Traverse the list to the last node.
2. Create a new node and set its next pointer to null.
3. Change the last node's next pointer (which was null) to point to the new node.

Insertion Location (Middle)

1. Traverse to the node before the desired location (Node A).
2. Create the new node.
3. Set the new node's next pointer to point to Node B (the node that followed Node A).
4. Set Node A's next pointer to point to the new node.

This is more efficient than arrays, where adding an element often requires allocating an entirely new, larger array and copying all the data from the old one, an operation proportional to the array's size.

C. Deletion

The complexity of deleting a node depends on its location:

- Beginning: Change the head pointer to point to the second node, effectively orphaning the original first node, which can then have its memory freed.

- End: Traverse to the second-to-last node, change its next pointer to null, and free the memory of the last node.

- Middle: Traverse to the node before the one to be deleted (Node A). Store the next pointer of the node to be deleted (pointing to Node C). Reassign Node A's next pointer to point to Node C. Finally, free the memory of the deleted node.

D. Searching

Searching a linked list requires a variation of the Linear Search algorithm. It involves traversing the list using the temporary pointer (temp), inspecting the value field of each node until the target value is found or the end of the list (null) is reached.

</details>

  <br>
