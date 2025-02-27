### Further differentiation 1

##### 1. What does the f'(x) represent in the differentiation?

- The integral of the function
- The value of the function at x
- The average rate of the change between two points
- The slope of the tangent line at x

<details>
  <summary>Solution</summary>

The correct answer is:

**The slope of the tangent line at x**

\( f'(x) \) represents the **instantaneous rate of change** of the function at \( x \), which is the **slope of the tangent line** to the curve at that point.

  </br>

</details>

</br>

##### 2. Which of the following expressions defines the derivative of f(x) using limits?

- lim~h->0~ ${\frac{f(x+h) - f(x)}{h}}$
- lim~h->0~ ${\frac{f(x) - f(x-h)}{h}}$
- lim~h->0~ ${\frac{f(x+h) - f(x-h)}{h}}$
- lim~h->0~ ${\frac{f(x+h) - f(x-h)}{2h}}$

<details>

  <summary>Solution</summary>

The correct answer is:

**\(\lim\_{{h \to 0}} \frac{f(x+h) - f(x)}{h}\)**

This is the **definition of the derivative** of \( f(x) \) using limits. It represents the **instantaneous rate of change** of \( f(x) \) at \( x \), which is also the slope of the tangent line to the curve at that point.

Explanation of the other options:

- **\(\lim\_{{h \to 0}} \frac{f(x) - f(x-h)}{h}\)**:

  - This is similar to the correct definition but written in terms of backward differences. It is not the standard definition.

- **\(\lim\_{{h \to 0}} \frac{f(x+h) - f(x-h)}{h}\)**:

  - This expression is incorrect because it does not properly take the limit as \( h \to 0 \) in the standard form.

- **\(\lim\_{{h \to 0}} \frac{f(x+h) - f(x-h)}{2h}\)**:
  - This is the **symmetric difference quotient**, an approximation for the derivative, but not its exact definition.

Thus, the first option is the correct definition of the derivative using limits. 🚀

  </br>

</details>

</br>

##### 3. If f(x) = x^3^, what is f;(x)?

- 3x^2^
- 3x
- x^3^
- x^2^

<details>
  <summary>Solution</summary>

Given the function:
\[
f(x) = x^3
\]

To find \( f'(x) \), we use the **power rule** of differentiation:

\[
\frac{d}{dx} x^n = n x^{n-1}
\]

Applying this rule:

\[
f'(x) = 3x^{3-1} = 3x^2
\]

Correct Answer:

✅ **3x²**

  </br>

</details>

</br>

##### 4. What technique is used to find the derivative of f(x) = x^2^ from first principles?

- Binomial expansion
- Quotient rule
- Product rule
- Integration by parts

<details>
  <summary>Solution</summary>

The correct answer is:

✅ **Binomial expansion**

### Explanation:

To find the derivative of \( f(x) = x^2 \) **from first principles**, we use the **definition of the derivative**:

\[
f'(x) = \lim\_{{h \to 0}} \frac{f(x+h) - f(x)}{h}
\]

Substituting \( f(x) = x^2 \):

\[
f'(x) = \lim\_{{h \to 0}} \frac{(x+h)^2 - x^2}{h}
\]

Expanding \( (x+h)^2 \) using **binomial expansion**:

\[
(x+h)^2 = x^2 + 2xh + h^2
\]

Now, substitute back:

\[
f'(x) = \lim\_{{h \to 0}} \frac{x^2 + 2xh + h^2 - x^2}{h}
\]

\[
= \lim\_{{h \to 0}} \frac{2xh + h^2}{h}
\]

Factor out \( h \):

\[
= \lim\_{{h \to 0}} (2x + h)
\]

As \( h \to 0 \), we get:

\[
f'(x) = 2x
\]

### Why the other options are incorrect:

- **Quotient Rule**: Used for functions of the form \( \frac{f(x)}{g(x)} \), which is not applicable here.
- **Product Rule**: Used when differentiating a product of two functions, but \( x^2 \) is a single function.
- **Integration by Parts**: This is an integration technique, not differentiation.

Thus, **binomial expansion** is the correct technique when differentiating \( f(x) = x^2 \) from first principles. 🚀e

  </br>

</details>

</br>

##### 5. Which of the following expressions is the derivative of f(x) = x^2^ using the limit definition?

- lim~Δx\_>0~ ${\frac{(x+Δx)^3 -x^3}{Δx}}$
- lim~Δx\_>0~ ${\frac{(x^2 - (z-Δx)^2}{Δx}}$
- lim~Δx\_>0~ ${\frac{((x+Δx)-x}{Δx}}$
- lim~Δx\_>0~ ${\frac{(x+Δ)^2}{Δx}}$

<details>
  <summary>Solution</summary>

The correct expression that represents the derivative of \( f(x) = x^2 \) using the **limit definition of a derivative** is:

✅
\[
\lim\_{\Delta x \to 0} \frac{(x+\Delta x)^2 - x^2}{\Delta x}
\]

However, none of the given options seem to be exactly correct. Let's analyze them:

1. **\(\lim\_{\Delta x \to 0} \frac{(x+\Delta x)^3 - x^3}{\Delta x}\)**

   - Incorrect. This is the derivative definition for \( f(x) = x^3 \), not \( x^2 \).

2. **\(\lim\_{\Delta x \to 0} \frac{x^2 - (z-\Delta x)^2}{\Delta x}\)**

   - Incorrect. This does not match the standard limit definition of the derivative.

3. **\(\lim\_{\Delta x \to 0} \frac{( (x+\Delta x) - x )}{\Delta x}\)**

   - Incorrect. This simplifies to \( \frac{\Delta x}{\Delta x} = 1 \), which is not the derivative of \( x^2 \).

4. **\(\lim\_{\Delta x \to 0} \frac{(x+\Delta)^2}{\Delta x}\)**
   - Incorrect. It should be **\(\frac{(x+\Delta x)^2 - x^2}{\Delta x}\)** instead.

Correct Limit Definition for \( f(x) = x^2 \):

\[
f'(x) = \lim\_{\Delta x \to 0} \frac{(x+\Delta x)^2 - x^2}{\Delta x}
\]

Expanding \( (x+\Delta x)^2 \) using binomial expansion:

\[
= \lim\_{\Delta x \to 0} \frac{x^2 + 2x\Delta x + (\Delta x)^2 - x^2}{\Delta x}
\]

\[
= \lim\_{\Delta x \to 0} \frac{2x\Delta x + (\Delta x)^2}{\Delta x}
\]

\[
= \lim\_{\Delta x \to 0} (2x + \Delta x)
\]

\[
= 2x
\]

Thus, **\( f'(x) = 2x \)**, but none of the answer choices match the correct limit definition exactly. If you have a formatting issue in your options, check for a choice similar to:

\[
\lim\_{\Delta x \to 0} \frac{(x+\Delta x)^2 - x^2}{\Delta x}
\]

  </br>

</details>

</br>

##### 6. Find the derivative of f(x) = x^3^ using the limit definition of the derivative

<details>
  <summary>Solution</summary>

To find the derivative of \( f(x) = x^3 \) using the **limit definition of a derivative**, we use:

\[
f'(x) = \lim\_{{h \to 0}} \frac{f(x+h) - f(x)}{h}
\]

Step 1: Substitute \( f(x) = x^3 \)

\[
f'(x) = \lim\_{{h \to 0}} \frac{(x+h)^3 - x^3}{h}
\]

Step 2: Expand \( (x+h)^3 \) using the **binomial expansion**:

\[
(x+h)^3 = x^3 + 3x^2h + 3xh^2 + h^3
\]

Step 3: Substitute back into the limit expression

\[
f'(x) = \lim\_{{h \to 0}} \frac{x^3 + 3x^2h + 3xh^2 + h^3 - x^3}{h}
\]

Step 4: Simplify the numerator

\[
f'(x) = \lim\_{{h \to 0}} \frac{3x^2h + 3xh^2 + h^3}{h}
\]

Factor out \( h \):

\[
f'(x) = \lim\_{{h \to 0}} (3x^2 + 3xh + h^2)
\]

Step 5: Take the limit as \( h \to 0 \)

\[
f'(x) = 3x^2 + 3x(0) + 0^2
\]

\[
f'(x) = 3x^2
\]

Final Answer:

\[
\mathbf{f'(x) = 3x^2}
\]

This confirms that the derivative of \( x^3 \) is **\( 3x^2 \)** using the first principles (limit definition of a derivative). 🚀

  </br>

</details>

</br>

##### 7. Find the derivative of f(x) = x^2^ using the limit definition of the derivative

<details>
  <summary>Solution</summary>

To find the derivative of \( f(x) = x^2 \) using the **limit definition of the derivative**, we use:

\[
f'(x) = \lim\_{{h \to 0}} \frac{f(x+h) - f(x)}{h}
\]

Step 1: Substitute \( f(x) = x^2 \)

\[
f'(x) = \lim\_{{h \to 0}} \frac{(x+h)^2 - x^2}{h}
\]

Step 2: Expand \( (x+h)^2 \) using the **binomial expansion**:

\[
(x+h)^2 = x^2 + 2xh + h^2
\]

Step 3: Substitute back into the limit expression

\[
f'(x) = \lim\_{{h \to 0}} \frac{x^2 + 2xh + h^2 - x^2}{h}
\]

Step 4: Simplify the numerator

\[
f'(x) = \lim\_{{h \to 0}} \frac{2xh + h^2}{h}
\]

Factor out \( h \):

\[
f'(x) = \lim\_{{h \to 0}} (2x + h)
\]

Step 5: Take the limit as \( h \to 0 \)

\[
f'(x) = 2x + 0
\]

\[
f'(x) = 2x
\]

Final Answer:

\[
\mathbf{f'(x) = 2x}
\]

This confirms that the derivative of \( x^2 \) is **\( 2x \)** using the **limit definition of a derivative**. 🚀

  </br>

</details>

</br>

##### 8. Differentiate f(x) = x^2^ from first principles using the binomial expression

<details>
  <summary>Solution</summary>

To differentiate \( f(x) = x^2 \) from **first principles** using the **binomial expansion**, we use the **limit definition of the derivative**:

\[
f'(x) = \lim\_{{h \to 0}} \frac{f(x+h) - f(x)}{h}
\]

**Step 1: Substitute \( f(x) = x^2 \)**

\[
f'(x) = \lim\_{{h \to 0}} \frac{(x+h)^2 - x^2}{h}
\]

**Step 2: Expand \( (x+h)^2 \) using the Binomial Theorem**

Using the **binomial expansion**:

\[
(x+h)^2 = x^2 + 2xh + h^2
\]
**Step 3: Substitute back into the limit expression**

\[
f'(x) = \lim\_{{h \to 0}} \frac{x^2 + 2xh + h^2 - x^2}{h}
\]
**Step 4: Simplify the numerator**

\[
= \lim\_{{h \to 0}} \frac{2xh + h^2}{h}
\]

Factor out \( h \):

\[
= \lim\_{{h \to 0}} (2x + h)
\]

**Step 5: Take the limit as \( h \to 0 \)**

\[
f'(x) = 2x + 0
\]

\[
f'(x) = 2x
\]

**Final Answer:**
\[
\mathbf{f'(x) = 2x}
\]

Thus, using **first principles** and the **binomial expansion**, we confirm that the derivative of \( x^2 \) is **\( 2x \)**. 🚀

  </br>

</details>

</br>

##### 9. Find the derivative of f(x) = x^4^ using the limit definition of the derivative

<details>
  <summary>Solution</summary>

To find the derivative of \( f(x) = x^4 \) using the **limit definition of a derivative**, we follow these steps:

**Step 1: Apply the Limit Definition**
The derivative is given by:

\[
f'(x) = \lim\_{{h \to 0}} \frac{f(x+h) - f(x)}{h}
\]

Substituting \( f(x) = x^4 \):

\[
f'(x) = \lim\_{{h \to 0}} \frac{(x+h)^4 - x^4}{h}
\]

**Step 2: Expand \( (x+h)^4 \) using the Binomial Theorem**
Using the **binomial expansion**:

\[
(x+h)^4 = x^4 + 4x^3h + 6x^2h^2 + 4xh^3 + h^4
\]

**Step 3: Substitute into the Limit Expression**
\[
f'(x) = \lim\_{{h \to 0}} \frac{x^4 + 4x^3h + 6x^2h^2 + 4xh^3 + h^4 - x^4}{h}
\]

Cancel out \( x^4 \):

\[
f'(x) = \lim\_{{h \to 0}} \frac{4x^3h + 6x^2h^2 + 4xh^3 + h^4}{h}
\]

**Step 4: Factor Out \( h \)**
\[
f'(x) = \lim\_{{h \to 0}} (4x^3 + 6x^2h + 4xh^2 + h^3)
\]

**Step 5: Take the Limit as \( h \to 0 \)**
Since \( h \to 0 \), all terms containing \( h \) vanish:

\[
f'(x) = 4x^3
\]

**Final Answer:**
\[
\mathbf{f'(x) = 4x^3}
\]

Thus, using the **limit definition of a derivative**, we have shown that the derivative of \( x^4 \) is **\( 4x^3 \)**. 🚀

  </br>

</details>

</br>

##### 10. Using the result for f(x) = x^n^, find the derivative of f(x) = x^5^

<details>
  <summary>Solution</summary>

To find the derivative of \( f(x) = x^5 \) using the **result from \( f(x) = x^n \)**, we apply the **power rule**, which we derived from the limit definition:

\[
\frac{d}{dx} x^n = n x^{n-1}
\]

### **Step 1: Identify \( n \)**

For \( f(x) = x^5 \), we have:

\[
n = 5
\]

### **Step 2: Apply the Power Rule**

\[
f'(x) = 5x^{5-1}
\]

\[
f'(x) = 5x^4
\]

### **Final Answer:**

\[
\mathbf{f'(x) = 5x^4}
\]

Thus, using the **power rule**, the derivative of \( x^5 \) is **\( 5x^4 \)**. 🚀

  </br>

</details>

</br>
