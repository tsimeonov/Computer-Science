### Question 1

#### (a)

$$Value_{10} = (a \cdot x^2) + (b \cdot x^1) + (c \cdot x^0) + (d \cdot x^{-1}) + (e \cdot x^{-2})$$

#### (b)

(i.)

$$10.0011_2 = (1 \times 2^1) + (0 \times 2^0) + (0 \times 2^{-1}) + (0 \times 2^{-2}) + (1 \times 2^{-3}) + (1 \times 2^{-4})$$

- $(1 \times 2) = 2$
- $(0 \times 1) = 0$
- $(0 \times 0.5) = 0$
- $(0 \times 0.25) = 0$
- $(1 \times 0.125) = 0.125$
- $(1 \times 0.0625) = 0.0625$

$2 + 0.125 + 0.0625 = 2.1875_{10}$

(ii.)

- The first 1 is in the third position after the point: $2^{-3}$ (which is $\frac{1}{8}$ or $0.125$).
- The second 1 is in the fourth position after the point: $2^{-4}$ (which is $\frac{1}{16}$ or $0.0625$).

(iii.)

- $1 + 1 = 10_2$ (which is $2$ in decimal)
- $10_2 + 1 = 11_2$ (which is $3$ in decimal)
- $11_2 + 1 = 100_2$ (which is $4$ in decimal)Final Result: $100_2$

Result: $100_2$

(iv.)

Result is $10.1_2$

#### (c)

Convert binary to deciaml

- $11_2$: $(1 \times 2^1) + (1 \times 2^0) = 2 + 1 = \mathbf{3}$
- $1000_2$: $(1 \times 2^3) + (0 \times 2^2) + (0 \times 2^1) + (0 \times 2^0) = \mathbf{8}$
- $101_2$: $(1 \times 2^2) + (0 \times 2^1) + (1 \times 2^0) = 4 + 1 = \mathbf{5}$

Solve the equation in decimal

$$\frac{3}{x} = \frac{8}{x + 5}$$

Now, cross-multiply to solve for $x$:

- $3(x + 5) = 8x$
- $3x + 15 = 8x$
- $15 = 8x - 3x$
- $15 = 5x$
- $x = 3$

Convert the result back to base 2

- $3_{10} = (1 \times 2^1) + (1 \times 2^0) = \mathbf{11_2}$

#### (d)

Step 1: Expand the Base $b$ Expressions

According to the expansion method, a two-digit number $XY_b$ is equal to $X \cdot b^1 + Y \cdot b^0$.

- $AB_b = A \cdot b + B$
- $BA_b = B \cdot b + A$

Now, substitute these into the original equation:

$$(Ab + B) + (Bb + A) = 121_{10}$$

Step 2: Simplify the Equation

Combine like terms (the $A$ terms and the $B$ terms):

$$Ab + A + Bb + B = 121$$
$$A(b + 1) + B(b + 1) = 121$$
$$(A + B)(b + 1) = 121$$

Step 3: Analyze the Factors of 121

We now have two factors, $(A + B)$ and $(b + 1)$, which when multiplied equal $121$. The integer factors of $121$ are:

- $1 \times 121$
- $11 \times 11$
- $121 \times 1$

We can evaluate these possibilities based on the constraints of number bases:

1. Possibility 1: $(A+B) = 1$ and $(b+1) = 121$

- This implies $b = 120$. However, if $A+B=1$ and $A \neq B$, one digit must be $0$ and the other $1$. Since $A$ and $B$ are lead digits in $AB_b$ and $BA_b$, neither can be $0$. This is ruled out.

2. Possibility 2: $(A+B) = 11$ and $(b+1) = 11$

   - This implies $b = 10$.
   - If the base is 10, then $A+B=11$. Any pair of distinct digits that sum to 11 works (e.g., $A=5, B=6$ or $A=2, B=9$).
   - Verification: $56_{10} + 65_{10} = 121_{10}$. This holds true.

3. Possibility 3: $(A+B) = 121$ and $(b+1) = 1$T

   - his implies $b = 0$, which is impossible as a base must be greater than 1.

