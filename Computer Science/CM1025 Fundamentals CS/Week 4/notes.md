## Proof techniques - part 2

### Lesson 2.3 Inductive proof

---

#### Proof by induction

`The Principle of Mathematical Induction`

             ┌────────────────────┐
             │  P(0) is true      │
             └────────┬───────────┘
                      │
          (If it starts true)
                      │
                      ▼
             ┌─────────────────────────────┐
             │  ∀k ∈ ℕ, P(k) → P(k + 1)    │
             └────────┬────────────────────┘
                      │
         (And it remains true for next step)
                      │
                      ▼
             ┌─────────────────────────────┐
             │   ∀n ∈ ℕ, P(n) is true      │
             └─────────────────────────────┘
                      │
           (So it remains true for all n)

🧠 Explanation

Mathematical induction is a powerful proof technique used to show that a statement P(n) holds for all natural numbers (or for all values from some starting point like 0 or 1). It works in two main steps:

1. Base Case:

You prove that the statement is true for the starting value (usually n = 0 or n = 1).

📌 This is like proving the first domino falls:

Show that P(0) is true.

2. Inductive Step:

You assume the statement is true for some arbitrary number k, and then show it must be true for k + 1.

📌 This is like showing if one domino falls, the next will too:

Prove that P(k) → P(k + 1).

`What does it mean?`

- **P(0)**
- **∀k ∈ ℕ. P(k) → P(k + 1)**

- It is true at the beginning: for **0**
- _Since it is true for 0 then it is true for 0 + 1_
- _Since it is true for 1 then it is true for 1 + 1_
- _Since it is true for 2 then it is true for 2 + 1_
- _Since it is true for 3 then it is true for 3 + 1_
- ...

`Three Steps of Induction`

- **Prove** `P(0)` is true

  - This step is called the **Basis**

- **Prove** If `P(k)` then `P(k + 1)`

  - This step is called the **Inductive Step**
  - The assumption that `P(k)` is true is called the **Inductive Hypothesis**

- **Conclude**, by induction, that `P(n)` is true for all `n`

---

#### Example of a correct proof

Theorem: The sum of the first _n_ powers of 2 is `2ⁿ - 1`

- 2⁰ = 1 = 2¹ - 1
- 2⁰ + 2¹ = 1 + 2 = 3 = 2² - 1
- 2⁰ + 2¹ + 2² = 1 + 2 + 4 = 7 = 2³ - 1
- 2⁰ + 2¹ + 2² + 2³ = 1 + 2 + 4 + 8 = 15 = 2⁴ - 1
- 2⁰ + 2¹ + 2² + 2³ + 2⁴ = 1 + 2 + 4 + 8 + 16 = 31 = 2⁵ - 1
- 2⁰ + 2¹ + 2² + 2³ + 2⁴ + 2⁵ = 1 + 2 + 4 + 8 + 16 + 32 = 63 = 2⁶ - 1

Let `P(n)` be:  
`2⁰ + 2¹ + ... + 2ⁿ⁻¹ = 2ⁿ - 1`

Goal:
Prove that `P(n)` is true for all `n`.

Basis:
**Prove `P(1)` is true:**  
`P(1): 2⁰ = 1 = 2¹ - 1`

Inductive Step:
**Prove:** `P(k) → P(k + 1)`

- **Assume `P(k)` is true:**  
  `2⁰ + 2¹ + ... + 2ᵏ⁻¹ = 2ᵏ - 1`

- **Prove `P(k+1)` is true:**  
  `P(k+1): 2⁰ + 2¹ + ... + 2ᵏ⁻¹ + 2ᵏ = 2ᵏ⁺¹ - 1`

**LHS:**  
`2⁰ + 2¹ + ... + 2ᵏ⁻¹ + 2ᵏ`  
Using the inductive hypothesis:  
`= (2ᵏ - 1) + 2ᵏ = 2ᵏ⁺¹ - 1`

---
