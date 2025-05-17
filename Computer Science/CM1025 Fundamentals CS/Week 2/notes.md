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

--- 

Example: negate the following

- It's Wednesday and it is not funny
- NOT (It's Wednesday and it is not sunny)
- NOT (It's Wednesday or NOT it is not sunny)
- It is NOT Wednesday or it is sunny

---

Important equivalence

- **(p → q) ≡ (¬p ∨ q)**

- *Can you write the right-hand side using conjunction?*

- *Use De Morgan's Law*

- **(¬p ∨ q) ≡ ¬(¬(¬p) ∧ ¬q) ≡ ¬(p ∧ ¬q)**

- **So, (p → q) ≡ ¬(p ∧ ¬q)**

---

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

---

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

---

Example

**Show without a truth table that:**  
¬(∃x[P(x) ∧ Q(x)]) ≡ ∀x[P(x) → ¬Q(x)]

1. ¬(∃x[P(x) ∧ Q(x)]) ≡ // ➡️ This is the starting expression: "It is not true that there exists an x such that P(x) and Q(x) are both true."
2. ∀x¬[P(x) ∧ Q(x)] ≡  // ➡️ Apply quantifier negation:
¬∃x φ(x) ≡ ∀x ¬φ(x)
3. ∀x[¬P(x) ∨ ¬Q(x)] ≡  // ➡️ Apply De Morgan’s Law inside the brackets: ¬(P ∧ Q) ≡ ¬P ∨ ¬Q
4. ∀x[P(x) → ¬Q(x)]   // ➡️ Use the identity for implication: P → Q ≡ ¬P ∨ Q // So, ¬P ∨ ¬Q ≡ P → ¬Q
5. ¬(∃x[P(x) ∧ Q(x)]) ≡ ∀x[P(x) → ¬Q(x)] // ➡️ This shows that the original negated existential statement is logically equivalent to a universal conditional.

---

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

---

Quantifiers allow us to reason about multiple objects

🔺 **Existential quantifier**, denoted by ∃  
- `∃x` *"some formula"*  
- Means: for **some** `x`, the statement *"some formula"* is true  
- **Example**: `∃x Odd(x)` → means some numbers are odd  
- `∃x Prime(x)` → means there exists at least one number that is prime  
- **NOTE**: It is *enough* to find **one** element to make the formula **true**

---
Quantifiers allow us to reason about multiple objects

🔺Universal quantifier, denoted by ∀
- `∀x` *"some formula"*
- Means for **ALL x**, the statement *"some formula"* is true
- **Example**: `∀x (Odd(x) ∨ Even(x))` — it means all numbers are either odd or even
- `∀x (x < x+1)` — it means all numbers increase when you add 1
- **NOTE**: It is **NOT** enough to find some elements that make the formula true — it must hold for **all** elements
  
---

Universal Quantifier

**"All Ps are Qs" translates as** ∀x (P(x) → Q(x))

- A counter-example proves that a universally quantified statement is false.
- **Example:** ∀x (Prime(x) → Odd(x)), which means all prime numbers are odd.
- Let x be 2. But 2 is prime and not odd, so the statement is **false**.
- ∀x (Multiple4(x) → Multiple2(x)), which means all multiples of 4 are multiples of 2. **True**.

**"No Ps are Qs" translates as** ∀x (P(x) → ¬Q(x))

- If we find one P that is Q, then we prove that the statement above is false.
- **Example:** ∀x (Prime(x) → ¬Square(x)), which means no prime number is square. **True**.
- ∀x (Prime(x) → ¬Even(x)), which means no prime number is even. **False**.


---

Existential Quantifier

**"Some Ps are Qs" translates as** ∃x (P(x) ∧ Q(x))

- Existentially quantified statements are true if an evidence example exists.
- **Example:** ∃x (Prime(x) ∧ Even(x)) – some prime numbers are even. **True**
- **Example:** ∃x (Professor(x) ∧ Under2(x)) – some professors are under 2. **Not true!**


**"Some Ps are not Qs" translates as** ∃x (P(x) ∧ ¬Q(x))

- **Example:** ∃x (Prime(x) ∧ ¬Even(x)) – some prime numbers are not even. **True**

---

Quantifiers to Connectives

- **∃x, _P(x)_** and domain is D = {x₁, x₂, ..., xₙ} means:

  _P(x₁)_ ∨ _P(x₂)_ ∨ ... ∨ _P(xₙ)_

- **∀x, _P(x)_** and domain is D = {x₁, x₂, ..., xₙ} means:

  _P(x₁)_ ∧ _P(x₂)_ ∧ ... ∧ _P(xₙ)_


---