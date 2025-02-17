#### Continual expansion and binomial differentiation

---

##### 1. What is differentiation primarily the study of?

- Rates of change
- Discrete mathematics
- Algebraic equation
- Areas under curves

<details>
  <summary>Solution</summary>

  </br>

Differentiation is primarily the study of:

✅ **Rates of change**

It deals with how a function changes at any given point, which is essential in understanding slopes of curves, velocity, acceleration, and many other applications in calculus.

</details>

</br>

---

##### 2. Which of the following is a necessary for a function to be differentiable?

- The function must be discrete
- The function must be defined for all real numbers
- The function must be continuous
- The function must have a removable discontinuity

<details>
  <summary>Solution</summary>

  </br>

Differentiation is primarily the study of:

✅ **Rates of change**

It deals with how a function changes at any given point, which is essential in understanding slopes of curves, velocity, acceleration, and many other applications in calculus.

</details>

</br>

---

##### 3. What does the binomial help with in the context of differentiation?

- Solving linear equations
- Understanding limits of functions
- Calculating integrals of polynomials
- Proving differentiation for general polynomials

<details>
  <summary>Solution</summary>

The correct answer is:

✅ **Understanding limits of functions**

In differentiation, the **binomial theorem** is often used to expand expressions, particularly when finding limits, such as in the **definition of a derivative** using first principles. It helps simplify terms when evaluating limits, especially in problems involving small increments (e.g., using the binomial expansion to approximate \((x + h)^n\) when finding derivatives).

  </br>

</details>

</br>

---

##### 4. Which of following rule is NOT used in differentiation?

- Product rule
- Pythagorean theorem
- Chain rule
- Quotient rule

<details>
  <summary>Solution</summary>

  </br>

The correct answer is:

❌ **Pythagorean theorem**

The **Pythagorean theorem** is a geometric principle related to right-angled triangles and is **not** used in differentiation.

The **Product rule**, **Chain rule**, and **Quotient rule** are all fundamental differentiation rules used to differentiate complex functions:

- **Product rule**: Used for differentiating the product of two functions.
- **Chain rule**: Used for differentiating composite functions.
- **Quotient rule**: Used for differentiating the quotient of two functions.

</details>

</br>

---

##### 5. In machine learning, which optimization algorithm is directly related to differentiation?

- Principal component analysis
- Support vector machines
- Gradient descent
- K-means clustering

<details>
  <summary>Solution</summary>

  </br>

The correct answer is:

✅ **Gradient descent**

**Gradient descent** is an optimization algorithm that relies on **differentiation** to minimize a function, often a loss function in machine learning. It uses the **gradient (derivative)** of the function to iteratively update model parameters in the direction of the steepest descent, helping to find the optimal solution.

</details>

</br>

---

##### 6. Show the function f(x) = x^2^ is continuous at x = 2

<details>
  <summary>Solution</summary>

  </br>

To show that the function \( f(x) = x^2 \) is continuous at \( x = 2 \), we use the **formal definition of continuity** at a point.

### A function \( f(x) \) is continuous at \( x = a \) if:

\[
\lim\_{x \to a} f(x) = f(a)
\]

#### Step 1: Check if \( f(x) \) is defined at \( x = 2 \)

Since \( f(x) = x^2 \) is a polynomial function, it is defined for all real numbers, including \( x = 2 \).
\[
f(2) = 2^2 = 4
\]

#### Step 2: Compute \( \lim\_{x \to 2} f(x) \)

We evaluate the limit:
\[
\lim*{x \to 2} x^2
\]
Since \( f(x) = x^2 \) is a polynomial, it is continuous everywhere, so we can directly substitute \( x = 2 \):
\[
\lim*{x \to 2} x^2 = 2^2 = 4
\]

#### Step 3: Compare the limit and function value

\[
\lim\_{x \to 2} f(x) = f(2) = 4
\]
Since the limit and the function value are equal, \( f(x) = x^2 \) is **continuous at \( x = 2 \)**.

