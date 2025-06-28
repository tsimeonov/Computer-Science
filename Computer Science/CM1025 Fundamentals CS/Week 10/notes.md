## Midterm

`Question 1 (A)`

Given:

(P∨Q)→R and (P→R)∧(Q→R)
Claim: They are logically equivalent.

Proof:

(⇒ direction):

Assume (P∨Q)→R.

If P is true, then P ∨ Q is true → R is true → P → R holds.
If Q is true, then P ∨ Q is true → R is true → Q → R holds.

So, (P→R)∧(Q→R).

(⇐ direction):

Assume ( P → R ) ∧ ( Q → R).

If P ∨ Q is true, then either Q is true.
If P, then R (since P → R)
if Q, then R

So,

( P ∨ Q ) → R holds.

`Question 1 (B)`

A, C, and D are tautologies.

`Question 1 (C)`

P → ( Q → R ) ≡ P → ( ¬ Q ∨ R ) ≡ ¬ P ∨ ¬ Q ∨ R ≡ ¬ ( P ∧ Q ) ∨ R ≡( P ∧ Q ) → R

So both expressions are logically equivalent.

`Question 1 (D)`

Let:

- C(x): "x owns a cat"
- L(x): "x loves animals"

Then:

- Premise 1: ∀ x ( C( x ) → L ( x ) )
- Premise 2: ∃ x C ( x )
- Conclusion: ∃ x L ( x )

`Valid by universal instantiation and modus ponens`.

`Question 2 (A)`

If $\frac{1}{f(x)}$ is not continuous, then f(x) = 0 at some point

Because if f(x) ≠ 0 everywhere and is continuius, then $\frac{1}{f(x)}$ is continuous.

It's Proved via contrapositive.

`Question 2 (B)`

Proof of contradiction:

Assume $\sqrt{2}$ \* $\sqrt{3}$ = r, where r is rational and $\sqrt{2}$ is irrational

Then:

$\sqrt{3}$ = $\frac{r}{\sqrt{2}}$

Since r is rational and $\sqrt{2}$ is irrational, $\frac{r}{\sqrt{2}}$
is irrational,
-> contradiction: $\frac{r}{\sqrt{3}}$ can't be both rational and irrational

So, the product must be irrational
