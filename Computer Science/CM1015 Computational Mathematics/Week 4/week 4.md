## Week 4

### 4.1 Series

<details>

  <summary>1. Sequences vs. Series</summary>

  <br>

- A sequence is an ordered list of numbers (e.g., the natural numbers: $1, 2, 3, \ldots$).

- A series is the result of adding all the elements of a sequence together.

</details>

  <br>

<details>

  <summary>2. Defining the Sum of a Series</summary>

  <br>

- The sum of a series can be defined recursively:The sum of the first $n$ terms ($S_n$) is equal to the sum of the first $n-1$ terms ($S_{n-1}$) plus the $n^{th}$ term ($U_n$).
- For the natural numbers sequence ($U_n = n$): $S_n = S_{n-1} + n$.
- The recursion must be grounded; for the natural numbers, $S_1 = 1$.

</details>

  <br>

<details>

  <summary>3. Sigma Notation (∑)</summary>

  <br>

The Sigma notation ($\Sigma$) is introduced as a shorthand way to represent the sum of a series.

- The expression $\sum_{k=1}^{n} k$ represents the sum of the first $n$ natural numbers: $1 + 2 + 3 + \ldots + (n-1) + n$.
- Here, $k$ is a dummy variable that counts from the lower limit (1) up to the upper limit ($n$).

</details>

  <br>

<details>

  <summary>4. Formula for the Sum of the First $n$ Natural Numbers</summary>

  <br>

The lecture presents an elegant proof to derive the formula for the sum of the first $n$ natural numbers ($S_n$):

$$\sum_{k=1}^{n} k = S_n = \frac{1}{2}n(n+1) \tag{1}$$

Proof Steps

1. Write the sum $S_n$ forwards: $S_n = 1 + 2 + 3 + \ldots + (n-2) + (n-1) + n$
2. Write the sum $S_n$ backwards: $S_n = n + (n-1) + (n-2) + \ldots + 3 + 2 + 1$
3. Add the two expressions term-by-term: $2S_n$$

- 1 + n = n+1$$
- 2 + (n-1) = n+1$$
- 3 + (n-2) = n+1$
- ... all $n$ pairs sum to $(n+1)$.

4. The result of the sum is: $2S_n = n(n+1)$
5. Divide by 2 to get the formula: $S_n = \frac{1}{2}n(n+1)$

Example Calculation

To calculate the sum of the first 100 natural numbers, set

$n=100$:$$S\_{100} = \frac{1}{2}(100)(100+1) = 50 \times 101 = \mathbf{5050}$$

</details>

  <br>

### 4.2 Proof by induction

The technique is used to prove the formula for the sum of the first $n$ natural numbers.

<details>

  <summary>📐 Proof by Induction</summary>

  <br>

Proof by induction is a powerful method used to prove that a statement or formula is true for all natural numbers (or all integers greater than some starting point). It operates in three main steps, like knocking over a domino chain:

- Base Case: Show the statement is true for the first instance (e.g., $n=1$).

- Inductive Hypothesis: Assume the statement is true for an arbitrary integer $n=k$.

- Inductive Step: Prove that if the statement is true for $n=k$ (the hypothesis), it must also be true for the very next integer, $n=k+1$.

If all three steps are successful, the proof is complete because:

- It's true for 1 (Base Case).
- Since it's true for 1, it must be true for 2 (Step).
- Since it's true for 2, it must be true for 3 (Step), and so on, confirming it's true for all $n$.

</details>

  <br>

<details>

  <summary>Proof of the Sum of the First n Natural Numbers by Induction</summary>

  <br>

The formula to be proven is:

$$S_n = \sum_{i=1}^{n} i = \frac{1}{2}n(n+1)$$

Step 1: Base Case (Show true for $n=1$)

We check if the formula holds for the sum of the first single term, $S_1$.

- Actual Sum: $S_1 = 1$

- Formula Result: Substitute $n=1$ into the formula:

$$ S_1 = \frac{1}{2}(1)(1+1) = \frac{1}{2}(1)(2) = 1$$

- Conclusion: Since $S_1 = 1$, the statement is true for $n=1$.

Step 2: Inductive Hypothesis (Assume true for $n=k$)