Final SolutionBased on the factor analysis:

- Base ($b$): $10$
- Digits ($A$ and $B$): Any two distinct digits that sum to $11$. Examples include $A=5, B=6$ or $A=4, B=7$.

### Question 2

#### (a)

To find the number of bacteria present immediately after the second sterilization, we calculate the population changes through each growth and sterilization phase step-by-step.

Step 1: First Growth Phase (0 to 12 hours)

The bacteria population follows a geometric growth pattern where the population doubles every 3 hours.

- Initial population ($a$): 200
- Doubling time: 3 hours
- Total time: 12 hours
- Number of doublings ($n$): $\frac{12}{3} = 4$ doublings.

Using the geometric sequence logic $a_{n+1} = a \cdot r^n$ where $r=2$:

$$N_{12} = 200 \cdot 2^4 = 200 \cdot 16 = 3,200 \text{ bacteria}$$

Step 2: First Sterilization (at 12 hours)

The agent kills $70\%$ of the bacteria instantly, leaving $30\%$ remaining.

Remaining population: $3,200 \cdot 0.30 = 960 \text{ bacteria}$

Step 3: Second Growth Phase (Additional 36 hours)

The remaining bacteria continue to double every 3 hours.

- Initial population for this phase: 960
- Total time: 36 hours
- Number of doublings: $\frac{36}{3} = 12$ doublings.

The population after 36 hours of growth is:

$$N_{48} = 960 \cdot 2^{12} = 960 \cdot 4,096 = 3,932,160 \text{ bacteria}$$

Step 4: Second Sterilization (at 48 hours)

A second identical agent is applied, again killing $70\%$ ($30\%$ remaining).

- Final population: $3,932,160 \cdot 0.30 = 1,179,648$

#### (b)

(i.)

The formula for the sum of the first $n$ terms of a geometric sequence is $S_n = \frac{a(1 - r^n)}{1 - r}$.

1. Identify the given values:

- First term ($a$): 4
- Common ratio ($r$): 3
- Sum ($S_n$): 364

2. Substitute the values into the formula:

$$364 = \frac{4(1 - 3^n)}{1 - 3}$$

3. Solve for $n$:

- Simplify the denominator: $364 = \frac{4(1 - 3^n)}{-2}$
- Divide 4 by -2: $364 = -2(1 - 3^n)$
- Divide both sides by -2: $-182 = 1 - 3^n$
- Rearrange the equation: $3^n = 182 + 1 = 183$

Since $3^4 = 81$ and $3^5 = 243$, the value $n=6$ would require a sum of $1456$. If we assume the target was $3^n - 1 = 242$ ($S_n = 484$), $n$ would be 5. Given the exact prompt $3^n = 183$, $n$ is approximately 4.75. However, in discrete sequence problems, $n$ must be an integer. If the sum was 484, $n=5$. If the sum was 120, $n=4$.

(ii.)

The formula for the $n^{th}$ (last) term of a geometric sequence is $a_n = a \cdot r^{(n-1)}$.

If we use the calculated value (assuming $n = 5$ for a standard integer result):

- $a_5 = 4 \cdot 3^4$
- $a_5 = 4 \cdot 3^{(5-1)}$
- $a_5 = 4 \cdot 81$
- $a_5 = 324$

Result:

- Number of terms: $n \approx 4.75$ (or 5 if the sum was intended to be 484).
  Last term: If $n=5$, the last term is 324.

#### (c)

To find the possible values of the common ratio, we can translate the given information into algebraic equations.

1. Define the Terms

Let the first term of the geometric progression (GP) be $a$ and the common ratio be $r$.
The terms of the GP are defined as $T_n = ar^{n-1}$.

