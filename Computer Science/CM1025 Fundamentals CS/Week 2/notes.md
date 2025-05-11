### Lesson 1.2 Tautology

---

- `Tautology` - a formula that is `always true`
- Example: p ∨ ¬ p // "_p or not p_"
  - (p∧q) -> p // "_If p and q are true, then p is true_"
  - (p∧q) -> q // "_If p and q are true, then q is true_"
- Not a tautology
  - p∧q
  - Because if T(p) = 0 then p∧q is false
    "T(p) // _Truth value of p_"
  - p->q // "_p then q_"
  - Because if T(p) = 1 and T(q) then p->q is false

---

- `Consistent` - a formula that is `true at least for one` scenario
- Example p∧q // "_p and q_"
- All the connectives are consistent
- Not consistent or inconsistent is a formula that is never true
- p ∧ ¬ p // "_p and not p_"
- (p ∨ ¬ p) -> (p ∧ ¬ p) // "_p or not p then p and not p_"
- It's also called `Contradiction`

---

(¬ p ∧ q) ⟺ (p ∨ ¬ q) // "_not p and q if and only if p or not q_"

|   p   |   q   |  ¬p   |  ¬q   | ¬p ∧ q | p ∨ ¬q | (¬p ∧ q) ⟺ (p ∨ ¬q) |
| :---: | :---: | :---: | :---: | :----: | :----: | :-----------------: |
| false | false | true  | true  | false  |  true  |        false        |
| false | true  | true  | false |  true  | false  |        false        |
| true  | false | false | true  | false  |  true  |        false        |
| true  | true  | false | false | false  |  true  |        false        |

---

Tautology and Contradiction

- Tautology: A formula that is `always true`

  - Example: p ∨ ¬ p // "_p or not p_"
  - The same as p ∨ ¬ p ≡ True

- Contradiction: is a formula that is `always false`
  - Example: p ∧ ¬ p // "_p and not p_"
  - The same as p ∧ ¬ p ≡ False

---

Tautology? Consistent? Contradiction?

Example 1:

- (p ∨ ¬p) ⟺ (p ∧ ¬p) // "_p or not p OR p and npt p_"
  - p ∨ ¬ p ≡ True
  - p ∧ ¬ p ≡ False

(p ∨ ¬p) ⟺ (p ∧ ¬p) ≡ True ∨ False ≡ `True`

Example 2:

- (p -> p) ∨ (q ∧ r)
  - p -> p ≡ `True`
  - q ∧ r ≡ consistent
  - `True` ∨ ≡ consistent ≡ `True`
- So, (p -> p) ∨ (q ∧ r) `is a tautology`

---

Some useful relations?

- Tautology ∨ consistent ≡ Tautology
- Tautology ∧ consistent ≡ consistent
- Tautology ∨ contradiction ≡ Tautology
- Tautology ∨ contradiction ≡ contradiction
- Contradiction ∧ consistent ≡ Tautology
- Contradiction ∨ consistent ≡ contradiction
- Tautology ∧ contradiction ≡ contradiction
- Contradiction -> Tautology ≡ Tautology
- Contradiction -> consistent ≡ Tautology
