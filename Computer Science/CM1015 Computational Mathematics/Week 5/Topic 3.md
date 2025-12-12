### Topic 3

1. Defining Congruence Modulo an Integer

The concept of congruence (or equivalence) modulo an integer $k$ (the modulus) is central to modular arithmetic.

Two integers, $a$ and $b$, are defined as congruent modulo $k$ if they satisfy the following condition:

General Definition (Difference as a Multiple):

- $a$ and $b$ are congruent modulo $k$ if their difference $(a - b)$ is a multiple of $k$.

- This is expressed as: $a - b = m \cdot k$, where $m$ is some integer.

Alternative Definition (Same Remainder):

- $a$ and $b$ are congruent modulo $k$ if they have the same remainder ($r$) when divided by $k$.

- This means $a = n \cdot k + r$ and $b = m \cdot k + r$.

Notation:

- Congruence is written as $a \equiv b \pmod{k}$.

2. Classifying Two Integers as Congruent

To classify two integers as congruent modulo $k$, you check the remainder property or the difference property.

- Example (Mod 12): To show $34$ and $10$ are congruent $\pmod{12}$:

  - Check Remainder: $34 = (12 \times 2) + \mathbf{10}$ and $10 = (12 \times 0) + \mathbf{10}$. Since the remainders are the same ($\mathbf{10}$), they are congruent.

- Handling Negative Integers: To find the equivalent positive number for a negative integer (e.g., $-17$) $\pmod{12}$, you must find the number in the set $\{0, 1, \ldots, 11\}$.

  - You find the nearest multiple of 12 below $-17$ (which is $-24$) and determine the positive remainder: $-24 + \mathbf{7} = -17$.

  - Thus, $-17 \equiv \mathbf{7} \pmod{12}$.
