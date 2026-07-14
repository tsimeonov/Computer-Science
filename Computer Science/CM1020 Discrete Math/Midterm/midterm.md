### Question 1

#### (A) i.

We will extract the elements for each set based on their conditions relative to the universal set $U$.

- Set A (Even numbers in U):

$$A = \{-6, -4, -2, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18\}$$

- Set B (Multiples of 3 in U):

$$B = \{-6, -3, 0, 3, 6, 9, 12, 15, 18\}$$

- Set C (Integers $\ge -2$ and $< 10$ in U):

$$C = \{-2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9\}$$

#### (A) ii.

To solve this, we can break it down into smaller steps.

Step 1: Find $A \cap B$ (the intersection of A and B)

This set contains elements that are both even numbers AND multiples of 3 (which means they are multiples of 6) within our universal set.

$$A \cap B = \{-6, 0, 6, 12, 18\}$$

Step 2: Evaluate $\overline{(A \cap B)} \cap C$
The expression $\overline{(A \cap B)} \cap C$ asks for the elements that are in the complement of $A \cap B$ (meaning they are not in $A \cap B$) AND are also in $C$.

An easier way to think about this is taking the elements of set $C$ and removing any elements that also appear in $A \cap B$.

- Elements of $C$: $\{-2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9\}$
- Elements to remove (those in $A \cap B$): $0$ and $6$

Final Answer:
Removing $0$ and $6$ from set $C$ gives us the final set:$$\overline{(A \cap B)} \cap C = \{-2, -1, 1, 2, 3, 4, 5, 7, 8, 9\}$$

#### (B)

1. Understand the Power Set $\mathcal{P}(S)$

The power set $\mathcal{P}(S)$ is the set of all subsets of $S = \{1, 2, 3\}$. Let's list all $2^3 = 8$ elements of $\mathcal{P}(S)$:

$$\mathcal{P}(S) = \{\emptyset, \{1\}, \{2\}, \{3\}, \{1, 2\}, \{1, 3\}, \{2, 3\}, \{1, 2, 3\}\}$$

2. Identify the condition for elements of $D$

We are looking for sets $D \subseteq \mathcal{P}(S)$ such that every element of $D$ contains the number 1.This means the only elements from $\mathcal{P}(S)$ allowed to be inside $D$ are the subsets that contain $1$. Let's collect these valid subsets into a collection we can call $V$:

$$V = \{\{1\}, \{1, 2\}, \{1, 3\}, \{1, 2, 3\}\}$$

3. Determine all possible sets $D$

Since $D$ can be any subset of $V$ (including the empty set, because vacuously every element in the empty set contains $1$), $D$ belongs to the power set of $V$.

Since $V$ has 4 elements, there are $2^4 = 16$ possible sets for $D$:

1. $\emptyset$
2. $\{\{1\}\}$
3. $\{\{1, 2\}\}$
4. $\{\{1, 3\}\}$
5. $\{\{1, 2, 3\}\}$
6. $\{\{1\}, \{1, 2\}\}$
7. $\{\{1\}, \{1, 3\}\}$
8. $\{\{1\}, \{1, 2, 3\}\}$
9. $\{\{1, 2\}, \{1, 3\}\}$
10. $\{\{1, 2\}, \{1, 2, 3\}\}$
11. $\{\{1, 3\}, \{1, 2, 3\}\}$
12. $\{\{1\}, \{1, 2\}, \{1, 3\}\}$
13. $\{\{1\}, \{1, 2\}, \{1, 2, 3\}\}$
14. $\{\{1\}, \{1, 3\}, \{1, 2, 3\}\}$
15. $\{\{1, 2\}, \{1, 3\}, \{1, 2, 3\}\}$
16. $\{\{1\}, \{1, 2\}, \{1, 3\}, \{1, 2, 3\}\}$

#### (C)

To prove that $(A \setminus B) \cup (A \cap B \cap C) = A \cap (\overline{B} \cup C)$, we can use the laws of set theory to algebraically transform the Left-Hand Side (LHS) into the Right-Hand Side (RHS).

Proof:

Start with the Left-Hand Side (LHS):

$$\text{LHS} = (A \setminus B) \cup (A \cap B \cap C)$$

Step 1: Rewrite the set difference using intersection and complementRecall the set law $A \setminus B = A \cap \overline{B}$:

$$= (A \cap \overline{B}) \cup (A \cap B \cap C)$$

