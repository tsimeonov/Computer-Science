20. Suppose that the domain of the propositional function P(x) consists of−5,−3,−1, 1, 3, and 5. Express these statements without using quantifiers, instead using only negations, disjunctions, and conjunctions.

a) ∃xP(x)
b) ∀xP(x)
c) ∀x((x ≠ 1) → P(x))
d) ∃x((x ≥ 0) ∧ P(x))
e) ∃x(¬P(x)) ∧ ∀x((x < 0) → P(x))

---

a) ∃xP(x)

P(-5) v P(-3) v v P(-1) v P(1) v P(3) v P(5)

b) ∀xP(x)

P(-5) ∧ P(-3) ∧ P(-1) ∧ P(1) ∧ P(3) ∧ P(5)

c) ∀x((x ≠ 1) → P(x))

Step 1: Expand the universal quantifier ∀

((-5 ≠ 1) → P(-5)) ∧ ((-3 ≠ 1) → P(-3)) ∧ ((-1 ≠ 1) → P(-1)) ∧
((1 ≠ 1) → P(1)) ∧ ((3 ≠ 1) → P(3)) ∧ ((5 ≠ 1) → P(5))

Step 2: Evaluate the Antecedent (x ≠ 1) for each term
Evaluate each element:

- x = -5: (-5 ≠ 1) is T => T -> P(-5) ≡ P(-5)
- x = -3: (-3 ≠ 1) is T => T -> P(-3) ≡ P(-3)
- x = -1: (-1 ≠ 1) is T => T -> P(-1) ≡ P(-1)
- x = 1: (1 ≠ 1) is F => F -> P(1) ≡ T
- x = 3: (3 ≠ 1) is T => T -> P(3) ≡ P(3)
- x = 5: (5 ≠ 1) is T => T -> P(5) ≡ P(5)

Step 3: Substitute and simplify

P(-5) ∧ P(-3) ∧ P(-1) ∧ P(3) ∧ P(5)

d) ∃x((x ≥ 0) ∧ P(x))

Step 1: Expand the existential quantifier

((-5 ≥ 1) ∧ P(-5)) v ((-3 ≥ 1) ∧ P(-3)) v ((-1 ≥ 1) ∧ P(-1)) v
((1 ≥ 1) ∧ P(1)) v ((3 ≥ 1) ∧ P(3)) v ((5 ≥ 1) ∧ P(5))

Step 2: Evaluate each element

- x = -5: (-5 ≥ 0) is F => F ∧ P(-5) ≡ F
- x = -3: (-3 ≥ 0) is F => F ∧ P(-3) ≡ F
- x = -1: (-1 ≥ 0) is F => F ∧ P(-1) ≡ F
- x = 1: (1 ≥ 0) is T => T ∧ P(1) ≡ P(1)
- x = 3: (3 ≥ 0) is T => T ∧ P(3) ≡ P(3)
- x = 5: (5 ≥ 0) is T => T ∧ P(5) ≡ P(5)

Step 3: Substitute and simplify

F v F v F v P(1) v P(3) v P(5) ≡ P(1) v P(3) v P(5)

e) ∃x(¬P(x)) ∧ ∀x((x < 0) → P(x))

Step 1: Expand

(¬P(-5) v ¬P(-3) v ¬P(-1) v ¬P(1) v ¬P(3) v ¬P(5)) ∧
((-5 < 0) -> P(-5)) ∧ ((-3 < 0) -> P(-3))
∧ ((-1 < 0) -> P(-1)) ∧ ((1 < 0) -> P(1)) ∧ ((3 < 0) -> P(3)) ∧ ((5 < 0) -> P(5))

Step 2: Evaluate each element

- x = -5: (-5 < 0) is T => T -> P(-5) ≡ P(-5)
- x = -3: (-3 < 0) is T => T -> P(-3) ≡ P(-3)
- x = -1: (-1 < 0) is T => T -> P(-1) ≡ P(-1)
- x = 1: (1 < 0) is F => F -> P(1) ≡ T
- x = 3: (3 < 0) is F => F -> P(3) ≡ T
- x = 5: (5 < 0) is F => F -> P(5) ≡ T

Step 3: Substitute and simplify

(¬P(-5) v ¬P(-3) v ¬P(-1) v ¬P(1) v ¬P(3) v ¬P(5)) ∧ ((-5 < 0) -> P(-5)) ∧ ((-3 < 0) -> P(-3))
∧ ((-1 < 0) -> P(-1))
