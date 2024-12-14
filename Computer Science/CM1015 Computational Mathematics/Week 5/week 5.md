## Learning Objectives:

- Describe modular number systems

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