We assume the formula holds true for some arbitrary integer $k$:$$S_k = \frac{1}{2}k(k+1) \quad (\text{Assumption})$$

Step 3: Inductive Step (Prove true for $n=k+1$)

We must now prove that $S*{k+1}$ equals the formula with $(k+1)$ substituted for $n$:$$S_{k+1} = \frac{1}{2}(k+1)((k+1)+1) = \frac{1}{2}(k+1)(k+2) \quad (\text{Target})$$

We start with the definition of $S_{k+1}$ using the Inductive Hypothesis ($S_k$):$$S_{k+1} = S_k + (k+1)$$

Substitute the assumed formula for $S_k$:

$$S_{k+1} = \frac{1}{2}k(k+1) + (k+1)$$

To combine the terms, we factor out the common term $(k+1)$ and find a common denominator for the second term:

$$S_{k+1} = \frac{1}{2}k(k+1) + \frac{2}{2}(k+1)$$

Factor out $\frac{1}{2}(k+1)$:

$$S_{k+1} = \frac{1}{2}(k+1) [k + 2]$$

This result, $\frac{1}{2}(k+1)(k+2)$, exactly matches the Target formula.

`Conclusion`

Since the formula is true for $n=1$ (Base Case) and the truth for $n=k$ implies the truth for $n=k+1$ (Inductive Step), the formula $S_n = \frac{1}{2}n(n+1)$ is proven by induction for all natural numbers $n \ge 1$.

</details>

  <br>

### 4.3 Formula for summing geometric and arithmetic sequences

<details>

  <summary>1. Sum of an Arithmetic Progression (AP)</summary>

  <br>

The formula for the sum of the first $n$ terms of an AP with a first term $a$ and a common difference $d$ is:

$$S_n = \frac{1}{2}n[2a + (n-1)d]$$

Proof by Induction

The lecture uses mathematical induction to prove this formula.

1. Base Case ($n=1$): Show the formula is true for $S_1$.

   - Substituting $n=1$ into the formula:

   $$S_1 = \frac{1}{2}(1)[2a + (1-1)d] = \frac{1}{2}(2a) = a$$

   - Since $S_1$ is the first term, $a$, the formula is true for $n=1$.

2. Inductive Hypothesis (Assume true for $n=k$):

Assume the formula holds for an arbitrary integer $k$:$$S_k = \frac{1}{2}k[2a + (k-1)d] \quad (\text{Assumption})$$

3. Inductive Step (Prove true for $n=k+1$): We must show that $S_{k+1}$ matches the formula with $n=k+1$.$

   - S\*{k+1}$ is defined as the sum of the first $k$ terms plus the $(k+1)^{th}$ term:

   $$S*{k+1} = S*k + U*{k+1}$$

   - Recall the formula for the $(k+1)^{th}$ term of an AP is $U_{k+1} = a + (k+1-1)d = a + kd$.

   - Substitute $S_k$ and $U_{k+1}$:$$

   S\*{k+1} = \frac{1}{2}k[2a + (k-1)d] + (a + kd)$$

   - Algebraic Simplification: By taking out $\frac{1}{2}$ from the entire expression and manipulating the terms:

   $$S*{k+1} = \frac{1}{2} \left[ k(2a + (k-1)d) + 2(a + kd) \right]$$

   $$S*{k+1} = \frac{1}{2} \left[ 2ak + k^2d - kd + 2a + 2kd \right]$$

   $$S*{k+1} = \frac{1}{2} \left[ 2a(k+1) + d(k^2 + k) \right]$$

   $$S*{k+1} = \frac{1}{2} \left[ 2a(k+1) + d \cdot k(k+1) \right]$$

- Factor out the common term $(k+1)$:

$$S*{k+1} = \frac{1}{2}(k+1)[2a + kd]$$

- This matches the required formula for $S_{k+1}$, which is

$\frac{1}{2}(k+1)[2a + ((k+1)-1)d]$.

- Conclusion: The formula is proven by induction.

- (Note: The general algebraic proof for the AP sum involves writing the series forwards and backwards and adding the terms, similar to the proof for the sum of natural numbers, as hinted in the lecture).

</details>

  <br>
