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
