### 6.1 Operation

<details>

  <summary>1. Inverses in Modular Arithmetic</summary>

  <br>

A key property of modular arithmetic is that you can perform the modular reduction (finding the remainder) before or after performing the arithmetic operation, and the result will be the same. This often simplifies calculations.

|   Operation    |                       Direct Method                       |                                       Modular Reduction First Method                                       |
| :------------: | :-------------------------------------------------------: | :--------------------------------------------------------------------------------------------------------: |
|    Addition    |   Add the numbers, then find the remainder $\pmod{k}$.    |   Find $a \pmod{k}$ and $b \pmod{k}$, then add the remainders, and find the final remainder $\pmod{k}$.    |
|  Subtraction   | Subtract the numbers, then find the remainder $\pmod{k}$. | Find $a \pmod{k}$ and $b \pmod{k}$, then subtract the remainders, and find the final remainder $\pmod{k}$. |
| Multiplication | Multiply the numbers, then find the remainder $\pmod{k}$  | Find $a \pmod{k}$ and $b \pmod{k}$, then multiply the remainders, and find the final remainder $\pmod{k}$. |

Example (Addition $\pmod{12}$)

To calculate $14 + 28 \pmod{12}$:

- Method 1 (Direct): $14 + 28 = 42$. $42 \pmod{12} = 6$ (since $42 = 3 \times 12 + 6$).
- Method 2 (Modular First): $14 \pmod{12} \equiv 2$, and $28 \pmod{12} \equiv 4$. Then $2 + 4 = 6$. The result is 6.

Subtraction with Negative Results

When subtraction results in a negative number, the final answer must be mapped back to the allowed positive set ($0$ to $k-1$).

- Example ($\pmod{12}$): $14 - 28 = -14$.
  - To find $-14 \pmod{12}$, find the nearest multiple of 12 below $-14$, which is $-24$.
  - $-24 + \mathbf{10} = -14$.
  - Therefore, $-14 \equiv \mathbf{10} \pmod{12}$.

</details>

  <br>

<details>

  <summary>2. Inverses in Modular Arithmetic</summary>

  <br>

An inverse is a number that, when combined with the original number under a specific operation, yields the identity element for that operation.

A. Additive Inverse

- Identity Element: 0 is the identity element for addition, since $n + 0 = n$.
- Definition: The additive inverse of a number $n$ in $\pmod{k}$ (written $n^{-1}$) is a number such that when added to $n$, the result is equivalent to the identity, $0 \pmod{k}$.

$$n + n^{-1} \equiv 0 \pmod{k}$$

- Example ($\pmod{19}$): Find the additive inverse of 7.
  - You need a number that adds to 7 to equal 19 (which is $0 \pmod{19}$).
  - $7 + \mathbf{12} = 19$.
  - The additive inverse of 7 is 12.

B. Multiplicative Inverse

- Identity Element: 1 is the identity element for multiplication, since $n \times 1 = n$.-

- Definition: The multiplicative inverse of $n$ in $\pmod{k}$ (written $n^{-1}$) is a number such that when multiplied by $n$, the result is equivalent to the identity, $1 \pmod{k}$.$

$n \times n^{-1} \equiv 1 \pmod{k}$$

- Existence: Multiplicative inverses do not always exist. The inverse $n^{-1}$ must be a number in the set $\{0, 1, \ldots, k-1\}$.

- Finding the Inverse (Trial and Error): The inverse can be found by trying each number in the finite set $\{0, 1, \ldots, k-1\}$ until the product yields a remainder of 1.

- Example: Find the multiplicative inverse of 2 mod 7.
  - Set of possible answers: $\{0, 1, 2, 3, 4, 5, 6\}$.
  - $2 \times 4 = 8$.
  - $8 \pmod{7} = 1$ (since $8 = 1 \times 7 + 1$).
  - The multiplicative inverse of 2 is 4.

</details>

  <br>
