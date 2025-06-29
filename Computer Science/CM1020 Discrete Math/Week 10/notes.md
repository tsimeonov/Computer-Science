## Midterm

`Question 1 (A) i`

Step 1: X ∩ Y ∩ Z

- X ∩ Y = {4,6,8,10}
- ( X ∩ Y ) ∩ Z = { 10 }

The Answer is: X ∩ Y ∩ Z = {10}

Step 2: Y ∖ Z (elements inY but not in Z)

- Y = {4,6,8,10,12}
- Z = {2,10,12,14,16}

So:

Y∖Z={4,6,8}

Now: X ∪ (Y∖Z)

- X = {2,4,6,8,10}
- Y ∖ Z={4,6,8}

So the union is:

X ∪ (Y∖Z) = {2,4,6,8,10}

`Question 1 (A) ii`

- X = {2,4,6,8,10}
- X ∩ Y ∩ Z = {10}

Clearly, X ∉ {10}

The anser is No, X ∉ X ∩ Y ∩ Z because elements like 2, 4, 6, and 8 are in X but not in the intersection.

`Question 1 (A) iii`

Step 1: Y ∩ Z = {10,12}
Step 2: X ∪ ( Y ∩ Z) = {2,4,6,8,10,12}

This set has 6 elements.

So:∣ P ( X ∪ ( Y ∩ Z ) )∣= $2^6$ =64

`Question 1 (B)`

The only sets A satisfying P (A) ⊆ {∅,{∅},{{∅}}} are:

- A=∅,
- A={∅}
- A={{∅}}

`Question 1 (C)`

- (⇒) If A ⊆ B, then any element in A ∩ C is also in
  B ∩ C. So the inclusion holds.
- (⇐) If A ∩ C ⊆ B ∩ C for all C, choose C = A. Then:
  A ∩ A = A ⊆ B ∩ A ⊆ B
  A ⊆ B must hold.

The statement is correct

`Question 1 (D)`

A ⊆ B and C ⊆ B only mean both sets are inside B, but they can still share elements.

Being subsets of the same set does not imply disjointness.

`Question 2 (A) i`

f(x) is not defined for all x ∈ R

So f is not a function from R to R

`Question 2 (A) ii`

Well defined for all integers, one output per input

Yes, this is a function from Z to Z

`Question 2 (A) iii`

f(x) is not defined for negative values of x

So f is not a function from R to R

`Question 2 (B)`

- Compute both sides

(f o g)(x) = f(g(x)) = f $(\sqrt{x} + 3)^2$ + b =
c + $\sqrt{x}$ + 9 + b = (g o f) (x) + g (f(x)) =
g(${x}^2$ + b) = $\sqrt{x^2 + b + 3}$

- Set them equal

x + 6 $\sqrt{x}$ + 9 + b = $\sqrt{x^2 + b + 3}$

- There is no value of b for which (f o g)(x) = (g o f)(x)

`Question 2 (C)`

- 2 $log_4$(x) = $log_4$($x^2$) => $log_4$($x^2$) - $log_4$(3x-2) = 0 => $log_4$ ($\frac{x^2}{3x-2}$) = 0

- $\frac{x^2}{3x-2}$ = 1 => $x^2$ = 3x + 2 = 0 => (x-1)(x-2) = 0

- x = 1 or x = 2

`Qestion 2 (D) i`

f'(x) = $\frac{d}{dx}$ ($e^x$ + x ) = $e^x$ + 1 > 0

ffor all x ∈ R\*

Yes, f is one to one

`Qestion 2 (D) ii`

f(x) never reaches values less than some bound

So no, f is not onto.

`Qestion 2 (E)`

Let $a_1$, $a_1$ ∈ A and suppose:

(g o f)($a_1$) = (g o f)($a_2$) => g(f($a_1$)) = g(f($a_2$))

Since g is one-to one:

f($a_1$) = f($a_2$)

And since f is also one-to-one:

$a_1$ = $a_2$

This proves that g o f maps distinct inputs to disctinct outputs

`Question 3 (A) i`

|  p  |  q  |  r  | p ⊕ q | (p ⊕ q) → r | p ∨ q | p ∧ r | (p ∨ q) → (p ∧ r) |
| :-: | :-: | :-: | :---: | :---------: | :---: | :---: | :---------------: |
|  F  |  F  |  F  |   F   |      T      |   F   |   F   |         T         |
|  F  |  F  |  T  |   F   |      T      |   F   |   F   |         T         |
|  F  |  T  |  F  |   T   |      F      |   T   |   F   |         F         |
|  F  |  T  |  T  |   T   |      T      |   T   |   F   |         F         |
|  T  |  F  |  F  |   T   |      F      |   T   |   F   |         F         |
|  T  |  F  |  T  |   T   |      T      |   T   |   T   |         T         |
|  T  |  T  |  F  |   F   |      T      |   T   |   F   |         F         |
|  T  |  T  |  T  |   F   |      T      |   T   |   T   |         T         |

`Question 3 (A) ii`

- (p ⊕ q) -> r: not a tautology
- (p V q) -> (p ∧ r): not a tautology

`Question 3 (B)`

We are given:

- p = False
- q = True
- r = False
- s = True

The truth value needs to be evaluated

((p∨¬r)∧(q→s))↔((¬p∧q)∨(r→s))

- First the left side

(p∨¬r)=(F∨¬F)=(F∨T)=T

(q→s)=(T→T)=T

T∧T=T

- Right Side

(¬p∧q)=(T∧T)=T

(r→s)=(F→T)=T

T∨T=T

The conclusion is the compound proposition is true

`Question 3 (C) i`

r→(p∧q)