Step 2: Apply the Distributive Law

Notice that both terms share a common factor of $A \cap$. We can factor it out using the distributive law of intersection over union:$$= A \cap (\overline{B} \cup (B \cap C))$$

Step 3: Apply the Distributive Law again inside the parentheses

Distribute the union ($\cup$) over the intersection ($\cap$) within the main parentheses:

$$= A \cap ((\overline{B} \cup B) \cap (\overline{B} \cup C))$$

Step 4: Use the Complement Law

Since $\overline{B} \cup B$ equals the universal set $U$:

$$= A \cap (U \cap (\overline{B} \cup C))$$

Step 5: Use the Identity Law

Intersecting any set with the universal set $U$ leaves the set unchanged ($U \cap X = X$):$$= A \cap (\overline{B} \cup C)$$

$$= \text{RHS}$$$\therefore (A \setminus B) \cup (A \cap B \cap C) = A \cap (\overline{B} \cup C)$ (Q.E.D.)

#### (D)

To prove that $B = C$, we must show that $B \subseteq C$ and $C \subseteq B$. Recall that the symmetric difference $X \oplus Y$ contains elements that are in $X$ or $Y$, but not in both.

Step 1: Prove $B \subseteq C$

Let $x$ be an arbitrary element in $B$ ($x \in B$). We must show that $x$ is also in $C$. There are two possible cases to consider regarding set $A$:

- Case 1: Suppose $x \notin A$
  - Since $x \in B$ and $x \notin A$, $x$ is in the symmetric difference of $A$ and $B$. That is, $x \in A \oplus B$.
  - We are given that $A \oplus B = A \oplus C$, so it must also be true that $x \in A \oplus C$.
  - The set $A \oplus C$ consists of elements strictly in $A$ or strictly in $C$. Since we assumed $x \notin A$, the only way for $x \in A \oplus C$ to be true is if $x \in C$.
- Case 2: Suppose $x \in A$
  - Since $x \in B$ and $x \in A$, $x$ is in their intersection ($A \cap B$). Therefore, $x$ is excluded from their symmetric difference. That is, $x \notin A \oplus B$.
  - Because $A \oplus B = A \oplus C$, it must correspondingly be true that $x \notin A \oplus C$.
  - We know $x \in A$. If $x$ were not in $C$, then $x$ would belong strictly to $A$, meaning it would be in $A \oplus C$. But we just established $x \notin A \oplus C$. To avoid this contradiction, $x$ cannot be absent from $C$. Therefore, $x \in C$ (which correctly puts it in $A \cap C$, excluding it from the symmetric difference).

Since $x \in C$ in both possible cases, we have proven that every element of $B$ is an element of $C$. Therefore, $B \subseteq C$.

Step 2: Prove $C \subseteq B$
The premise $A \oplus B = A \oplus C$ is completely symmetric with respect to $B$ and $C$.

- If we let $y \in C$ and run through the exact same two cases as above (swapping the roles of $B$ and $C$), we will deduce that $y \in B$.

- Therefore, $C \subseteq B$.Conclusion:Since $B \subseteq C$ and $C \subseteq B$, it follows that $B = C$. (Q.E.D.)

Conclusion:

Since $B \subseteq C$ and $C \subseteq B$, it follows that $B = C$

### Question 2

#### (A)

A function $f: \mathbb{R} \to \mathbb{R}$ must be defined for all real numbers. If there are any values of $x$ that result in an undefined output (like division by zero, negative numbers under an even root, or non-positive arguments for a logarithm), then it does not define a function from $\mathbb{R}$ to $\mathbb{R}$.

i. $f(x) = \sqrt{x^2 - 5x + 6}$

- Is it a function from $\mathbb{R} \to \mathbb{R}$? No.
- Finding the domain: For the square root to yield a real number, the expression inside must be non-negative:

$$x^2 - 5x + 6 \ge 0$$

Factor the quadratic:

$$(x - 2)(x - 3) \ge 0$$

The roots are $x = 2$ and $x = 3$. Testing the intervals $(-\infty, 2]$, $[2, 3]$, and $[3, \infty)$ shows that the inequality holds true outside the interval $(2, 3)$.

- Largest possible real domain: $(-\infty, 2] \cup [3, \infty)$

ii. $g(x) = \frac{\sqrt{x + 2}}{x^2 - 1}$

