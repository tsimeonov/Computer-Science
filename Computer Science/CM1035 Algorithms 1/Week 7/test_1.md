## Arrays and dynamic arrays

1. What is the difference between an abstract data stucture and a (concrete) data structure

Note that the terms data structure and concrete data structure will be used interchangeably.

- An abstract data structure cannot be implemented, but a (concrete) data structure can be implemented

- An abstract data structure does not concern itself with how it is implemented, but a (concrete) data structure is an implementation of something abstract

- An abstract data structure is an abstract data type, but a (concrete) data structure is the model of how computers store and address data

- A (concrete) data structure consists of a collection of data, but an abstract data structure does not

<details>

<summary>Answer</summary>

  <br>

- An abstract data structure does not concern itself with how it is implemented, but a (concrete) data structure is an implementation of something abstract

- An abstract data structure is an abstract data type, but a (concrete) data structure is the model of how computers store and address data

</details>

  <br>

2. Consider the following array

[1,2,4,3,3, empty]

Now, if we perform the following sequence of operations:

- write![0, 5]

- write![read[3]+read[4], 5]

- write![read[5], 0]

what is the final value stored at element 0?

<details>

<summary>Answer</summary>

  <br>

1. Initial StateThe array is $\mathbf{[1, 2, 4, 3, 3, 0]}$.

2. Operation 1: write![0, 5]

This operation writes the value $\mathbf{5}$ into the array element at index $\mathbf{0}$

- Operation: Array[0] $\leftarrow 5$
- Resulting State: $\mathbf{[5, 2, 4, 3, 3, 0]}$

3. Operation 2: write![read[3]+read[4], 5]

This operation calculates the sum of the values at indices 3 and 4, and writes that sum into the array element at index $\mathbf{5}$.

- Value to Write (V): $read[3] + read[4] = 3 + 3 = \mathbf{6}$
- Index to Write To (I): $\mathbf{5}$
- Operation: Array[5] $\leftarrow 6$
- Resulting State: $\mathbf{[5, 2, 4, 3, 3, 6]}

4. Operation 3: write![read[5], 0]

This operation reads the value at index 5, and writes that value into the array element at index $\mathbf{0}$.

- Value to Write (V): $read[5] = \mathbf{6}$
- Index to Write To (I): $\mathbf{0}$
- Operation: Array[0] $\leftarrow 6$
  -Final State: $\mathbf{[6, 2, 4, 3, 3, 6]}$

The final value stored at element 0 is $\mathbf{6}$.

</details>

  <br>

3. What are the differences between an array and a dynamic array?

What are the differences between an array and a dynamic array?

- A dynamic array is an abstract data structure, but an array is a data structure

- We can retrieve values stored in any element with an array, but not with a dynamic array

- The number of elements in a dynamic array can be altered, but this number cannot be altered in an array

<details>

<summary>Answer</summary>

  <br>

- A dynamic array is an abstract data structure, but an array is a data structure

- The number of elements in a dynamic array can be altered, but this number cannot be altered in an array

</details>

  <br>
