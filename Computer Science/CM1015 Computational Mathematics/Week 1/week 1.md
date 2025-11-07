## Lesson 1.1: Introduction

<h5>Why study computational math?</h5>

- `Computational mathematics` is a field that focuses on using mathematical techiques, algorithms and computer technology to solve complex mathematical problems.

Syllabus:

- Week 1 and 2: Number bases
- Week 3 and 4: Sequences and series
- Week 5 and 6: Modular arithmetic
- Week 7 and 8: Angles, triangles and trigonometry
- Week 9 and 10: Graph sketching and kinematics
- Week 11 and 12: Trigonometric functions
- Week 13 and 14: Exponential and logorithmic functions
- Week 15 and 16: Limits and differentiation
- Week 17 and 18: Algebra, vectors and matrices
- Week 19 and 20: Combinatorics and probabilitis

## Lesson 1.2: Introduction to number bases

<h5>Introduction to Topic 1</h5>

<h5>Introduction to number bases</h5>

- base 10 system, alsol known as the `decimal system` is the most commonly used number system in everyday life.

Example: 3457 in base 10

The number 3457 can be broken down as follows:
3457 = 3 x 10^3^ + 4 x 10^2^ + 5 x 10^1^ + 7 x 10^0^

Breaking it down step by step:

- 3 x 10^3^ = 3 x 1000 = 3000.
- 4 x 10^2^ = 4 x 100 = 400.
- 5 x 10^1^ = 5 x 10 = 50.
- 7 x 10^0^ = 7 x 1 = 7.
  <br>
- base 2 system, also known as `binary`, is a number system that uses only two digits: 0 and 1.

Example:

Let's take the binary number 1011 and convert it ti decimal (base 10)

- The first digit from the right (1) is in the 2^0^ place , so it represents 1 x 2^0^ = 1
- The second digit from the right (1) is in the 2^1^ place , so it represents 1 x 2^1^ = 2
- The third digit from the right (0) is in the 2^2^ place , so it represents 0 x 2^2^ = 0
- The forth digit from the right (1) is in the 2^3^ place , so it represents 1 x 2^3^ = 8

Now, sun the values:

8 + 0 + 2 + 1 = 11

## Lesson 1.3: Working with other bases

`Octal system`

Octal numbers are based upon powers of 8.

<details>

  <summary>Convert 325<sub>8</sub> to a decimal number</summary>

  <br>

325<sub>8</sub> = 3(8<sup>2</sup>) + 2(8<sup>1</sup>) + 5(8<sup>0</sup>)
= 3(64) + 2(8) + 5(1)
= 192 + 16 + 5
= 213<sub>10</sub>

</details>

  <br>

<details>

  <summary>Convert 7046<sub>8</sub> to a decimal number</summary>

  <br>

7046<sub>8</sub> = 7(8<sup>3</sup>) + 0(8<sup>2</sup>) + 4(8<sup>1</sup>) + 6(8<sup>0</sup>)
= 7(512) + 0 + 4(8) + 6(1)
= 3622<sub>10</sub>

</details>

  <br>

<details>

  <summary>Convert 1001 to an octal number</summary>

- $1001 \div 8 \implies$ 125 Remainder 1
- $125 \div 8 \implies$ 15 Remainder 5
- $15 \div 8 \implies$ 7 Remainder 7
- $1 \div 8 \implies$ 1 Remainder 1

The correct result is 1751

</details>

## Lesson 1.4: Conversion of integer numbers between different bases

<details>

  <summary>Convert D08<sub>16</sub> to binary </summary>

- <strong>Method</strong>: Convert each hexadecimal digit into its 4-bit binary equivalent.

- <strong>D</strong> (which is 13) = 1101

- <strong>0</strong> = 0000

- <strong>8</strong> = 1000

- <strong>Result</strong>: 1101 0000 1000

</details>

  <br>

<details>

  <summary>Convert 347<sub>10</sub> to binary</summary>

- <strong>Method</strong>: Use the subtraction method. Find the largest power of two that fits into 347 (which is 256), subtract it, and then find the largest power of two that fits into the remainder (91), and so on.

- `347 = 256 + 0 + 64 + 0 + 16 + 8 + 0 + 2 + 1`

- <strong>Result</strong> `101011011`

</details>