- Is it a function from $\mathbb{R} \to \mathbb{R}$? No.
- Finding the domain: There are two restrictions here:

  1. The expression under the square root must be non-negative: $x + 2 \ge 0 \Rightarrow x \ge -2$.
  2. The denominator cannot be zero: $x^2 - 1 \neq 0 \Rightarrow (x - 1)(x + 1) \neq 0 \Rightarrow x \neq 1 \text{ and } x \neq -1$.Combining these restrictions, $x$ must be greater than or equal to $-2$, but cannot equal $-1$ or $1$.

- Largest possible real domain: $[-2, -1) \cup (-1, 1) \cup (1, \infty)$

iii. $h(x) = \log_2(10 - x^2)$

- Is it a function from $\mathbb{R} \to \mathbb{R}$? No.
- Finding the domain: The argument of a logarithm must be strictly positive:

$$10 - x^2 > 0$$$$x^2 < 10$$

Taking the square root of both sides gives $-\sqrt{10} < x < \sqrt{10}$.

- Largest possible real domain: $(-\sqrt{10}, \sqrt{10})$

#### (B)

Given:
$f(x) = x^2 + kx$
$g(x) = x + 1$

We need to find $x$ such that $(f \circ g)(x) = (g \circ f)(x)$. Let's find both composite functions first.

Step 1: Find $(f \circ g)(x)$

$$(f \circ g)(x) = f(g(x)) = f(x + 1)$$

Substitute $(x + 1)$ into $f(x)$:
$$f(x + 1) = (x + 1)^2 + k(x + 1)$$$$= (x^2 + 2x + 1) + (kx + k)$$$$= x^2 + (2 + k)x + 1 + k$$Step 2: Find $(g \circ f)(x)$$$(g \circ f)(x) = g(f(x)) = g(x^2 + kx)$$Substitute $(x^2 + kx)$ into $g(x)$:$$g(x^2 + kx) = (x^2 + kx) + 1$$$$= x^2 + kx + 1$$Step 3: Set them equal and solve for $x$$$x^2 + (2 + k)x + 1 + k = x^2 + kx + 1$$Subtract $x^2$ and $1$ from both sides:$$(2 + k)x + k = kx$$Distribute the $x$ on the left side:$$2x + kx + k = kx$$Subtract $kx$ from both sides:$$2x + k = 0$$Solve for $x$:$$2x = -k$$$$x = -\frac{k}{2}$$

#### (C)

Equation:$$\log_3(x - 1) + \log_3(x - 3) = 2$$

Step 1: Note the domain restrictions
For the logarithms to be defined, their arguments must be strictly positive:

- $x - 1 > 0 \Rightarrow x > 1$
- $x - 3 > 0 \Rightarrow x > 3$

The intersection of these restrictions is $x > 3$. Any solution we find must satisfy this condition.

Step 2: Apply logarithm rules

Use the product rule for logarithms ($\log_b(m) + \log_b(n) = \log_b(m \cdot n)$):$$\log_3((x - 1)(x - 3)) = 2$$

Step 3: Convert to exponential form$$(x - 1)(x - 3) = 3^2$$$$x^2 - 3x - x + 3 = 9$$$$x^2 - 4x + 3 = 9$$

Step 4: Solve the quadratic equation

Subtract 9 from both sides to set it to zero:$$x^2 - 4x - 6 = 0$$Since this doesn't factor neatly, use the quadratic formula $x = \frac{-b \pm \sqrt{b^2 - 4ac}}{2a}$:$$x = \frac{-(-4) \pm \sqrt{(-4)^2 - 4(1)(-6)}}{2(1)}$$$$x = \frac{4 \pm \sqrt{16 + 24}}{2}$$$$x = \frac{4 \pm \sqrt{40}}{2}$$Simplify the radical ($\sqrt{40} = \sqrt{4 \cdot 10} = 2\sqrt{10}$):$$x = \frac{4 \pm 2\sqrt{10}}{2}$$$$x = 2 \pm \sqrt{10}$$

Step 5: Check against domain restrictions
We have two potential solutions:

1. $x = 2 + \sqrt{10} \approx 2 + 3.16 = 5.16$ (This is greater than 3, so it is a valid solution).
2. $x = 2 - \sqrt{10} \approx 2 - 3.16 = -1.16$ (This is less than 3, so we must reject it).

Final Answer:$$x = 2 + \sqrt{10}$$

#### (D)

Given the function:

