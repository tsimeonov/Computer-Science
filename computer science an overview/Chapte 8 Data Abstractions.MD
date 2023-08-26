## 8.1 Basic data sctructures

<h6>Arrays and Aggregates</h6>

- Array is a `rectangular` block of data whose entries are of the same type.
- In contrast to an array, recall that a `aggregate type` is a blovk of data items that wight be of different types ans sizes. The items within the block are usually called `fields`.

---

<h6>Lists, Stacks and Queues</h6>

<img src="./images/list, stack and queues.png" style="border-radius: 5px;" width="850px">

Another basic structure is a `list`, which is a collection whose entries are arranged sequentially. The beginning of a list is called the `head` of the list. The other end of a list is called the `tail`.
Basic operations include adding elements, removing elements, iterating over all elements, and determining whether an element is in a collection.
A `stack` is a list in which entries are inserted and removed only at the head. An example is a stack of books where physical restriction dictate that all additions and deletions occur at the top. Inserting a new entry at the top of a stack is called `pushing` and entry. Removing an entry from the top of a stack is called `popping` and entry. The stack is knows as `last-in, first-out, or LIFO`.
A `queue` is a list in which the entries are removed only at the head and new entries are inserted only at the tail. An example is a line, or queue of people waiting to buy tickets at a theater. The person at the head of the queue is served while new arrivals step to the rear (tail) of the queue.
The queus is `first-in, first-out`, or FIFO structure.

---

<h6>Trees</h6>

A `tree` is a collection whose entries have a hierarchical organization similar to that of an organization chart of a typical company.
Each position in a tree is called a `node`. The node at the top is called the `root node` The nodes at the other extreme are called `terminal nodes` (or sometimes `leaf nodes`).

<img src="./images/tree terminology.png" style="border-radius: 5px;" width="650px">

We refer to its immediate descendats as its `children` and its immediate ancestor as its `parent`. A tree in which each parent has no more than two children is called a binary tree.

## 8.2 Related Concepts

<h6>Abstraction Again</h6>

---

<h6>Static vs Dynamic Structures</h6>
An important distinction in constructing abstract data structures is whether the structure being simulated is static or dynamic, that is, whether the shape or size of the structre changes over time.

<h6>Garbage collection</h6>

As dynamic data structures grow and shrink, storage space is used and released. The proces of reclaiming unused storage space for future use is knows as `garbage collection`.
If garbage collection fails to reclaim storage space, the available space will slowly dqindle away, a phenomenin knows as `memory leak`.

---

<h6>Pointers</h6>

A pointer is a variable that stores the memory address of another variable. It `points` to the memory location of that data rather than directly containing the dat itself.

## 8.3 Implementing data structures

<h6>Storing arrays</h6>

---

<h6>Storing Aggregates</h6>

---

<h6>Storing Lists</h6>

---

## 8.4 A short case study
