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

---
