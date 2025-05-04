### Week 2

---

#### The representation of a set using Venn diagrams

1. Union (A ∪ B)

- Elements that are in A, B, or both.
- Set notation: A ∪ B = { x ∣ x ∈ A or x ∈ B}

2. Intersection (A ∩ B)

- Elements that are in both A and B.
- Set notation: A ∩ B = { x ∣ x ∈ A and x ∈ B}

3. Difference (A − B)

- Elements in A but not in B.
- Set notation: A − B = { x ∣ x ∈ A and x ∈ B}

4. Symmetric Difference (A △ B)

- Elements in A or B but not both.
- Set notation: A △ B = ( A − B ) ∪ ( B − A )

Example:

Let

- A = {1, 2, 3, 4}
- B = {3, 4, 5, 6}

Then:

- A ∪ B = {1, 2, 3, 4, 5, 6}
- A ∩ B = {3, 4}
- A − B = {1, 2}
- A △ B = {1, 2, 5, 6}

<img src="./venn diagram.png" width="500px" style="border-radius: 20px;" >

---

#### De Morgan's laws

In Discrete Mathematics, De Morgan's Laws play a crucial role in `logic`, `set theory`, and `Boolean algebra`. Here's how they are applied in those contexts:

🔷 1. In Propositional Logic (used in discrete math for logical statements):

Let 𝑃 and Q be propositions (statements that are either true or false).

De Morgan’s Laws:

- First Law:

¬ ( P ∧ Q ) ≡ ( ¬ P ) ∨ ( ¬ Q )

"Not (P and Q)" is logically equivalent to "Not P or Not Q".

- Second Law:

¬ ( P ∨ Q ) ≡ ( ¬ P ) ∧ ( ¬ Q )

"Not (P or Q)" is logically equivalent to "Not P and Not Q".

🔷 2. In Set Theory (another core part of discrete math):

Let 𝐴 and B be sets in a universal set 𝑈.

De Morgan’s Laws:

- First Law:

(A ∩ B)^c^ = A^c^ ∪ B^c^

The complement of the intersection is the union of the complements.

Second Law:

(A ∪ B)^c^ = A^c^ ∩ B^c^

🔷 3. Truth Table Verification Example (for logic):

Let’s verify the first law with a truth table:

|  P  |  Q  | P ∧ Q | ¬(P ∧ Q) | ¬P  | ¬Q  | ¬P ∨ ¬Q |
| :-: | :-: | :---: | :------: | :-: | :-: | :-----: |
|  T  |  T  |   T   |    F     |  F  |  F  |    F    |
|  T  |  F  |   F   |    T     |  F  |  T  |    T    |
|  F  |  T  |   F   |    T     |  T  |  F  |    T    |
|  F  |  F  |   F   |    T     |  T  |  T  |    T    |

---

#### Laws of sets: Commutative, associative and distributives

In Discrete Mathematics, especially in `Set Theory`, the `Commutative`, `Associative`, and `Distributive` Laws help us understand how set operations behave. These laws are very similar to those in arithmetic and logic.

🔷 1. Commutative Laws
These state that the order of sets doesn't matter for union or intersection.

- Union: A ∪ B = B ∪ A
- Intersection:A ∩ B = B ∩ A

🔷 2. Associative Laws
These say that grouping of sets doesn't matter for union or intersection.

- Union: ( A ∪ B ) ∪ C = A ∪ ( B ∪ C)
- Intersection:( A ∩ B ) ∩ C = A ∩ ( B ∩ C)

🔷 3. Distributive Laws
These describe how union and intersection distribute over each other.

- Intersection over Union: A ∩ ( B ∪ C ) = ( A ∩ B ) ∪ ( A ∩ C)
- Union over Intersection: A ∪ ( B ∩ C ) = ( A ∪ B ) ∩ ( A ∪ C )

📌 Summary Table (Markdown)

|     Law      |           Expression            |
| :----------: | :-----------------------------: |
| Commutative  |          A ∪ B = B ∪ A          |
|              |          A ∩ B = B ∩ A          |
| Associative  |    (A ∪ B) ∪ C = A ∪ (B ∪ C)    |
|              |    (A ∩ B) ∩ C = A ∩ (B ∩ C)    |
| Distributive | A ∩ (B ∪ C) = (A ∩ B) ∪ (A ∩ C) |
|              | A ∪ (B ∩ C) = (A ∪ B) ∩ (A ∪ C) |

---

#### Partition of a set

🔷 Partition of a Set (in Discrete Mathematics)

A partition of a set is a way of breaking it into non-overlapping, non-empty subsets such that every element belongs to exactly one subset.

✅ Definition:

Let 𝑆 be a set. A partition of S is a collection of subsets {𝐴~1~ ,𝐴~2~ , ... , 𝐴~n~} such that:

1. Non-empty:

𝐴~i ~ ≠ ∅ for all 𝑖

2. Mutually disjoint:

A~i~ ∩ A~j~ = ∅ for all i ≠ j

3. Cover the whole set:

A~1~ ∪ A~2~ ∪ ... ∪ A~n~ = S
