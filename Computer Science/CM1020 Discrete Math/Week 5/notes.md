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
