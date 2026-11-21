#### Conversion of non-integer numbers between bases

To convert a non-integer number (a mixed number with both a whole part abd a fractional part, such as $25.625_{10}$ or $101.11_2$) between bases, split the number at the radix point and handle ewach side independently before joining them back together.

##### 1. From decimal (base 10) to another base (B)

Split the number into its integer part and fractional part:

Example: Convert $25.625_{10}$ to binary (base 2)

1. Integer part (25):

- $25 \div 2=12$ , remainder 1
- $12 \div 2=6$ , remainder 0
- $6 \div 2=3$ , remainder 0
- $3 \div 2=1$ , remainder 1
- $1 \div 2=0$ , remainder 1

Bottom to top: $11001_2$

2. Fractional part (0.625)

- $0.625 \times 2=1.25$ -> 1
- $0.25 \times 2=0.50$ ->0
- $0.50 \times 2=1.00$ -> 1 (fractional part is 0, stop)

$0.101_2$

3. Combine both parts:

$25.625_{10}=11001.101_2$

##### 2. From Another base (B) to decimal (base 10)

Use positional expansion across the entire number. Exponents count up from 0 going left, and count down into negative numbers going right:

$.......+d_2(B^2)+d_1(B^1)+d_0(B^0)+d_{-1}(B^{-1})+d_{-2}(B^{-2})....$

Example: Convert 14.24_8 (Octal) to Decimal (base 10)

- Left of point ($14_8$)

  - $1\times8^1=1\times8=8$
  - $4\times8^0=4\times1=4$

- Right of point ($0.24_8$)

  - $2\times8^{-1}=\frac{2}{8}=0.25$
  - $4\times8^{-2}=\frac{4}{64}=0.0625$

Add all terms together:

$14.24_8=8+4+0.25+0.0625=12.3125_{10}$

---

- Example (convert binary to decimal)

$101.11_2=1(2^2)+0(2^1)+1(2^0)+1(2^{-1})+1(2^{-2})$
$4+0+1+0.5+0.25=5.75_{10}$

- Example, express $D08.1C$ in base 2

  - $D_{16}=(13_{10})=8+4+0+1=1101_2$
  - $0_{16}=0_{10}=0+0+0+0=0000_2$
  - $8_{16}=(8_{10})=8+0+0+0=1000_2$
  - $1_{16}=(1_{10})=0+0+0+1=0001_2$
  - $C_{16}=(12_{10})=8+4+0+0=1100_2$

$D08.1C\_{16}=$1101 0000 1000.0001 1100

##### 3. Operations with binary numbers - Addition

$
\begin{array}{r}
  \color{gray}{11111}\quad \\
  1101 \\
  +\; 10111 \\
  \hline
  100100
\end{array}
$

##### 4. Operations with binary numbers - Substraction

Example 1:

$
\begin{array}{r}
  1011 \\
  -\; 10 \\
  \hline
  1001
\end{array}
$

Example 2:

$
\begin{array}{r}
  \color{gray}{011112} \\
  100110 \\
  -\; 11111 \\
  \hline
  000111
\end{array}
$

$100110_2 = 1(2^5)+0(2^4)+0(2^3)+1(2^2)+1(2^1)+0(2^0)=$
$32+4+2=38_{10}$

$11111_2=1(2^4)+1(2^3)+1(2^2)+1(2^1)+1(2^0)=$
$16+8+4+2+1=31_{10}$

$7 \div 2= 3$ remainder 1
$3 \div 2= 1$ remainder 1
$1 \div 2=0$ remainder 1

$7_{10}=111_2$
