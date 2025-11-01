### Week 2 Lesson 1:

---

#### Conversion of non-integer numbers between bases

The Main Concept

The system works just like base 10, but the place values after the point are fractions of the base, not 10.

- <strong>Decimal (Base 10)</strong>: `37.3` means (3 x 10<sup>1</sup>) + (7 x 10<sup>0</sup>) + (3 x 10<sup>-1</sup>). The column after the point is the <strong>tenths</strong> place.

- <strong>Binary (Base 2)</strong>: `101.11` means (1 x 2<sup>2</sup>) + (0 x 2<sup>1</sup>) + (0 x 2<sup>0</sup>) + (1 x 2<sup>-1</sup>) + (1 x 2<sup>-2</sup>). The columns after the point are the <strong>halves</strong> (1/2) and <strong>quarters (1/4)</strong> places.

For example the binary number `101.11` is converted to decimal as: 4 + 0 + 1 + 0.5 + 0.25 = 5.75

Conversions (Working Examples)

1. Hexadecimal to Binary

   - Problem: Convert `D08.1C` (base 16) to base 2
   - Method: Each hex digit is converted to its 4-bit binary equivalent, maintaining the decimal point's position.
   - D = `1101`
   - O = `0000`
   - 8 = `1000`
   - 1 = `0001`
   - C = `1100`
   - Answer: `1101` `0000` `1000` . `0001` `1100`

2. Binary to Decimal, Octal and Hex:
   - Problem: Conert the binary number `110101001.011` to other bases.
   - To decimal: Add the places values: (256 + 128 + 32 + 8 + 1) + (0.25 + 0.125) = 425.375
   - To Octal (Base 8): Group bits in threes, starting from the point
     - `110 101 001 . 011`
     - Answer 651.3 (base 8)
   - To hex (base 16): Group bits in fours, starting from the point (padding with zeros)
     - `0001 1010 1001 . 0110`
     - Answer: `1A9.6`

---
