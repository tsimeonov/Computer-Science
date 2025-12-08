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
