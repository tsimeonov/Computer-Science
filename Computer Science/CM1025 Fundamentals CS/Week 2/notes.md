### Lesson 1.3: First order logic

Propositional Equivalences

- Formula A and B are `equivalent` if they have the same truth tables
- We denote the equivalence by `≡`
- `A ≡ B` means that A and B always have the same truth values regardless of how the variables are assigned
- Note that `≡` is not a connective

---

De Morgan's laws

De Morgan’s Laws describe how negation interacts with conjunction (∧) and disjunction (∨).
They are fundamental in propositional logic, Boolean algebra, and digital circuit design.

The Two Laws:

`¬(P ∧ Q) ≡ (¬P ∨ ¬Q)`

"Not (P and Q)" is equivalent to "Not P or Not Q"

| p | q | ¬(p ∧ q) | ¬p | ¬q | ¬p ∨ ¬q |
|:-:|:-:|:--------:|:--:|:--:|:--------:|
| 1 | 1 |    0     |  0 |  0 |    0     |
| 1 | 0 |    1     |  0 |  1 |    1     |
| 0 | 1 |    1     |  1 |  0 |    1     |
| 0 | 0 |    1     |  1 |  1 |    1     |



`¬(P ∨ Q) ≡ (¬P ∧ ¬Q)`

"Not (P or Q)" is equivalent to "Not P and Not Q"

Here's your truth table correctly formatted in **Markdown**:

| p | q | p ∨ q | ¬(p ∨ q) | ¬p | ¬q | ¬p ∧ ¬q |
|:-:|:-:|:-----:|:--------:|:--:|:--:|:--------:|
| 1 | 1 |   1   |    0     |  0 |  0 |    0     |
| 1 | 0 |   1   |    0     |  0 |  1 |    0     |
| 0 | 1 |   1   |    0     |  1 |  0 |    0     |
| 0 | 0 |   0   |    1     |  1 |  1 |    1     |

---- 

Example: negate the following

- It's Wednesday and it is not funny
- NOT (It's Wednesday and it is not sunny)
- NOT (It's Wednesday or NOT it is not sunny)
- It is NOT Wednesday or it is sunny

----

Important equivalence

- **(p → q) ≡ (¬p ∨ q)**

- *Can you write the right-hand side using conjunction?*

- *Use De Morgan's Law*

- **(¬p ∨ q) ≡ ¬(¬(¬p) ∧ ¬q) ≡ ¬(p ∧ ¬q)**

- **So, (p → q) ≡ ¬(p ∧ ¬q)**

----
