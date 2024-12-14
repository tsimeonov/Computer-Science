## Learning Objectives:

### Describe modular number systems

A `modular number system` is a mathematical framework where numbers wrap around after reaching a certain value, called the `modulus`.
It forms the basis for the modular arithmetic, a system widely used in number theory, cryptography, computer science and many practical applications.

- Key Features of Modular Number Systems:

1. Modulus:

   - The modulus, denoted as `n`, determines the range of numbers
   - The numbers is a modular system are typically considered from 0 to n-1.

2. Congruence:

   - Two numbers are considered equivalent if they have the same remainder when divided by `n`
   - Written as:
     a ≡ b (mod n)
     This means a and b are in the same equivalence class in modulo n .

3. Wrapping Around:

Numbers in modular systems "wrap around" when they exceed n-1.
For instance, in modulo 5:

- 6 ≡ 1 (mod 5) because 6 divided by 5 leaves a remainder of 1.
- Similarly, -1 ≡ 4 (mod 5) because -1 + 5 = 4

4. Residue Classes:

- The numbers in a modular system are partitioned into `n` residue classes.
- Each residue class corresponds to one of the remainders 0,1,2 ... , n -1

### Explain and perform operations with congruent numbers

##### Understanding congruence:

In number theory, the idea of congruence provides a systematic way to handle remainders when dividing integers. The notation and concept stem from the observation that two numbers share a consistent remainder upon division by a certain modulus.

##### Definition of congruence:

Let _m_ be a positive integer. Two integers _a_ and _b_ are said to be congruent modulo _m_ if they leave the same remainder when divided by _m_.
Formally, we write:

<center>a ≡ b (mod m)</center>
<br>
if m | (a-b), which means _m_ divides a - b. Another way of putting it is:

<br>

<center>a = b + km</center> for some integer k.

For example, 17 ≡ 5 (mod 12) because when you divide 17 and 5 by 12, they both leave a remainder of 5. Also, 17 -5 = 12, which is divisible by 12.

##### Performing Operations with Congruences:

One of the greatest strengths of modular arithmetic is that it lets us perform addition, subtraction, and multiplication in a manner consistent with how we manipulate equations.
