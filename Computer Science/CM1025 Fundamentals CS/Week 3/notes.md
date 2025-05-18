### Proof techniques - part 1

#### Lesson 2.0 Introduction


---
What is proof?

In discrete mathematics, a proof is a logical argument that demonstrates the truth of a mathematical statement using a series of deductive steps based on axioms, definitions, and previously established results.

---

#### Lesson 2.2 Formal Proof

---

Direct Proof

- Easy because no particular technique is used
- Not easy - starting point in not obvious 
- Know your definitions
- Allowed to use any theorem (e.g axiom, logic)

`Theorem`: If n and m are both even, then n + m is even

- **Proof**: What does *even* mean?
- If an integer is **even**, it can be made by **twice another integer**
- Let n = 2k, m = 2l, where *k* and *l* are integers
- Then:  
  m + n = 2k + 2l
- Factorise:  m + n = 2(k + l)
- Integers are closed under addition
- k + l is an integer, call it *t*
- m + n = 2t. So, it is even

`Theorem`: For \( n \in \mathbb{N} \), \( n^2 + n \) is even

Proof:
- **If** \( n \) **is even**, \( n = 2k \)
- \( n^2 + n = (2k)^2 + 2k = 4k^2 + 2k \) → **Even**

- **If** \( n \) **is odd**, \( n = 2k + 1 \)
- \( n^2 + n = (2k + 1)^2 + 2k + 1 \)
- \( = 4k^2 + 4k + 1 + 2k + 1 = 4k^2 + 6k + 2 \) → **Even**

`Theorem`: If \( a < b < 0 \) then \( a^2 > b^2 \)

Proof:
- \( a < b \) and \( a < 0 \), so multiply the inequality by \( a \)
- \( a \cdot a > b \cdot a \) so \( a^2 > b \cdot a \)
- \( a < b \) and \( b < 0 \), so multiply the inequality by \( b \)
- \( a \cdot b > b \cdot b \) so \( a \cdot b > b^2 \)
- *Commutative property* of multiplication: \( b \cdot a = a \cdot b \)
- \( a^2 > b \cdot a > b^2 \)
- \( a^2 > b^2 \)

`Theorem`: For all \( x \in \mathbb{N} \), \( 2x^3 + x \) is a multiple of 3

Proof:
- \( 2x^3 + x = x(2x^2 + 1) \)
- If \( x \) is a multiple of 3, we are complete!
- If \( x = 3k + 1 \):
  - \( x(2x^2 + 1) = (3k + 1)[2(3k + 1)^2 + 1] = (3k + 1)(18k^2 + 12k + 3) = 3(3k + 1)(6k^2 + 4k + 1) \)
- If \( x = 3k + 2 \):
  - \( x(2x^2 + 1) = (3k + 2)[2(3k + 2)^2 + 1] = (3k + 2)(18k^2 + 24k + 9) = 3(3k + 2)(6k^2 + 8k + 3) \)

---