$$f : \mathbb{R} \setminus \{1\} \to \mathbb{R} \setminus \{2\} \quad \text{defined by} \quad f(x) = \frac{2x + 3}{x - 1}$$

i. Prove that $f$ is one-to-one (injective)

To prove $f$ is one-to-one, we must show that if $f(a) = f(b)$, then $a = b$ for any $a, b$ in the domain.

Assume $f(a) = f(b)$:

$$\frac{2a + 3}{a - 1} = \frac{2b + 3}{b - 1}$$

Cross-multiply to clear the fractions:

$$(2a + 3)(b - 1) = (2b + 3)(a - 1)$$

Expand both sides:

$$2ab - 2a + 3b - 3 = 2ab - 2b + 3a - 3$$

Subtract $2ab$ and add $3$ to both sides to simplify:

$$-2a + 3b = -2b + 3a$$

Rearrange the terms by grouping $a$'s on one side and $b$'s on the other:

$$3b + 2b = 3a + 2a$$$$5b = 5a$$

Divide by 5:$$b = a \quad \implies \quad a = b$$

Since $f(a) = f(b)$ implies $a = b$, $f$ is one-to-one.

ii. Prove that $f$ is onto $\mathbb{R} \setminus \{2\}$ (surjective)

To prove $f$ is onto, we must show that for every element $y$ in the codomain ($\mathbb{R} \setminus \{2\}$), there exists an element $x$ in the domain ($\mathbb{R} \setminus \{1\}$) such that $f(x) = y$.

Set $f(x) = y$ and solve for $x$:

$$y = \frac{2x + 3}{x - 1}$$

Multiply both sides by $(x - 1)$:

$$y(x - 1) = 2x + 3$$

$$yx - y = 2x + 3$$

Move all terms containing $x$ to one side:$$yx - 2x = y + 3$$

Factor out $x$:$$x(y - 2) = y + 3$$

Divide by $(y - 2)$:

$$x = \frac{y + 3}{y - 2}$$

- Check restrictions: Since $y \in \mathbb{R} \setminus \{2\}$, we know $y \neq 2$, so the denominator $(y - 2) \neq 0$ and $x$ is always a well-defined real number.
- Verify $x \neq 1$: If $x = 1$, then $\frac{y + 3}{y - 2} = 1 \implies y + 3 = y - 2 \implies 3 = -2$, which is impossible. Thus, $x$ is strictly in the domain $\mathbb{R} \setminus \{1\}$.

Since an $x$ can be found for every $y$, $f$ is onto.

iii. Find $f^{-1}(x)$

From the algebraic work done in part (ii), we already solved for the independent variable. Swapping $y$ back to $x$ gives the inverse function formula:$$f^{-1}(x) = \frac{x + 3}{x - 2}$$

#### (E)

Given that $f : A \to B$ and $g : B \to C$ are bijective functions, we want to prove that:

$$(g \circ f)^{-1} = f^{-1} \circ g^{-1}$$

Proof:

By definition, the inverse of a composite function $(g \circ f)$ is the unique function that, when composed with $(g \circ f)$ from either side, yields the identity function. Let's show that composing $(g \circ f)$ with $(f^{-1} \circ g^{-1})$ results in the identity function.

- Check composition from the left:

$$((f^{-1} \circ g^{-1}) \circ (g \circ f))(x) = (f^{-1} \circ g^{-1})(g(f(x)))$$
By definition of composition:
$$= f^{-1}\Big(g^{-1}\big(g(f(x))\big)\Big)$$Since $g^{-1}(g(y)) = y$ for any element:$$= f^{-1}(f(x))$$Since $f^{-1}(f(x)) = x$:$$= x$$

- Check composition from the right:$$((g \circ f) \circ (f^{-1} \circ g^{-1}))(x) = (g \circ f)(f^{-1}(g^{-1}(x)))$$

By definition of composition:$$= g\Big(f\big(f^{-1}(g^{-1}(x))\big)\Big)$$Since $f(f^{-1}(y)) = y$:$$= g(g^{-1}(x))$$Since $g(g^{-1}(x)) = x$:$$= x$$

### Question 3

#### (A)

i. Construct a truth table for $((p \to q) \land (q \to r)) \to (p \to r)$

This expression has three propositions ($p, q, r$), so the truth table requires $2^3 = 8$ rows.p

