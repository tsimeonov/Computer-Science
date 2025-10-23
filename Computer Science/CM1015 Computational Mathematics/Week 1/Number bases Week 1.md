## Chapter 14, Number bases

### 14.1: The decimal system

When we use 10 as a base we say we are writting in the `decimal system`.

253 = 2(100) + 5(10) + (1)
= 2(10<sup>2</sup>) + 5(10<sup>1</sup>) + (10<sup>0</sup>)

### 14.2: The binary system

A binary system uses base 2. A binary system has only two digits: 0 and 1. Numbers in base 2 are called `binary digits` or simply `bits` for short.

110101<sub>2</sub> = 1(2<sup>5</sup>) + 1(2<sup>4</sup>) + 0(2<sup>3</sup>) + 1(2<sup>2</sup>) + 0(2<sup>1</sup>) + 1(2<sup>0</sup>)
= 1(32) + 1(16) + 0(8) + 1(4) + 0(2) + 1(1)
= 32 + 16 + 4 + 1
= 531<sub>10</sub>

Hense 110101~2~ and 53~10~ are equivalent

<h5>Converting decimal to binary</h5>

### 14.3: Octal system

Octal numbers use 8 as a base.

325<sub>8</sub> = 3(8<sup>2</sup>) + 2(8<sup>1</sup>) + 5(8<sup>0</sup>)


### 14.4: Hexadecimal system

The number systems whisch use 16 as a base are called `hexadecimal`. There are 16 digits in the hexadecimal system: 0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F.

`Hexadecimal digits`
|Decimal|Hexadecimal|
|:----:|:----:|
|0|0|
|1|1|
|2|2|
|3|3|
|4|4|
|5|5|
|6|6|
|7|7|
|8|8|
|9|9|
|10|A|
|11|B|
|12|C|
|13|D|
|14|E|
|15|F|


------ 

Basic arithmetics operattions

`Binary addition`

Addition follows these rules:
- 0 + 0 = 0
- 0 + 1 = 1
- 1 + 0 = 1
- 1 + 1 = 0, carry over 1 to the next left column
- 1 + 1 + 1 = 1, carry over 1 to the next left column (this happens when there's carry-in)

Example: Add 11011<sup>2</sup> (11 in decimal) and 110<sup>2</sup> ( 6 in decimal)

  1 1  (carry)
  1011  (11)
+  110  ( 6)
------
 10001  (17)


