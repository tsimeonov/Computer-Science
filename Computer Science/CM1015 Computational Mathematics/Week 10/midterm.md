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
