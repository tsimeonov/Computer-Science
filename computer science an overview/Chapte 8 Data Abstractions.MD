## 8.1 Basic data sctructures

<h6>Arrays and Aggregates</h6>

- Array is a `rectangular` block of data whose entries are of the same type.
- In contrast to an array, recall that a `aggregate type` is a blovk of data items that wight be of different types ans sizes. The items within the block are usually called `fields`.

---

<h6>Lists, Stacks and Queues</h6>

<img src="./images/list, stack and queues.png" style="border-radius: 5px;" width="850px">

Another basic structure is a `list`, which is a collection whose entries are arranged sequentially. The beginning of a list is called the `head` of the list. The other end of a list is called the `tail`.
Basic operations include adding elements, removing elements, iterating over all elements, and determining whether an element is in a collection.
A `stack` is a list in qhich entries are inserted and removed only at the head. An example is a stack of books where physical restriction dictate that all additions and deletions occur at the top. Inserting a new entry at the top of a stack is called `pushing` and entry. Removing an entry from the top of a stack is called `popping` and entry. The stack is knows as `last-in, first-out, or LIFO`.
A `queue` is a list in which the wntries are removed only at the head and new entries are inserted only at the tail. An example is a line, or queue of people waiting to buy tickets at a theater. The person at the head of the queue is served while new arrivals step to the reat (tail) of the queue.
The queus is `first-in, first-out`, or FIFO structure.

---

<h6>Trees</h6>

A `tree` is a collection whose entries have a hierarchical organization similar to that of an organization chart of a typical company.
Each position in a tree is called a `node`. The node at the top is called the `root node` The nodes at the other extreme are called `terminal nodes` (or sometimes `leaf nodes`).

<img src="./images/tree terminology.png" style="border-radius: 5px;" width="650px">

We refer to its immediate descendats as its `children` and its immediate ancestor as its `parent`. A tree in which each parent has no more than two children is called a binary tree.
