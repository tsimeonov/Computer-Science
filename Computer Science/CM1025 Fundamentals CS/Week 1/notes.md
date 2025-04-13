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
