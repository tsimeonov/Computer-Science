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

3. Perform Operations with Congruent Numbers

A key property of modular arithmetic is that you can perform the modular reduction (finding the remainder) before or after performing the arithmetic operation, and the result will be the same.

General Properties:If $a \equiv a' \pmod{k}$ and $b \equiv b' \pmod{k}$, then the following hold:

- Addition: $(a + b) \equiv (a' + b') \pmod{k}$

- Subtraction: $(a - b) \equiv (a' - b') \pmod{k}$

- Multiplication: $(a \times b) \equiv (a' \times b') \pmod{k}$

|   Operation    | Example ($\pmod{12}$) | Modular Reduction First |         Result         |
| :------------: | :-------------------: | :---------------------: | :--------------------: |
|    Addition    |       $14 + 28$       |       $2 + 4 = 6$       | $\mathbf{6} \pmod{12}$ |
| Multiplication |    $14 \times 28$     |    $2 \times 4 = 8$     | $\mathbf{8} \pmod{12}$ |

Inverses:

- Additive Inverse: The additive inverse of $n$ (written $n^{-1}$) is a number such that $n + n^{-1} \equiv 0 \pmod{k}$ (the additive identity).

  - Example: The additive inverse of 7 is 12 $\pmod{19}$, because $7 + 12 = 19 \equiv 0 \pmod{19}$.

- Multiplicative Inverse: The multiplicative inverse of $n$ is a number such that $n \times n^{-1} \equiv 1 \pmod{k}$ (the multiplicative identity).

  - Multiplicative inverses do not always exist.

  - Example: The multiplicative inverse of 2 is 4 $\pmod{7}$, because $2 \times 4 = 8 \equiv 1 \pmod{7}$.
