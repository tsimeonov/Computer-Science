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

#### `LAWS OF PROPOSITIONAL LOGIC`

**Laws of propositional logic** used to simplify and prove logical equivalences:

1. **Idempotent Laws**:

   - $p \lor p \equiv p$,
   - $p \land p \equiv p$

2. **Commutative Laws**:

   - $p \lor q \equiv q \lor p$,
   - $p \land q \equiv q \land p$

3. **Associative Laws**:

   - Grouping of variables doesn't affect the outcome (e.g. $(p \lor q) \lor r \equiv p \lor (q \lor r)$)

4. **Distributive Laws**:

   - $p \lor (q \land r) \equiv (p \lor q) \land (p \lor r)$

5. **Identity Laws**:

   - $p \lor \text{False} \equiv p$,
   - $p \land \text{True} \equiv p$

6. **Domination Laws**:

   - $p \lor \text{True} \equiv \text{True}$,
   - $p \land \text{False} \equiv \text{False}$

7. **DeMorgan’s Laws**:

   - $\neg(p \lor q) \equiv \neg p \land \neg q$
   - $\neg(p \land q) \equiv \neg p \lor \neg q$

8. **Absorption Laws**:

   - $p \lor (p \land q) \equiv p$,
   - $p \land (p \lor q) \equiv p$

9. **Negation and Double Negation**:

   - $p \lor \neg p \equiv \text{True}$ (Tautology)
   - $p \land \neg p \equiv \text{False}$ (Contradiction)
   - $\neg(\neg p) \equiv p$
