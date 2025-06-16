### Topic 3A. Propositional logic

---

#### `Introduction to propositional logic`

Propositional logic is a branch of logic focused on mathematical statements and reasoning. It is described as an `algebra of propositions` using logical operators like and, or, not, implies, and if and only if. Applications include `circuit design, logic programming` and `AI systems` such as `theorem provers` and `program verifiers`

#### `Propositions`

A `proposition` is a `mathematical statement` this is either true or false but not both.
Examples

- "London is the capital of UK" (true)
- "3<2" (false)

Sentences like questions or vague statements aren't propositions.
To simplify expressions, `propositional variables` like p, q, r are used to represent these statements.

#### `Truth tables and truth sets`

A `truth table` displays all possible values for propositional variables and helps evaluate complex logical expressions

🔹 Example:

For two propositions `p` and `q`, the truth table has 4 rows:

|   p   |   q   | p ∧ q |
| :---: | :---: | :---: |
| False | False | False |
| False | True  | False |
| True  | False | False |
| True  | True  | True  |

A `truth set` is the set of elements from a domain where a proposition is true

🔹 Example:

Let S = {1,2,3,4,5,6,7,8,9,10}

- Propostion `p(n)`: `"n is even"`
  -> Truth set P = {2,4,6,8,10}
- Propostion `q(n)`: `"n is odd"`
  -> Truth set Q = {1,3,5,7,9}

#### `Compound propositions`

In propositional logic, `compound propositions` are built by combining simple propositions using ligical operators.
The main operators include:

1. **Negation (¬p)**

Reverses the truth value.

- Example:
  If `p`: “It is raining” is **True**, then `¬p`: “It is not raining” is **False**.

2. **Conjunction (p ∧ q)**

True only when **both** p and q are true.

- Example:
  `p`: “n is even”
  `q`: “n < 10”
  `p ∧ q`: “n is even and less than 10”
  ➤ True only if **both** conditions are met.

3. **Disjunction (p ∨ q)**

True when **at least one** of p or q is true.

- Example:
  `p`: “n is even”
  `q`: “n < 10”
  `p ∨ q`: “n is even or less than 10”
  ➤ True if either or both conditions are true.

4. **Exclusive-Or (p ⊕ q)**

True when **only one** of p or q is true.

- Example:
  `p`: “n is even”
  `q`: “n < 10”
  `p ⊕ q`: “n is even or less than 10, but not both”
  ➤ True only if **exactly one** condition is true.

🧠 Operator Precedence

- **Negation (¬)** is evaluated first
- Then **conjunction (∧)**
- Followed by **disjunction (∨)**
- Parentheses can change the order
