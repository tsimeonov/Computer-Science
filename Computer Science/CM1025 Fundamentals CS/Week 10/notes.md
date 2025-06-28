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

`Question 3 (C)`

Given: $x_1$ + $x_2$ + $x_3$ + $x_4$ = 20

Each $x_i$ > 1 and $x_i$ ≠ 2, 3

Let $x_i$ >= 4: so define $y_i$ = $x_i$ - 4 -> $y_i$ >= 0

$y_1$ + $y_2$ + $y_3$ + $y_4$ => $\frac{4+4-1}{3}$ = $\frac{7}{3}$ = 35

`Question 4 (A) i`

DFA for accepting binary strings containing `"101"`:

- States: q0 (start), q1, q2, q3 (accepting)

- Alphabet: {0, 1}

- Transitions:

  - q0 —1→ q1, q0 —0→ q0
  - q1 —0→ q2, q1 —1→ q1
  - q2 —1→ q3, q2 —0→ q0
  - q3 —0/1→ q3 (stay in accepting)

- Accepting State: q3

- Accepts strings containing `"101"` as a substring.

`Question 4 (A) ii`

String: "1101"

- Loops on $q_1$ with extra 1s
- Exits to accept via "01"

`Question 4 (A) iii`

Modify DFA to accept even number of 1s.
Track parity: even ↔ odd ↔ even.

New string accepted: "1100"
Not accepted under old DFA (no "101").

`Question 4 (B)`

Regex for: no "11", ends in "0":

(0+10) \* 0

All binary strings that do not contain "11" and end with

`Question 5 (A)`

- abc123
- A1b2C3
- z9

`Question 5 (B)`

Regex: (0 + 1) _ 101 (0 + 1 )_

Then filter out strings containgin "111"
