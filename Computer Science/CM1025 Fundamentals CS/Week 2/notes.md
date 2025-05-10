### Lesson 1.2 Tautology

---

- `Tautology` - a formula that is `always true`
- Example: p V ¬ p // "_p or not p_"
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
- (p V ¬ p) -> (p ∧ ¬ p) // "_p or not p then p and not p_"
- It's also called `Contradiction`

---