- The 2nd term is $ar$.
- The 4th term is $ar^3$.
- The 6th term is $ar^5$.

  2.Set up the Arithmetic Progression (AP) Condition

  In an arithmetic progression, the difference between consecutive terms is constant. Therefore, the middle term is the average of the two surrounding terms:

  $$2 \times (\text{4th term}) = (\text{2nd term}) + (\text{6th term})$$

  Substituting our GP terms:

  $$2(ar^3) = ar + ar^5$$

  3. Simplify and Solve for $r$

  Since we are told the first term $a$ is positive ($a > 0$), we can safely divide both sides by $a$. Additionally, if $r = 0$, the sequence becomes $a, 0, 0, 0...$, which is technically an AP, but typically $r \neq 0$ in these problems.

  Dividing by $ar$:$$2r^2 = 1 + r^4$$

  Rearrange this into a quadratic form by moving all terms to one side:

  $$r^4 - 2r^2 + 1 = 0$$

  This expression is a perfect square trinomial:

  $$(r^2 - 1)^2 = 0$$

  Taking the square root of both sides:

  $$r^2 - 1 = 0$$

  $$r^2 = 1$$

  $$r = \pm 1$$

#### (d)

1. The First 6 Books (Full Price)The prices follow a geometric progression where the first term $a = 3$ and the common ratio $r = 2$.

The prices are:

- Book 1: £3
- Book 2: £6
- Book 3: £12
- Book 4: £24
- Book 5: £48
- Book 6: £96

Sum of first 6 books:$3 + 6 + 12 + 24 + 48 + 96 = \mathbf{£189}$

2. The Last 4 Books (Discounted)

First, let's find what these books would have cost at full price by continuing the doubling pattern:

- Book 7: $96 \times 2 = £192$
- Book 8: $192 \times 2 = £384$
- Book 9: $384 \times 2 = £768$
- Book 10: $768 \times 2 = £1,536$

Total "Full Price" for books 7–10:$192 + 384 + 768 + 1,536 = £2,880$

Apply the 15% discount:If the discount is 15%, Ben pays 85% of the price (1$100\% - 15\% = 85\%$).

2$$2,880 \times 0.85 = \mathbf{£2,448}$$

3. Total Expenditure

Now, add the two totals together:

$$£189 \text{ (Books 1-6)} + £2,448 \text{ (Books 7-10)} = \mathbf{£2,637}$$

Total Amount Paid: £2,637

### Question 3

#### (a)

We have two requirements for $x$:

$x \equiv 5 \pmod 6$
$x \equiv 3 \pmod 7$

List Multiples (The "Simple" Method)

Since the moduli (6 and 7) are small, we can list the numbers that satisfy the second (larger) modulus and check them against the first.
Numbers satisfying $x \equiv 3 \pmod 7$:

- $x = 3$ ($3 \div 6$ leaves remainder 3) — No
- $x = 10$ ($10 \div 6$ leaves remainder 4) — No
- $x = 17$ ($17 \div 6$ leaves remainder 5) — Yes!

#### (b)

1. Calculate the Remainder

We need to find $224 \pmod{24}$.
We know that $24 \times 10 = 240$.
$240$ is exactly 10 full days.
Subtracting 24 from 240 gives us $216$ ($24 \times 9 = 216$).
The difference between the total hours (224) and the last full day (216) is:$$224 - 216 = 8 \text{ hours}$$

So, 224 hours is equivalent to 9 full days and 8 hours.

2. Apply the Elapsed Time

Now, add the remaining 8 hours to the current time:

- Current Time: 14:00
- Elapsed Hours: + 8 hours
- Calculation: $14 + 8 = 22$

ConclusionThe clock will show 22:00.

(c)

Find the Least Common Multiple (LCM)

| Prime | Highest power |
| :---: | :-----------: |
|   2   |    $2^3$=8    |
|   3   |    $3^2$=9    |
|   5   |    $5^1$=5    |
|   7   |    $7^1$=7    |

Multiply these highest powers together:

$$\text{LCM} = 8 \times 9 \times 5 \times 7$$
$$\text{LCM} = 72 \times 35$$
$$\text{LCM} = 2,520$$

Then we solve for x

We know that $x + 1 = 2,520$.Therefore:

$$x = 2,520 - 1$$
$$x = 2,519$$

AnswerThe smallest positive integer is 2,519.
