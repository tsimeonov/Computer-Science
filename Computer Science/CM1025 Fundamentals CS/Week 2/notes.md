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

Another Equivalence: Conrapositive

- **p → q ≡ ¬q → ¬p** If p implies q, then not q implies not p — both mean the same thing.

- *Why is it true?*

1. Start with the basic implication equivalence:  
   **p → q ≡ ¬p ∨ q**

2. Now rewrite **¬p ∨ q** using commutativity:  
   **¬p ∨ q ≡ q ∨ ¬p**

3. Use implication identity again:  
   **q ∨ ¬p ≡ ¬q → ¬p**

- So, **p → q ≡ ¬q → ¬p**

-----

Equivalency with conjunction and negation

- Is it possible to convert all operators to conjunction and negation?
- For example, p ∨ q `based on the De Morgan's Law`, cam be written as ¬(¬p ∧ ¬q)
- Or, p -> q can be written as its equivalent ¬p ∨ q, and based on the De Morgan's Law, can be written as ¬(¬p ∧ ¬q)
- Since we can write the equivalence of disjunction. using negation and conjunction, it means we can rewritte all logical formulae using these two operators.

---

Rewrite `p ∨ (q → r)` only using **conjunction** and **negation**

- p ∨ (q → r) ≡
- ¬(¬p ∧ ¬(q → r)) ≡
- ¬(¬p ∧ ¬(¬q ∨ r)) ≡
- ¬(¬p ∧ (q ∧ ¬r))


- We can also convert each conjunction to its equivalent using disjunction and negation!**
----

Example

**Show without a truth table that:**  
¬(∃x[P(x) ∧ Q(x)]) ≡ ∀x[P(x) → ¬Q(x)]

1. ¬(∃x[P(x) ∧ Q(x)]) ≡ // ➡️ This is the starting expression: "It is not true that there exists an x such that P(x) and Q(x) are both true."
2. ∀x¬[P(x) ∧ Q(x)] ≡  // ➡️ Apply quantifier negation:
¬∃x φ(x) ≡ ∀x ¬φ(x)
3. ∀x[¬P(x) ∨ ¬Q(x)] ≡  // ➡️ Apply De Morgan’s Law inside the brackets: ¬(P ∧ Q) ≡ ¬P ∨ ¬Q
4. ∀x[P(x) → ¬Q(x)]   // ➡️ Use the identity for implication: P → Q ≡ ¬P ∨ Q // So, ¬P ∨ ¬Q ≡ P → ¬Q
5. ¬(∃x[P(x) ∧ Q(x)]) ≡ ∀x[P(x) → ¬Q(x)] // ➡️ This shows that the original negated existential statement is logically equivalent to a universal conditional.

-----

Important Notions

🔺 **Predicates** describe properties of objects  
- `Odd(3)` means 3 is an odd number; **Odd** is a predicate, **3** is an object  
- `Equal(5,6)` means 5 and 6 are equal; **Equal** is a predicate, **5, 6** are objects  

🔺 Predicates take arguments and become propositions

🔺 The connectives for propositional logic apply the same way  
- `Odd(3) ∧ Prime(3)` means 3 is odd and 3 is prime — **true**  
- `Even(4) → Prime(4)` means if 4 is even, then 4 is prime — **false**

🔺 Quantifiers make reasoning on multiple objects possible

🔺 The objects for the quantified statements are chosen from a **Domain**

----


