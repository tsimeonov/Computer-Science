### Lesson 3.2 Applications

#### `LOGICAL IMPLICATION`

`Logical implication` also knows as a `conditional statement`, which has the form: p -> q

- p is the `hypothesis`
- q is the `conclusion`

`Truth tables` for p -> q

|   p   |   q   | $p \rightarrow q$ |
| :---: | :---: | :---------------: |
| True  | True  |       True        |
| True  | False |     **False**     |
| False | True  |       True        |
| False | False |       True        |

The implication is only `false` when hypothesis is `true` and the conclusion is `false`

`Converse`, `Inverse`, and `Contrapositive`:

Given p → q:

- Converse: q → p
  → If John goes to the park, then it’s sunny

- Inverse: ¬p→¬q
  → If it’s not sunny, then John doesn’t go to the park

- Contrapositive: ¬ q → ¬ p
  → If John doesn’t go to the park, then it’s not sunny
  ✅ Logically equivalent to the original implication

#### `LOGIC EQUIVALENCE`

`Logical equicalence` a concept where two propositions always have the same truth value

`Key Concepts`

- `Logical Equivalence (↔)`
  A biconditional statement:
  p ↔ q is equivalent to (p -> q ) ∧ (q -> p)
  It's `true` only when `p and q have the same truth value`
- `Propositional equivalence (≡)`
  Two propositions are `logically equivalent` (written a as p ≡ q) if they always produce the same truth values in a truth table
