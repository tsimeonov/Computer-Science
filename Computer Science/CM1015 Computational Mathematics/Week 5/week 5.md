### 5.1 Introduction to modular numbers using the clock

<details>

  <summary>🕒 Introduction to Modular Arithmetic</summary>

  <br>

Modular arithmetic, or clock arithmetic, is a system where numbers wrap around upon reaching a certain value.

Clock Analogy (Modulus 12)

- Wrapping Around: If the current time is 10:00, adding 6 hours does not result in 16:00; instead, the time wraps around the 12-hour cycle to 4:00.

- Formal Set (Mod 12): In formal modular arithmetic, the number 12 on the clock is replaced by 0. The only allowed numbers in mod 12 are the finite set from 0 to 11. You cannot have negative numbers or numbers greater than 11.

`Equivalence and Congruence`

Numbers that end up at the same position after wrapping around the modulus are said to be equivalent (or congruent) modulo $n$.

For example, 10, 22, and 34 are all the same on the clock. Therefore, they are equivalent $\pmod{12}$.$

- 10 + 12 = 22
- 10 + 24 = 34

`Defining Equivalence`

Equivalence can be understood in two ways:

1. Remainders: Two numbers are equivalent $\pmod{12}$ if they leave the same remainder when divided by 12.

- $10 = (12 \times 0) + \mathbf{10}$
- $22 = (12 \times 1) + \mathbf{10}$
- $34 = (12 \times 2) + \mathbf{10}$

2. Difference as a Multiple: Two numbers are equivalent $\pmod{12}$ if their difference is a multiple of 12.

- $22 - 10 = 12$ (a multiple of 12)
- $34 - 10 = 24$ (a multiple of 12)

Modular arithmetic ensures that all resulting numbers remain within a specific finite set.

</details>

  <br>

### 5.2 Introduction to modular arithmetic

<details>

  <summary>1. Formal Definition of Modular Equivalence</summary>

  <br>

The lecture uses the clock analogy (Mod 12) to derive the formal mathematical definition of modular equivalence.

`Equivalence by Remainder`

Two integers, $a$ and $b$, are equivalent modulo a base $k$ (written $a \equiv b \pmod{k}$) if and only if they have the same remainder when divided by $k$.

This means we can write both numbers in terms of a multiple of $k$ plus the same remainder $r$:

- $a = n \cdot k + r$
- $b = m \cdot k + r$where $n$ and $m$ are integers, and $r$ is the remainder.
- Example ($\pmod{12}$): $34$ and $10$ are equivalent $\pmod{12}$ because:
  - $34 = 2 \times 12 + \mathbf{10}$
  - $10 = 0 \times 12 + \mathbf{10}$
  - The remainder $r$ is 10 in both cases.

`The General Definition (Difference)`

The most common and general definition of modular equivalence is that $a$ and $b$ are equivalent modulo $k$ if their difference $(a - b)$ is a multiple of $k$.$

$a \equiv b \pmod{k} \iff (a - b) = m \cdot k$$

where $m$ is some integer.

</details>

  <br>

<details>

  <summary>2. Handling Negative Numbers</summary>

  <br>

When calculating the equivalent positive number for a negative integer $\pmod{k}$, the result must be a number within the allowed set, which is typically $0$ to $k-1$.

The strategy is to find the largest negative multiple of the modulus $k$ that is less than the negative number, and then find the remainder needed to reach the number.

- Example 1: Find $-17 \pmod{12}$

  1.  Go to the nearest multiple of 12 below $-17$: $-2 \times 12 = -24$.

  2.  Determine what must be added to $-24$ to get $-17$: $-24 + \mathbf{7} = -17$.

  3.  Therefore, $-17$ is equivalent to 7 $\pmod{12}$.

- Example 2: Find $-39 \pmod{12}$

  1. Go to the nearest multiple of 12 below $-39$: $-4 \times 12 = -48$.

  2. Determine what must be added to $-48$ to get $-39$: $-48 + \mathbf{9} = -39$.

  3. Therefore, $-39$ is equivalent to 9 $\pmod{12}$.

</details>

  <br>

<details>

  <summary>3. Visualizing Equivalence</summary>

  <br>

Equivalence can be visualized on a number line . For $a \equiv b \pmod{k}$, all equivalent numbers form a sequence separated by $k$ units.

- Example ($\pmod{3}$): The numbers equivalent to $-1 \pmod{3}$ are those that differ by a multiple of 3.

  - $\ldots, -7, -4, -1, \mathbf{2}, 5, 8, \ldots$

  - The difference between any two circled numbers (e.g., $5 - (-4) = 9$) is a multiple of 3.

- The next lecture will cover operations within modular arithmetic, specifically addition, multiplication, and inverses.

</details>

  <br>
