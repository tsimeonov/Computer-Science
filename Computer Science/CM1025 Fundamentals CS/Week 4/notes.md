### Proof techniques - part 2

#### Lesson 2.3 Inductive proof

---

##### `Proof by induction`

The Principle of Mathematical Induction

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

---
