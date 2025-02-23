### Further differentiation II – product, quotient and chain rule

##### 1. What is the product rule for differentiating f(x) = g(x) \* h(x)?

- f'(x) = g'(x) ^x^ h(x) ^x^ h'(x)
- f'(x) = g'(x) ^x^ h'(x)
- f'(x) = g'(x) ^x^ h'(x)
- f'(x) = g(x) ^x^ h(x)

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
