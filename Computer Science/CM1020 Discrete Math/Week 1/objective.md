### Learning Objective

#### Topic 1: SETS

##### Define a set, the elements of a set and the cardinality of a set.

<details>
  <summary>Define a set</summary>

A `set` is a well-defined collection of distinct objects, considered as a whole.
These objects are called elements or members of the set.

- Sets are usually denoted by capital letters (e.g, A,B,S)
- Elements are typically inside curly braces: A = {1,2,3}

</details>

---

<details>
  <summary>Elements of a set</summary>

The `elements` of a set are the individual objects or members contained in the set.

- If an element a belongs to set A, we write a ∈ A
- If it does not belong, we write a ∉ B

</details>

---

<details>
  <summary>Cardinality of a set</summary>

The `cardinality` of a set is the number of elements in the set.

- Denoted by vertical bars: |A|
- Example if A = {2,4,6}, then |A| = 3

</details>

---

##### Explain the concept of Venn diagrams and how they are used to represent and compare different set expressions.

<details>
  <summary>What is Venn Diagram?</summary>

A `Venn diagram` is a visual way to represent sets and their relationships using overlapping circles.
Each circle represents a set, and the `overlapping areas` show where the sets share common elements (i.e interactions).
The universal set (everything under consideration) is often shown as a rectangle containing all the circles.

</details>

---

<details>
  <summary>How Venn diagrams represent set expressions:</summary>

1. `Union` (A ∪ B)

- Includes `all elements` in `A`, `B` or `both`
- Represented by the `total area` covered by both circles

2. `Intersection` ( A ∩ B)

- Includes elements `common` to both A and B
- Represented by the `overlapping` area of the circles

3. `Difference` (A -- B `or` A \ B)

- Elements in A that are not in B
- Represented by the part of A's circle that `doesn't overlap` with B

4. `Complement` (A')

- All elements not in A, relative to the `universal set`
- Represented by the area outside A's circle, inside the rectangle

</details>

---

##### Venn Diagram Example

Say we have:

- A = {1,2,3}
- B = {3,4,5}

Then:

- A ∪ B = {1,2,3,4,5} → All elements in either circle
- A ∩ B = {3} → Just the overlapping part
- A − B = {1,2} → Only in A, not in B

A Venn diagram would have two overlapping circles labeled A and B:

- Numbers 1 and 2 in only A's part

- 4 and 5 in only B's part

- 3 in the overlapping part

---

##### Describe and prove De Morgan's law using membership tables.

Of course! Let’s walk through **De Morgan's laws**, and **prove them using membership tables** (also called truth tables for sets).

📚 **De Morgan’s Laws for Sets**

There are two important De Morgan’s laws:

1. **First Law:**
   \[
   (A \cup B)' = A' \cap B'
   \]
   "The complement of a union is the intersection of the complements."

2. **Second Law:**
   \[
   (A \cap B)' = A' \cup B'
   \]
   "The complement of an intersection is the union of the complements."

📋 **Proof using Membership Tables**

Let’s build a table step-by-step.

We will check every possible membership for an element \( x \) related to \( A \) and \( B \).

| \(x \in A\) | \(x \in B\) | \(x \in A \cup B\) | \(x \in (A \cup B)'\) | \(x \in A'\) | \(x \in B'\) | \(x \in A' \cap B'\) | \(x \in A \cap B\) | \(x \in (A \cap B)'\) | \(x \in A' \cup B'\) |
| :---------: | :---------: | :----------------: | :-------------------: | :----------: | :----------: | :------------------: | :----------------: | :-------------------: | :------------------: |
|      0      |      0      |         0          |           1           |      1       |      1       |          1           |         0          |           1           |          1           |
|      0      |      1      |         1          |           0           |      1       |      0       |          0           |         0          |           1           |          1           |
|      1      |      0      |         1          |           0           |      0       |      1       |          0           |         0          |           1           |          1           |
|      1      |      1      |         1          |           0           |      0       |      0       |          0           |         1          |           0           |          0           |

(Where **1** means "yes (element belongs)", and **0** means "no (element does not belong)".)

🔎 **Analysis:**

For the First Law:

- Compare column \( (A \cup B)' \) and \( A' \cap B' \):
  - They are the **same** for every case!

Thus:

\[
(A \cup B)' = A' \cap B'
\]
✅ **First Law is proven!**

For the Second Law:

- Compare column \( (A \cap B)' \) and \( A' \cup B' \):
  - They are also **the same** for every case!

Thus:

\[
(A \cap B)' = A' \cup B'
\]
✅ **Second Law is proven!**

🎯 **Summary:**

| De Morgan's Law                | Description                                                        |
| :----------------------------- | :----------------------------------------------------------------- |
| \( (A \cup B)' = A' \cap B' \) | The complement of the union is the intersection of the complements |
| \( (A \cap B)' = A' \cup B' \) | The complement of the intersection is the union of the complements |

---
