### Proof techniques - part 1

#### Lesson 2.0 Introduction

---

What is proof?

In discrete mathematics, a proof is a logical argument that demonstrates the truth of a mathematical statement using a series of deductive steps based on axioms, definitions, and previously established results.

---

#### Lesson 2.1 Formal Proof

---

Direct Proof

- Easy because no particular technique is used
- Not easy - starting point in not obvious
- Know your definitions
- Allowed to use any theorem (e.g axiom, logic)

`Theorem`: If n and m are both even, then n + m is even

- **Proof**: What does _even_ mean?
- If an integer is **even**, it can be made by **twice another integer**
- Let n = 2k, m = 2l, where _k_ and _l_ are integers
- Then:  
  m + n = 2k + 2l
- Factorise: m + n = 2(k + l)
- Integers are closed under addition
- k + l is an integer, call it _t_
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
- _Commutative property_ of multiplication: \( b \cdot a = a \cdot b \)
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

#### Lesson 2.2 Proof by contradiction

---

Proof by contradiction

`Proof by contradiction`, a logical method used to prove a statement A is true by assuming A is false, and then demonstrating that this leads to a contradiction.

🔸 **Example 1: √2 is Irrational**

- **Assume** √2 is rational: $\sqrt{2} = \frac{p}{q}$, where $p$ and $q$ are integers in simplest form.
- Squaring gives: $2 = \frac{p^2}{q^2}$ → $p^2 = 2q^2$, so **p is even**.
- Let $p = 2k$; this leads to $q^2$ also being even, so **q is even**.
- But now both $p$ and $q$ are even → contradiction (not in simplest form).
- Therefore, √2 **must be irrational**.

🔸 **Example 2: Infinite Primes**

- **Assume** there are only finitely many primes: $P_1, P_2, ..., P_n$
- Let $N = (P_1 \cdot P_2 \cdot ... \cdot P_n) + 1$
- $N$ is not divisible by any listed prime (always leaves remainder 1)
- So $N$ is a **new prime**, not in the original list → contradiction
- Therefore, there are **infinitely many prime numbers**

---

Proof by contrapositive

`Proof by contrapositive`, a logical technique closely related to proof by contradiction. It leverages the idea that a conditional statement:

If  𝐴 then  𝐵

is logically equivalent to its contrapositive:

If not B then not A

🔸 **Example 1:**

Statement:
**If $n^3 + 1$ is odd, then $n$ is even**

Contrapositive:
**If $n$ is odd, then $n^3 + 1$ is even**

- Assume $n = 2k + 1$ (odd form)
- Then compute $(2k + 1)^3 + 1 = 8k^3 + 12k^2 + 6k + 2$, which is clearly even
- ✅ Therefore, the contrapositive is true → original statement is true

🔸 **Example 2:**

Statement:
**If $y^3 + yx^2 < x^3 + xy^2$, then $y \leq x$**

Contrapositive:
**If $y > x$, then $y^3 + yx^2 > x^3 + xy^2$**

- Assume $y > x$, so $y - x > 0$
- Multiply both sides by $y^2 + x^2$, a positive quantity
- Algebra leads to the desired inequality
- ✅ Thus, the contrapositive holds → original implication is true

---
