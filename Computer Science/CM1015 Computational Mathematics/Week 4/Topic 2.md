### Topic 2: Sequences and series

1. The Notion of a Number Sequence and Convergence/Divergence

- Sequence: A sequence is an ordered list of numbers.
  - Example: The natural numbers are a sequence: $1, 2, 3, \ldots$.
- Convergence/Divergence: While not explicitly detailed in the sources, the concept relates to the behavior of the terms ($U_n$) as $n$ approaches infinity:

  - A sequence converges if its terms approach a single finite limit.
  - A sequence diverges if its terms do not approach a single finite limit (e.g., they grow infinitely large or oscillate).

2. Recursion and Induction in Defining Sequences

A. Recursion

A sequence can be defined recursively, where each term is defined by the preceding term(s).

This definition must be grounded by stating the initial term(s).

- General Recursive Formula for Sums ($S_n$): The sum of the first $n$ terms of a sequence is defined recursively as: $S_n = S_{n-1} + U_n$.

B. Arithmetic Sequences (Arithmetic Progressions - AP)

An AP is a sequence where the difference between consecutive terms ($d$) is constant (the common difference).

- Sum Formula Proof: The formula for the sum of the first $n$ terms of an AP, $S_n$, can be proven using mathematical induction.

$$S_n = \frac{1}{2}n[2a + (n-1)d]$$

- $a$ is the first term.
- $d$ is the common difference.C.

Geometric Sequences (Geometric Progressions - GP)

A GP is a sequence where the ratio between consecutive terms ($r$) is constant (the common ratio).

- Sum Formula Proof: The formula for the sum of the first $n$ terms of a GP, $S_n$, can be proven using an algebraic method.

$$S_n = \frac{a(1-r^n)}{1-r}, \quad r \neq 1$$

- a$ is the first term.
- $r$ is the common ratio.

3. Notion of Series and SummationSeries:

- A series is the result of adding all the elements of a sequence.

- Sigma Notation ($\Sigma$): This notation is a shorthand used to represent the sum of a series.

  - Example: $\sum_{k=1}^{n} k = 1 + 2 + 3 + \ldots + n$.Summation Formulas for Key Series

|   Series Type   | Sequence Formula ($U_n$) |          Sum Formula ($S_n$)           |     Proof Method      |
| :-------------: | :----------------------: | :------------------------------------: | :-------------------: |
| Natural Numbers |        $U_n = n$         | $\sum_{k=1}^{n} k = \frac{1}{2}n(n+1)$ | Algebraic / Induction |
|   Arithmetic    |    $U_n = a + (n-1)d$    |   $S_n = \frac{1}{2}n[2a + (n-1)d]$    |       Induction       |
|    Geometric    |     $U_n = ar^{n-1}$     |      $S_n = \frac{a(1-r^n)}{1-r}$      |       Algebraic       |