✔ **Conclusion**: The function \( f(x) = x^2 \) is continuous at \( x = 2 \) because
lim~2->2~f(x) = f(2)

</details>

</br>

---

##### 7. Differentiate the function f(x) = x^3^ using the definition of the derivative

<details>
  <summary>Solution</summary>

  </br>

To differentiate the function \( f(x) = x^3 \) using the **definition of the derivative**, we use the **first principles formula**:

\[
f'(x) = \lim\_{h \to 0} \frac{f(x+h) - f(x)}{h}
\]

**Step 1: Substitute \( f(x) = x^3 \) into the formula**
\[
f'(x) = \lim\_{h \to 0} \frac{(x+h)^3 - x^3}{h}
\]

**Step 2: Expand \( (x+h)^3 \) using the Binomial Theorem**
\[
(x+h)^3 = x^3 + 3x^2h + 3xh^2 + h^3
\]

**Step 3: Substitute into the formula**
\[
f'(x) = \lim\_{h \to 0} \frac{x^3 + 3x^2h + 3xh^2 + h^3 - x^3}{h}
\]

Cancel \( x^3 \):

\[
f'(x) = \lim\_{h \to 0} \frac{3x^2h + 3xh^2 + h^3}{h}
\]

**Step 4: Factor out \( h \)**
\[
f'(x) = \lim\_{h \to 0} \frac{h(3x^2 + 3xh + h^2)}{h}
\]

Cancel \( h \):

\[
f'(x) = \lim\_{h \to 0} (3x^2 + 3xh + h^2)
\]

**Step 5: Evaluate the limit**
As \( h \to 0 \), the terms \( 3xh \) and \( h^2 \) approach 0:

\[
f'(x) = 3x^2
\]

**Final Answer**
\[
\boxed{f'(x) = 3x^2}
\]

Thus, the derivative of \( f(x) = x^3 \) using first principles is **\( 3x^2 \)**.

</details>

</br>

---

##### 8. Determine the derivative of the function f(x) = ${\frac{1}{x}}$ using the limit definition of the derivative.

<details>
  <summary>Solution</summary>

  </br>

To determine the derivative of \( f(x) = \frac{1}{x} \) using the **limit definition of the derivative**, we use the **first principles formula**:

\[
f'(x) = \lim\_{h \to 0} \frac{f(x+h) - f(x)}{h}
\]

**Step 1: Substitute \( f(x) = \frac{1}{x} \) into the formula**
\[
f'(x) = \lim\_{h \to 0} \frac{\frac{1}{x+h} - \frac{1}{x}}{h}
\]

**Step 2: Find a common denominator for \( f(x+h) - f(x) \)**
The common denominator of \( \frac{1}{x+h} \) and \( \frac{1}{x} \) is \( x(x+h) \), so we rewrite:

\[
\frac{1}{x+h} - \frac{1}{x} = \frac{x - (x+h)}{x(x+h)}
\]

\[
= \frac{x - x - h}{x(x+h)} = \frac{-h}{x(x+h)}
\]

**Step 3: Substitute back into the derivative formula**
\[
f'(x) = \lim\_{h \to 0} \frac{\frac{-h}{x(x+h)}}{h}
\]

**Step 4: Simplify the fraction**
\[
f'(x) = \lim\_{h \to 0} \frac{-h}{h \cdot x(x+h)}
\]

Cancel \( h \) from the numerator and denominator:

\[
f'(x) = \lim\_{h \to 0} \frac{-1}{x(x+h)}
\]

**Step 5: Evaluate the limit as \( h \to 0 \)**
Since \( x+h \to x \), we get:

\[
f'(x) = \frac{-1}{x \cdot x} = \frac{-1}{x^2}
\]

**Final Answer**
\[
\boxed{f'(x) = -\frac{1}{x^2}}
\]

Thus, the derivative of \( f(x) = \frac{1}{x} \) using the **limit definition** is **\( -\frac{1}{x^2} \)**.

</details>

</br>

---
