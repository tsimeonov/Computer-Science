### Further differentiation II – product, quotient and chain rule

##### 1. What is the product rule for differentiating f(x) = g(x) \* h(x)?

- f'(x) = g'(x) \* h(x) \* h'(x)
- f'(x) = g'(x) \* h'(x)
- f'(x) = g'(x) \* h'(x)
- f'(x) = g(x) \* h(x)

<details>
  <summary>Solution</summary>

The correct answer is:

✅ **\( f'(x) = g'(x) h(x) + g(x) h'(x) \)**

**Product Rule for Differentiation**

If you have a function that is the product of two differentiable functions:

\[
f(x) = g(x) \cdot h(x)
\]

Then, the **product rule** states:

\[
f'(x) = g'(x) h(x) + g(x) h'(x)
\]

**Explanation:**

- \( g'(x) h(x) \) accounts for the rate of change of \( g(x) \) while keeping \( h(x) \) constant.
- \( g(x) h'(x) \) accounts for the rate of change of \( h(x) \) while keeping \( g(x) \) constant.

**Example:**

If \( f(x) = x^2 \cdot \sin x \), then using the product rule:

\[
f'(x) = (2x) \sin x + x^2 \cos x
\]

Thus, the correct choice follows this structure:

\[
\mathbf{f'(x) = g'(x) h(x) + g(x) h'(x)}
\] 🚀

  </br>

</details>

</br>

##### 2. What is the quotient rule for differentiating f(x) = ${\frac{h(x)}{g(x)}}$

- f'(x) = ${\frac{h'(x) * g(x) + h(x) * g'(x) }{(g(x))^2}}$
- f'(x) = ${\frac{h'(x) * g(x) - h(x) * g'(x) }{(g(x))^2}}$
- f'(x) = ${\frac{g'(x) * h(x) - g(x) * h'(x) }{(g(x))^2}}$
- f'(x) = ${\frac{g'(x) * h(x) + g(x) * h '(x) }{(g(x))^2}}$

<details>
  <summary>Solution</summary>

The correct answer is:

✅ **\( f'(x) = \frac{h'(x) g(x) - h(x) g'(x)}{(g(x))^2} \)**

**Quotient Rule for Differentiation**

If you have a function that is the **quotient** of two differentiable functions:

\[
f(x) = \frac{h(x)}{g(x)}
\]

Then, the **quotient rule** states:

\[
f'(x) = \frac{h'(x) g(x) - h(x) g'(x)}{(g(x))^2}
\]

**Explanation:**

- **\( h'(x) g(x) \)** → Derivative of the numerator times the denominator.
- **\( h(x) g'(x) \)** → Numerator times the derivative of the denominator.
- **The denominator squared: \( (g(x))^2 \)** ensures the fraction is properly differentiated.

**Example:**

If
\[
f(x) = \frac{x^2}{x+1}
\]
Then using the quotient rule:

- \( h(x) = x^2 \), so \( h'(x) = 2x \)
- \( g(x) = x+1 \), so \( g'(x) = 1 \)

Applying the formula:
\[
f'(x) = \frac{(2x)(x+1) - (x^2)(1)}{(x+1)^2}
\]

\[
= \frac{2x^2 + 2x - x^2}{(x+1)^2}
\]

\[
= \frac{x^2 + 2x}{(x+1)^2}
\]

Thus, the correct answer is:

\[
\mathbf{f'(x) = \frac{h'(x) g(x) - h(x) g'(x)}{(g(x))^2}}
\] 🚀

  </br>

</details>

</br>

##### 3. What is the chain rule for differentiating f(x) = g(h(x))?

- f'(x) = g(x) \* h'(x)
- f'(x) = g'(h(x)) \* h(x)
- f'(x) = g'(h(x)) \* h'(x)
- f'(x) = g(h(x)) \* h'(x)

<details>
  <summary>Solution</summary>

The correct answer is:

✅ **\( f'(x) = g'(h(x)) \cdot h'(x) \)**

**Chain Rule for Differentiation**

If you have a **composite function**:

\[
f(x) = g(h(x))
\]

Then, the **chain rule** states:

\[
f'(x) = g'(h(x)) \cdot h'(x)
\]

**Explanation:**

- **\( g'(h(x)) \)** → Differentiate the outer function \( g(x) \), keeping the inner function \( h(x) \) unchanged.
- **\( h'(x) \)** → Differentiate the inner function \( h(x) \).

**Example:**

If
\[
f(x) = \sin(x^2)
\]
Then:

- **Outer function**: \( g(x) = \sin x \) → \( g'(x) = \cos x \)
- **Inner function**: \( h(x) = x^2 \) → \( h'(x) = 2x \)

Applying the chain rule:

\[
f'(x) = \cos(x^2) \cdot 2x
\]

\[
= 2x \cos(x^2)
\]

**Final Answer:**

\[
\mathbf{f'(x) = g'(h(x)) \cdot h'(x)}
\] 🚀

  </br>

</details>

</br>

##### 4. If f(x) = sin(x) \* cos(x), what id f'(x) using the product rule?

- cos(x) \* cos(x) + sin(x) \* sin(x)
- cos^2^(x) - sin^2^(x)
- cos(x) - sin(x)
- cos(x) \* cos(x) - sin(x) \* sin(x)

<details>
  <summary>Solution</summary>

To differentiate \( f(x) = \sin(x) \cdot \cos(x) \) using the **product rule**, we follow these steps:

**Step 1: Recall the Product Rule**
The **product rule** states:

\[
f'(x) = g'(x) h(x) + g(x) h'(x)
\]

For \( f(x) = \sin(x) \cdot \cos(x) \), let:

- \( g(x) = \sin(x) \), so \( g'(x) = \cos(x) \).
- \( h(x) = \cos(x) \), so \( h'(x) = -\sin(x) \).

**Step 2: Apply the Product Rule**
\[
f'(x) = (\cos(x) \cdot \cos(x)) + (\sin(x) \cdot (-\sin(x)))
\]

\[
= \cos^2(x) - \sin^2(x)
\]

**Final Answer:**
✅ **\( \cos^2(x) - \sin^2(x) \)**

Thus, the correct choice is:
**\( \mathbf{\cos^2(x) - \sin^2(x)} \)** 🎯

This is also known as the **double-angle identity** for cosine:
\[
\cos(2x) = \cos^2(x) - \sin^2(x)
\]

  </br>

</details>

</br>

##### 5. If f(x) = ${\frac{e^x}{x^2}}$, what is f'(x) using the quotient rule?

- ${\frac{e^x * x^2 + e^x * 2x}{x^4}}$
- ${\frac{e^x * x^2 - e^x * 2x}{x^2}}$
- ${\frac{e^x * x^2 - e^x * x^2}{x^4}}$
- ${\frac{e^x * x^2 - e^x * 2x}{x^4}}$

<details>
  <summary>Solution</summary>

To differentiate \( f(x) = \frac{e^x}{x^2} \) using the **quotient rule**, follow these steps:

**Step 1: Recall the Quotient Rule**

For a function of the form:

\[
f(x) = \frac{h(x)}{g(x)}
\]

The **quotient rule** states:

\[
f'(x) = \frac{h'(x) g(x) - h(x) g'(x)}{(g(x))^2}
\]
**Step 2: Identify \( h(x) \) and \( g(x) \)**

- **Numerator**: \( h(x) = e^x \)

  - Derivative: \( h'(x) = e^x \)

- **Denominator**: \( g(x) = x^2 \)
  - Derivative: \( g'(x) = 2x \)

**Step 3: Apply the Quotient Rule**

\[
f'(x) = \frac{e^x \cdot x^2 - e^x \cdot 2x}{x^4}
\]

**Final Answer:**

✅ **\( \frac{e^x \cdot x^2 - e^x \cdot 2x}{x^4} \)**

Thus, the correct choice is:
**\( \mathbf{\frac{e^x x^2 - e^x 2x}{x^4}} \)** 🎯

  </br>

</details>

</br>

##### 6. Given f(x) = x^3^ \* In(x), find f'(x) using the product rule

<details>
  <summary>Solution</summary>

To differentiate \( f(x) = x^3 \cdot \ln(x) \) using the **product rule**, follow these steps:

### **Step 1: Recall the Product Rule**

For a function of the form:

\[
f(x) = g(x) \cdot h(x)
\]

The **product rule** states:

\[
f'(x) = g'(x) h(x) + g(x) h'(x)
\]

**Step 2: Identify \( g(x) \) and \( h(x) \)**

- \( g(x) = x^3 \)

  - Derivative: \( g'(x) = 3x^2 \)

- \( h(x) = \ln(x) \)
  - Derivative: \( h'(x) = \frac{1}{x} \)

**Step 3: Apply the Product Rule**
\[
f'(x) = (3x^2 \cdot \ln(x)) + (x^3 \cdot \frac{1}{x})
\]

\[
= 3x^2 \ln(x) + x^2
\]

**Final Answer:**
\[
\mathbf{f'(x) = 3x^2 \ln(x) + x^2}
\] 🚀

  </br>

</details>

</br>

##### 7. Given f(x) = ${\frac{In(x) }{x^2}}$, find f'(x) using the quotient rule

<details>
  <summary>Solution</summary>

To differentiate \( f(x) = \frac{\ln(x)}{x^2} \) using the **quotient rule**, follow these steps:

**Step 1: Recall the Quotient Rule**

For a function of the form:

\[
f(x) = \frac{h(x)}{g(x)}
\]

The **quotient rule** states:

\[
f'(x) = \frac{h'(x) g(x) - h(x) g'(x)}{(g(x))^2}
\]

**Step 2: Identify \( h(x) \) and \( g(x) \)**

- **Numerator**: \( h(x) = \ln(x) \)

  - Derivative: \( h'(x) = \frac{1}{x} \)

- **Denominator**: \( g(x) = x^2 \)
  - Derivative: \( g'(x) = 2x \)

**Step 3: Apply the Quotient Rule**

\[
f'(x) = \frac{\left( \frac{1}{x} \cdot x^2 \right) - \left( \ln(x) \cdot 2x \right)}{(x^2)^2}
\]
**Step 4: Simplify**

\[
f'(x) = \frac{x - 2x\ln(x)}{x^4}
\]

Factor out \( x \) in the numerator:

\[
f'(x) = \frac{x(1 - 2\ln(x))}{x^4}
\]

Cancel one \( x \) from numerator and denominator:

\[
f'(x) = \frac{1 - 2\ln(x)}{x^3}
\]

**Final Answer:**

\[
\mathbf{f'(x) = \frac{1 - 2\ln(x)}{x^3}}
\] 🚀

  </br>

</details>

</br>
