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

| P     | Q     | P ∧ Q | ¬(P ∧ Q) | ¬P    | ¬Q    | ¬P ∨ ¬Q | ¬(P ∧ Q) ≡ (¬P ∨ ¬Q) |
|:-------:|:-------:|:--------:|:-----------:|:-------:|:-------:|:----------:|:------------------------:|
| true  | true  | true   | false     | false | false | false    | true                   |
| true  | false | false  | true      | false | true  | true     | true                   |
| false | true  | false  | true      | true  | false | true     | true                   |
| false | false | false  | true      | true  | true  | true     | true                   |


`¬(P ∨ Q) ≡ (¬P ∧ ¬Q)`

"Not (P or Q)" is equivalent to "Not P and Not Q"

---- 

Example: negate the following

- It's Wednesday and it is not funny
- NOT (It's Wednesday and it is not sunny)
- NOT (It's Wednesday or NOT it is not sunny)
- It is NOT Wednesday or it is sunny

----
