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

`Question 2 (C)`

Using inclusion-exclusion:
Total solutions without constraints:

$\frac{(12+3-1)}{2}$ = $\frac{(14)}{2}$ = 91

Subtract:

- x > 5 -> $\frac{8}{2}$ = 28
- y > 6 -> $\frac{7}{2}$ = 21
- z > 7 -> $\frac{6}{2}$ = 15

91 - (28 + 21 + 15) = 27

`Question 2 (D)`

Total circular arrangements of 6 peole: (6 - 1)! = 120

bad cases (two specific peopel together)
(5 -1) ! \* 2 = 48

120 - 48 = 72

`Question 3 (A)`

365 possible birthdays
Need at least 366 people to ensure a shared birthday

The answer is 366

`Qestion 3 (B)`

- Total 8-letter passwords with no repeated letters
  Total (no restriction)=P(26,8)=26×25×24×23×22×21×20×19
- We must choose and arrange 8 distinct consonants from the 21 available.
  All consonants (no vowels)=P(21,8)=21×20×19×18×17×16×15×14
- Subtract to get number of valid passwords (at least one vowel)
  Valid passwords=P(26,8)−P(21,8)

$$
{26 \times 25 \times 24 \times 23 \times 22 \times 21 \times 20 \times 19 - 21 \times 20 \times 19 \times 18 \times 17 \times 16 \times 15 \times 14}
$$

Which is

$$
{54,\!786,\!211,\!200}


$$