|  p  |  q  |  r  | p->r |
| :-: | :-: | :-: | :--: |
|  T  |  T  |  T  |  T   |
|  T  |  T  |  F  |  T   |
|  T  |  F  |  T  |  F   |
|  T  |  F  |  F  |  F   |
|  F  |  T  |  T  |  T   |
|  F  |  T  |  F  |  T   |
|  F  |  F  |  T  |  T   |
|  F  |  F  |  F  |  T   |

ii. Construct a truth table for $(p \oplus q) \leftrightarrow (\neg p \oplus \neg q)$

This expression has two propositions ($p, q$), requiring $2^2 = 4$ rows. Recall that $\oplus$ (XOR) is true only when exactly one of its operands is true.

|  p  |  q  |  r  | p->r |
| :-: | :-: | :-: | :--: |
|  T  |  T  |  F  |  F   |
|  T  |  F  |  F  |  T   |
|  F  |  T  |  T  |  F   |
|  F  |  F  |  T  |  T   |

iii. Classify the propositions in parts i and ii

Both propositions evaluate to True (T) for every possible combination of truth values of their constituent variables. Therefore, both are tautologies.

#### (B)

Given: $p = T$, $q = F$, $r = T$, $s = F$

Evaluate: $((p \to q) \lor (r \land \neg s)) \land ((q \lor s) \to (\neg p \lor r))$

Let's break this down into smaller pieces and substitute the truth values:

1. Left main parenthesis: $((p \to q) \lor (r \land \neg s))$

- $(p \to q) \equiv (T \to F) \equiv F$
- $(r \land \neg s) \equiv (T \land \neg F) \equiv (T \land T) \equiv T$
- Combining them: $F \lor T \equiv \mathbf{T}$

2. Right main parenthesis: $((q \lor s) \to (\neg p \lor r))$

- $(q \lor s) \equiv (F \lor F) \equiv F$
- $(\neg p \lor r) \equiv (\neg T \lor T) \equiv (F \lor T) \equiv T$
  -Combining them: $F \to T \equiv \mathbf{T}$

3. Final Evaluation:

- (Left part) $\land$ (Right part)$
- T \land T \equiv \mathbf{T}$

The final truth value of the expression is True (T).

#### (C)

Given propositions:

- $p$: "The file is encrypted.
- "$q$: "The user has administrator permission.
- "$r$: "The file can be opened."

i. "The file can be opened only if it is not encrypted or the user has administrator permission."

The phrase "A only if B" translates to $A \to B$.

- A: The file can be opened ($r$)
- B: It is not encrypted ($\neg p$) or ($\lor$) the user has administrator permission ($q$)
- Translation: $r \to (\neg p \lor q)$

ii. "If the file is encrypted and the user does not have administrator permission, then the file cannot be opened."

The phrase "If A then B" translates to $A \to B$.

- sA: The file is encrypted ($p$) and ($\land$) the user does not have administrator permission ($\neg q$)
- B: The file cannot be opened ($\neg r$)
- Translation: $(p \land \neg q) \to \neg r$

iii. "The file can be opened if and only if either it is not encrypted or the user has administrator permission."The phrase "A if and only if B" translates to $A \leftrightarrow B$.

- A: The file can be opened ($r$)
- B: It is not encrypted ($\neg p$) or ($\lor$) the user has administrator permission ($q$)
- Translation: $r \leftrightarrow (\neg p \lor q)$

#### (D)

For any conditional statement $P \to Q$:

- Converse: $Q \to P$ (Swap the hypothesis and conclusion)
- Inverse: $\neg P \to \neg Q$ (Negate both sides)
- Contrapositive: $\neg Q \to \neg P$ (Swap and negate both sides)

Let's identify the pieces of our given conditional statement $((p \lor q) \land \neg r) \to (s \lor \neg p)$:

- Hypothesis ($P$): $((p \lor q) \land \neg r)$
- Conclusion ($Q$): $(s \lor \neg p)$

Using these definitions, we find:

- Converse:$$(s \lor \neg p) \to ((p \lor q) \land \neg r)$$
- Inverse:$$\neg((p \lor q) \land \neg r) \to \neg(s \lor \neg p)$$
- Contrapositive:$$\neg(s \lor \neg p) \to \neg((p \lor q) \land \neg r)$$

#### (E)

To prove that $p \to (q \land r) \equiv (p \to q) \land (p \to r)$, we will apply logical equivalences step-by-step to transform the Left-Hand Side (LHS) into the Right-Hand Side (RHS).

