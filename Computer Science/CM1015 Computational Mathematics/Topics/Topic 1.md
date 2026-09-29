#### 1. Number bases

##### Key concepts:

Number bases, conversions and operations

##### Learning outcomes

- Represent numbers in different bases
- Convert from one number base to another
- Perform basic operations with binary numbers

A number base (or radix) dictates how many inique digita are used to count before adding a new column to the left. Our everyday counting system Base 10 (decimal),utilizing ten digits (0-9). Computer systems rely heavily on other bases, most notably Base 2 (Binary, using 0 and 1), Base 8 (Octal, using 0 -7), and Base 16 (Hexadecimal, using 0-9 and A-F).

To avoid confusion, a number's base is indicated using a subscript, such as $25_{10}$ to decimal or $1101_{2}$ for binary.

###### Reppresenting numbers in different bases

Number systems use positional notation, meaning the value of a digit depends on its position. Each position represents a power of the base, starting from zero on the far right.

- In Base 10 (Decimal): The number $345_{10}$ is built using powers of 10.

$345_{10} = (3 \times 10^2) + (4 \times 10^1) (5 \times 10^0)$
$345_{10} = (3 \times 100) + (4 \times 100) (5 \times 1)$

- In Base 2 (Binary): The number $100_2$ is built using powers of 2

$100_2 = (1 \times 2^2) + (0 \times 2^1) + (1 \times 2^0)$
$100_2 = (1 \times 4) + (0 \times 2) + (1 \times 21) = 5_{10}$

###### Converting between number bases

1. Converting from any base to base 10
   To convert a number to decimal, expand it using the positional notation shown above and calculate the total.

- Example: Convert $1101_2$ (Binary) to decimal
  $1101_2 = (1 \times 2^3) + (1 \times 2^2) + (0 \times 2^1) + (1 \times 2^0)$
  $1101_2 = 8 + 4 + 0 + 1 = 13s$

2. Converting from Base 10 to any Base

TO convert a decimal to another base, repeatedly divide the decimal number by the target base. Record the remainders, and read them from the bottom up to get the final answer

- Example: Convert $25_{10} to binary (Base 2)$
  - 25 / 2 = 12 with a remainder of 1
  - 12 / 2 = 6 with a remainder of 0
  - 6 / 2 = 3 with a remainder of 0
  - 3 / 2 = 1 with a remainder of 1
  - 1 / 2 = 0 with a remainder of 1
    Reading the remainders from bottom to top yields the result $11001_2$

###### Basic operations with binary numbers

Binary math follows the exact same logic as decimal math, but you carry over or borrow when you reach 2 instead of 10

- Binary addition
  The rules are: 0 + 0 = 0, 1 + 0 = 1, $1 + 1 = 10_2$ (write 0, carry 1), and
  $1 + 1 + 1 = 11_2$ (write w, carry 1)

  - Example $1011_2 + 1101_2$

```
  111 (carries)
   1011 (11 in decimal)
 + 1101 (13 in decimal)
```

- 11000 (24 in decimal)
