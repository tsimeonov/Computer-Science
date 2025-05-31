### 1.1 Propositional Logic

---

`Definition 1`

Let p be a proposition. The negation of p, denoted by ¬p (also denoted by p), is the statement
“It is not the case that p.”
The proposition¬p is read “not p.” The truth value of the negation of p,
of the truth value of p.

|  p  | ¬p  |
| :-: | :-: |
|  T  |  F  |
|  F  |  T  |

<sub>The truth table for the negation if a propostion</sub>

---

`Definition 2`

Let _p_ and _q_ be propositions. The _conjunction_ of _p_ and _q_, denoted by _p ∧ q_, is the proposition  
**"p and q."** The conjunction _p ∧ q_ is true when both _p_ and _q_ are true and is false otherwise.

---

**Definition 3**

Let _p_ and _q_ be propositions. The _disjunction_ of _p_ and _q_, denoted by _p ∨ q_, is the proposition  
**"p or q."** The disjunction _p ∨ q_ is false when both _p_ and _q_ are false and is true otherwise.

|  p  |  q  | p ∧ q |
| :-: | :-: | :---: |
|  T  |  T  |   T   |
|  T  |  F  |   F   |
|  F  |  T  |   F   |
|  F  |  F  |   F   |

<sub>Table 2: The Truth Table for the Conjunction of Two Propositions</sub>

|  p  |  q  | p ∨ q |
| :-: | :-: | :---: |
|  T  |  T  |   T   |
|  T  |  F  |   T   |
|  F  |  T  |   T   |
|  F  |  F  |   F   |

<sub>Table 3: The Truth Table for the Disjunction of Two Proposition</sub>

---

`Definition 4`

Let _p_ and _q_ be propositions. The _exclusive or_ of _p_ and _q_, denoted by _p ⊕ q_ (or _p XOR q_),  
is the proposition that is true when exactly one of _p_ and _q_ is true and is false otherwise.

|  p  |  q  | p ⊕ q |
| :-: | :-: | :---: |
|  T  |  T  |   F   |
|  T  |  F  |   T   |
|  F  |  T  |   T   |
|  F  |  F  |   F   |

<sub>Table 4: The Truth Table for the Exclusive Or of Two Propositions</sub>

---

`Definition 5`

Let _p_ and _q_ be propositions. The _conditional statement_ _p → q_ is the proposition  
**“if p, then q.”** The conditional statement _p → q_ is false when _p_ is true and _q_ is false, and true otherwise.  
In the conditional statement _p → q_, _p_ is called the _hypothesis_ (or _antecedent_ or _premise_)  
and _q_ is called the _conclusion_ (or _consequence_).

|  p  |  q  | p → q |
| :-: | :-: | :---: |
|  T  |  T  |   T   |
|  T  |  F  |   F   |
|  F  |  T  |   T   |
|  F  |  F  |   T   |

<sub>Table 5: The Truth Table for the Conditional Statement _p → q_</sub>

---

`Definition 6`

Let _p_ and _q_ be propositions. The _biconditional statement_ _p ⇔ q_ is the proposition  
**“p if and only if q.”** The biconditional statement _p ⇔ q_ is true when _p_ and _q_ have the same truth values,  
and is false otherwise. Biconditional statements are also called _bi-implications_.

|  p  |  q  | p ⇔ q |
| :-: | :-: | :---: |
|  T  |  T  |   T   |
|  T  |  F  |   F   |
|  F  |  T  |   F   |
|  F  |  F  |   T   |

<sub>Table 6: The Truth Table for the Biconditional p ⇔ q</sub>

---

`Definition 7`

A _bit string_ is a sequence of zero or more bits. The _length_ of this string is the number of bits in the string.

Example 15

`101010011` is a bit string of length nine.

---

`Inclusive OR (Logical OR / Disjunction)`

Definition:

A or B is true if either A is true, B is true, or both are true.

Symbol: A ∨ B (logical OR)

Truth Table:

|   A   |   B   | A ∨ B |
| :---: | :---: | :---: |
| True  | True  | True  |
| True  | False | True  |
| False | True  | True  |
| False | False | False |

---

`Exclusive OR (XOR)`

Definition:

A xor B is true only if A or B is true, but not both.

Symbol: A ⊕ B or XOR

Truth Table:

|   A   |   B   | A ⊕ B |
| :---: | :---: | :---: |
| True  | True  | False |
| True  | False | True  |
| False | True  | True  |
| False | False | False |

---
