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
