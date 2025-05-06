### Introduction to the course

#### Introduction to discrete mathematics

📘 `Introduction to Discrete Mathematics`

Discrete Mathematics is the branch of mathematics that deals with `countable`, `distinct`, and `separate objects`, unlike continuous mathematics (like calculus). It forms the theoretical foundation for many areas in computer science, logic, cryptography, and combinatorics.

`🔷 Why "Discrete"?`

The term "discrete" means `non-continuous`. Discrete math studies structures that are finite or countably infinite, such as integers, graphs, and statements in logic.

---

### The definition of a set

#### Definition of a set

A set is a collection of objects. The objects in a set are called its elements or members. The elements in a set can be any type of objects, including sets. The members of a set do not have to be of the same type.

---

#### Notation

Sets are usually denoted by capital letters and their elements are listed with curly braces.
For example the set A containing elements 1, 2 and 3 can be written as A = {1,2,3....}

##### Element or member of set (∈)

The symbol ∈ denotes membership. If a is an element of a set A, we write a ∈ A

For example:

The set A = { 1 ,2 ,3} is a set containing the elements 1,2 and 3

We write:

1 ∈ A means 1 is an element of A,
2 ∈ A means 2 is an element of A and,
3 ∈ A means 3 is an element of A.

We refer to not a member of a set using the symbol ∉. If a is not an element of a set A, we write a ∉ A.

For example: let A be a set with A = {1,2,3}. Clearly 4 is not an element of A.
We write 4 ∉ A.

##### Special sets of numbers

We designate these notations for some special sets of numbers:

- N = the set of natural numbers (positive integers)
- Z = the set of integers
- Q = the set of rational numbers
- R = the set of real numbers

##### Cardinality of a set

The cardinality of a set refers to the number of elements in the set. It is a measure of the 'size' of the set.

Definition ~ The cardinality of a set A is denoted by ∣A∣, is the number of distinct elements in
A.

For example:

For the set A = {1, 2 , 3 , 4 } A, the cardinality |A| = 4
For the set B = { a , b , c }, the cardinality ∣B∣ = 3.

For the empty set, ∅ the cardinality |∅| = 0
∣∅∣=0vertical bar, \emptyset, vertical bar, equals, 0.

##### Empty set (∅)

The empty set, also known as the `null set`, is a fundamental concept in set theory and mathematics.
It is the set that contains no elements.

Definition ~ The empty set is a set with no elements. It is denoted by ∅ or{ }
In mathematical notation ∅ = {}

---

#### The listing method and rule of inclusion

1. `Listing Method (Roster method)`

- You list all the elements of a set explicitly separated by commas, and place them inside curly braces {}
- This method shows exactly which elements are in the set

Example:

A = {2,4,6,8}

- Set A contains exactly 2,4,6 and 8

2. `Rule of inclusion (Set-Builder Method)`

- You describe the property or rule that all elements of the set satisfy, instead of listing them individually.
- Usually written using a vertical bar | or colon : meaning "such that".

Example:

A = {x ∈ N | x is an even x < 10}

- This says "A is the set of all natural numbers x such that x is even and less than 10"

#### The powerset of a set

`What is a Power Set?`

- The `power set` of set S is the set of all possible subsets of S, including
  - The empty set ∅ (null sign)
  - the set S itself
- The power set is usually denoted by P(S)

`Example:`

Lets' say:

S = {a,b}

Then the power set P(S) is

P(S) = {∅,{a},{b},{ab}}

`Quick example with three elements`

If:

S = {1,2,3}

then:

P (S) = {∅,{1},{2},{3},{1,2},{1.3},{2,3},{1,2,3}}

Power set has 2^3^ = 8 subsets

#### Set Operations

1. `Union (A ∪ B)`

- Combines all elements from both sets A and B
- No duplicates

A = {1,2,3}, B = {3,4,5}
A ∪ B = {1,2,3,4,5}

2. `Intersection (A ∩ B)`

- The set of elements that are common to both A and B

Example:

A ∩ B = {3}

3. `Difference (A - B or A \ B)`

- The elements that are in A but not in B

A - B = {1,2}
(And B - A = {4,5} )

4. `Complement (A')`

- The set of elements that are in the universal set but not in A

Example: if the universal set U = {1,2,3,4,5,6} and A = {1,2,3}, then A' = {4,5,6}

`Quick Summary table`

|  Operation   | Symbol |                  Meaning                   |
| :----------: | :----: | :----------------------------------------: |
|    Union     |   ∪    |                Combine sets                |
| Intersection |   ∩    |              Common elements               |
|  Difference  |   −    |        In one set but not the other        |
|  Complement  |   ′    | Not in the set (relative to universal set) |
