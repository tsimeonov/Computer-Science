### Lesson 1.1 Propositional Logic

`Propositional logic` (also known as sentential logic or statement logic) is a brach of logic that deals with `propositions` - statements that are either `true` or `false`, but not both.

A proposition is a statement that is either true or false, but not both.

---

`Basic Concepts`:

- A proposition is a declarative sentence like:

  - "It's raining" -> Can be true or false
  - "2 + 2 = 5" -> Clearly is false, but still a proposition

- `Logical connectives` are used to build more complex propositions:

  - ¬ (not): Negation

  - ∧ (and): Conjunction

  - ∨ (or): Disjunction

  - → (if... then): Implication

  - ↔ (if and only if): Bi-conditional

---

`What is a proposition?`

- Questions
  - Cannot be assigned a truth value
- Imperatives (essential or urgent thing)
  - Does not take a truth value
- Sentences dependent on variables
  - The truth value changes with the variable

---

`Examples:`

Example A:

P = I study 20 hrs a week
S = I will be happy
R = I will pass the exam
Q = I attend all the lectures

- (P v Q) -> (R ^ S)
- (P or Q) -> (R ^ S)
- (P or Q) -> (R and S)
- If (P or Q) then (R and S)
- If "_I study 20 hrs a week_" or "_I attend all the lectures_", then "_I will pass the exam_" and "_I will be happy_"

Example B:

If the UK down not leave the EU, then skill nurses will not leave the NHS and research grants will remain intact.

- Let's name the atomic propositions:
  - P = UK leaves the EU,
  - Q = Nurses leave NHS,
  - S = Research grants will remain intact
- Rewrite:
  - **if** (not P) **then** (not Q and S)
- Connectives:
  - **if** (not P) **then** (not Q and S)
  - **not** P -> (**not** Q and S)
  - ¬P -> (¬Q **and** S)

---

**Truth tables**:

|  P  |  Q  | ¬P  | P ∧ Q | P ∨ Q | P → Q | P ↔ Q |
| :-: | :-: | :-: | :---: | :---: | :---: | :---: |
|  T  |  T  |  F  |   T   |   T   |   T   |   T   |
|  T  |  F  |  F  |   F   |   T   |   F   |   F   |
|  F  |  T  |  T  |   F   |   T   |   T   |   F   |
|  F  |  F  |  T  |   F   |   F   |   T   |   T   |

📘 Explanation of Columns:

- ¬P: True when P is false

- P ∧ Q: True only when both P and Q are true

- P ∨ Q: True if at least one of P or Q is true

- P → Q: False only when P is true and Q is false (i.e., a broken promise!)

- P ↔ Q: True when P and Q have the same truth value

---

### Lesson 1.2 Tautology

A **tautology** is a single statement (or proposition) that is always true, no matter what truth values its components have.

Example:

- P v ¬P ("P or not P") -> Always true, no matter if P is true or false.

Key ideas:

- Tautology = Universal true statement
- It's like logical "no-brainer" true by its form

A `consistency` applies to set of statements. A set is consistent if there is at least one way (one truth assignment) in which all the statements can be true at the same time.

Example:

Set:

- P → Q

- P

- Q

This set is consistent because it's possible for all 3 to be true at once (if both P and Q are true).

But this set would be inconsistent:

- P

- ¬P

Because P and not P can’t be true at the same time.

Key Idea:

- Consistency = All statements can be true together
- Inconsistency = Contradiction somewhere

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

---

Tautology and consistency - examples
(without using truth tables)

Example 1:

- p -> (q ∨ (p ∧ ¬p))
- p -> (q ∨ False)
- p -> q

`It's consistent`

Example 2:

- (q ∧ (p ∨ ¬p)) -> q
- (q ∧ True) -> q
- q -> q

`It's tautology`

Example 3:

- (q ∧ (p ∧ ¬p)) -> [(q ∧ ¬q) -> (¬p ∧ p)]
- (q ∧ (p ∧ ¬p)) -> [(q ∧ ¬q) -> False]
- (q ∧ (p ∧ ¬p)) -> [False -> False]
- (q ∧ (p ∧ ¬p)) -> True
- (q ∧ False) -> True
- False -> True

`It's tautology`
