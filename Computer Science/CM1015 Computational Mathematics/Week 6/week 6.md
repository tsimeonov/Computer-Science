### 6.1 Operation

<details>

  <summary>1. Modular Arithmetic Operations (Modulus k)</summary>

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
