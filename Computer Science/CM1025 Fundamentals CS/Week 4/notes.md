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

1. Base Case:

You prove that the statement is true for the starting value (usually n = 0 or n = 1).

📌 This is like proving the first domino falls:

Show that P(0) is true.

2. Inductive Step:

You assume the statement is true for some arbitrary number k, and then show it must be true for k + 1.

📌 This is like showing if one domino falls, the next will too:

Prove that P(k) → P(k + 1).

---
