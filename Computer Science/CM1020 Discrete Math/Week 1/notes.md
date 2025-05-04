### Introduction to the course

### The definition of a set

#### Definition of a set

A set is a collection of objects. The objects in a set are called its elements or members. The elements in a set can be any type of objects, including sets. The members of a set do not have to be of the same type.

---

#### Notation

Sets are usually denoted by capital letters and their elements are listed with curly braces.
For example the set A containing elements 1, 2 and 3 can be written as A = {1,2,3....}

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
