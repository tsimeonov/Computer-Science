## Lesson 5.1: Abstract data strucutre: vectors

<details>
  <summary>🏛️ The Vector Abstract Data Structure</summary>

  <br>

A vector is a `finite, fixed size, sequential` data collection

- `Finite`: It has a non-negative, integer number od elelements (which can be zero)
- `Sequential`: The elements are stored in a specific order, one after another in a line
- `Fixed-size`: The number of elements (its' lenght) is immutable, meaning it cannot be altered after the vector is created.

A key featire of a vector is that an elements' position or `index` acts as its address and can be used to access it directly.

</details>

  <br>

<details>
  <summary>⚙️ Core Operations</summary>

  <br>

There are three primary operations defined for a vector

- `length`: Returns the length (total number of elements) of the vector.
- `select[k]`: An operation that gets (returns) the value stored at the k-th element (
  index)
- `store![o.k]`: An operation that alters the vector by setting the value of the k-th element to a new value "o"

</details>

  <br>

<details>
  <summary>⛔ Limitations and Workarounds</summary>

  <br>

A vector's main limitation is its fixed size. You `cannot` add, delete or arbitrarily change the length of an exisitng vector.

- `The workaround`: If you need a different size (e.g to add an element), you must create an entirely `new vector` with the desired new length.
- `The reason`: This restriction is by desing. It allows a computer to set aside a fixed preductable amount of memory for the data.

</details>

  <br>

## Lesson 5.2: Abstract data structures: queues

<details>
  <summary>➡️ What is a Queue?</summary>

  <br>

A queue is an abstact data structure that mimics a real-worl waiting line (e.g. for a restaurant of customer suppot). It's used when a resource cannot be accessed immediately, so a wait is required.

The fundamental principle of a queue is "First In, First Out" (FIFO), which is the computing term for "first come, first served". This means the first item to be added to the queue will be the first item to be removed.

</details>

  <details>
  <summary>🚗 Queue vs. Vector</summary>

  <br>

Unlike a vector, which has a fixed size and allows access to any element, a queue has different properties:

- `Sequential`: Like a vector, it's a line of elements
- `Extensible`: Unlike a vector, its lenght is not fixed and can be altered
- `Restricted access`: You cannot access arbitrary elements (like select[k]). You can only access two specific positions:
  - `Head`: The front of the line, where elements are removed.
  - `Tail`l: The back of the line, where elements are added

To access an element in the middle of the quieue, you must first dequeue all the elements in front of it.

</details>

  <br>

    <details>

  <summary>⚙️ Core Operations</summary>

  <br>

The basic operations for a queue are:

- `head`: Returns the value of the element at the head (front) without removing it.
- `dequeue`!: Returns the element at hte head and removes it from the queue.
- `enqueue![o]`: Adds a new element with `o` to the tail (back) of the queue,
- `empty`: A check that returns `true` if the queue has no elements and `false` itherwise.

</details>

  <br>
