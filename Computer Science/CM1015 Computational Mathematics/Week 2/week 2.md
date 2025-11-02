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

#### Operations with binary numbers - addition

The four basic rules

1. `0 + 0 = 0`
1. `1 + 0 = 1` (or `0 + 1 = 1`)
1. `1 + 1 = 10` (This is the key! The value "two" in binary is written `10`. So, you write 0 and carry yhe 1 to the next column)
1. `0 + 0 = 0` (This happens if you also have a carry from the revious column, The value "three" in binary is `11`. So you write 1 and carry the 1)

Step-by-step example

Lets add the binary numbers `1011` and `1101`

We set it up just like a regular math problem:

```
  1 0 1 1
+ 1 1 0 1
---------
```

Step 1: The rightmost column (1s place) 1 + 1 = 10. Write 0, carry the 1

```
     (1)  <-- Carry
  1 0 1 1
+ 1 1 0 1
---------
        0
```

Step 2: The second column from the right 1 (carry) + 1 + 0 = 10.
Write 0, carry 1.

```
  (1)(1)
  1 0 1 1
+ 1 1 0 1
---------
       0 0
```

Step 3: The third column from the right 1 (carry) + 0 + 1 = 10. Write 0, carry the 1

```
(1)(1)(1)
  1 0 1 1
+ 1 1 0 1
---------
      0 0 0
```

Step 4: The forth column from the right 1 (carry) + 1 + 1 = 11. Write 1, carry the 1

```
(1)(1)(1)(1)
  1 0 1 1
+ 1 1 0 1
---------
     1 0 0 0
```

Step 5: The final column. Bring down the last carried 1

```
(1)(1)(1)(1)
  1 0 1 1
+ 1 1 0 1
---------
  1 1 0 0 0
```

So, `1011 + 1101 = 11000`

Let's check out work (with decimal)

- `1011` in binary = (1 x 8) + (0 x 4) + (1 x 2) + (1 x 1 ) = 11
- `1101` in binary = (1 x 8) + (1 x 4) + (0 x 2) + (1 x 1 ) = 13
- 11 + 13 = 24

Now, lets check out answer

- `11000` in binary = (1 x 16) + (1 x 8) + (0 x 4) + (0 x 2 ) + (0 x 1 ) = 24

---

#### Operations with binary numbers - substraction

The basic rules

- `0 - 0 = 0`
- `1 - 0 = 1`
- `1 - 1 = 0`

The only complex rule involces `borrowing`

- `0 - 1 = 1` (with a borrow). To subtract 1 form 0, you must borrow form the next column to the left.

Let's subtract `11010` (26) from `1011` (11)

```
  1 1 0 1 0
-   1 0 1 1
---------
```

Step 1: The rightmost column (1s place) `0 - 1`. We need to borrow

- We borrow from the `1` in the 2s place , which becomes 0
- The `0` in the 1s place becomes `10` (two)
- Now we calculate `10 - 1 = 1`

```
      (0)(10)
  1 1 0 1 0
-   1 0 1 1
---------
        1
```

Step 2: The 2s place `0 - 1`. (Rememeber, we used the `1` to borrow). We need to borrow again.

- We look to the 4s place, but it's a `0`. We can't borrow from it.

- So, the 4s place must borrow from the 8s place.

- The `1` in the 8s place becomes `0`.

- The `0` in the 4s place becomes `10` (two).

```
    (0)(10)
  1 1 0 1 0
-   1 0 1 1
---------
```

- Now the 2s place can borrow from the 4s place.

- The `10` in the 4s place becomes `1`.

- The `0` in the 2s place becomes `10` (two).

- We calculate `10 - 1 = 1`.