Proof:

Start with the Left-Hand Side (LHS):

$$\text{LHS} \equiv p \to (q \land r)$$

Step 1: Apply the Conditional IdentityRecall the rule $X \to Y \equiv \neg X \lor Y$:$$\equiv \neg p \lor (q \land r)$$

Step 2: Apply the Distributive LawDistribute the OR ($\lor$) over the AND ($\land$):$$\equiv (\neg p \lor q) \land (\neg p \lor r)$$

Step 3: Apply the Conditional Identity in reverseConvert both parenthetical parts back into conditional statements using $X \to Y \equiv \neg X \lor Y$:$$\equiv (p \to q) \land (p \to r)$$$$\equiv \text{RHS}$$

### Question 4

#### (A)

Predicate Definitions
Since the domain is all people and all assignments, we must first define predicates to identify the types of objects and their properties:

- $S(x)$: $x$ is a student.
- $A(x)$: $x$ is an assignment.
- $Sub(x, y)$: $x$ submits $y$.
- $Pass(x)$: $x$ passes the module.
- $Late(x, y)$: $x$ submitted $y$ late.
- $Full(x, y)$: $x$ received full marks on $y$.

Part (a)(i): Translations

1. Every student who submits every assignment passes the module.
   To translate "Every student...", we use a universal quantifier ($\forall$) and an implication. The condition is being a student AND submitting every assignment.

   - "x submits every assignment" translates to: $\forall y \ (A(y) \rightarrow Sub(x, y))$
   - Translation:$$\forall x \ (S(x) \land (\forall y \ (A(y) \rightarrow Sub(x, y))) \rightarrow Pass(x))$$

2. Some students submitted at least one assignment late.
   "Some" indicates an existential quantifier ($\exists$).

   - "x submitted at least one assignment late" translates to: $\exists y \ (A(y) \land Late(x, y))$
   - Translation:$$\exists x \ (S(x) \land \exists y \ (A(y) \land Late(x, y)))$$

3. No student who submitted an assignment late received full marks on every assignment.The structure "No X does Y" translates to $\forall x \ (X(x) \rightarrow \neg Y(x))$.

- $X(x)$ [Student who submitted an assignment late]: $S(x) \land \exists y \ (A(y) \land Late(x, y))$

- $Y(x)$ [Received full marks on every assignment]: $\forall z \ (A(z) \rightarrow Full(x, z))$

- Translation:$$\forall x \ ((S(x) \land \exists y \ (A(y) \land Late(x, y))) \rightarrow \neg (\forall z \ (A(z) \rightarrow Full(x, z))))$$

Part (a)(ii): Negations

To negate these statements and push the negations inward, recall the rules for negating quantifiers and logical connectives (De Morgan's Laws and conditional equivalence: $\neg(P \rightarrow Q) \equiv P \land \neg Q$).

1. Negating Statement 1:

- Original:$\forall x \ (S(x) \land (\forall y \ (A(y) \rightarrow Sub(x, y))) \rightarrow Pass(x))$

- Change $\forall x$ to $\exists x$ and negate the implication inside.

- Final Answer:$$\exists x \ (S(x) \land (\forall y \ (A(y) \rightarrow Sub(x, y))) \land \neg Pass(x))$$

2:Negating Statement 2:

- Original: $\exists x \ (S(x) \land \exists y \ (A(y) \land Late(x, y)))$
- Change quantifiers and apply De Morgan's Law to the ANDs.
- $\forall x \ \neg (S(x) \land \exists y \ (A(y) \land Late(x, y)))$
- $\forall x \ (\neg S(x) \lor \forall y \ \neg (A(y) \land Late(x, y)))$
- Final Answer:$$\forall x \ (\neg S(x) \lor \forall y \ (\neg A(y) \lor \neg Late(x, y)))$$

3. Negating Statement 3:

- Original: $\forall x \ ((S(x) \land \exists y \ (A(y) \land Late(x, y))) \rightarrow \neg (\forall z \ (A(z) \rightarrow Full(x, z))))$
- Change $\forall x$ to $\exists x$ and negate the implication ($P \rightarrow \neg Q$ becomes $P \land Q$).
- Final Answer:
  $$\exists x \ (S(x) \land \exists y \ (A(y) \land Late(x, y)) \land \forall z \ (A(z) \rightarrow Full(x, z)))$$

#### (B)

#### (C)
