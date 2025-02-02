### Trigonometric functions, plots and properties

1. **Which of the following statements is true about the cosine function?**

- Cosine is an odd function
- Cosine 𝜃 is equal to cosine of -𝜃
- Cosine of 𝜃 has a period of ∏
- Cosine of -𝜃 is equal to -cos(𝜃)

<details>
  <summary>Solution</summary>

The correct statement is:

**Cosine 𝜃 is equal to cosine of -𝜃**

Explanation:\*\*

1. **Cosine is an odd function:**
   This is false. A function \( f(\theta) \) is odd if \( f(-\theta) = -f(\theta) \). However, cosine is an even function because \( \cos(-\theta) = \cos(\theta) \).

2. **Cosine 𝜃 is equal to cosine of -𝜃:**
   This is true. As mentioned, cosine is an even function, so \( \cos(-\theta) = \cos(\theta) \).

3. **Cosine of 𝜃 has a period of ∏:**
   This is false. The cosine function has a period of \( 2\pi \), not \( \pi \). (While some trigonometric functions or combinations might have a period of \( \pi \), the standard cosine function does not.)

4. **Cosine of -𝜃 is equal to -cos(𝜃):**
   This is false. Again, since cosine is even, \( \cos(-\theta) = \cos(\theta) \), not \(-\cos(\theta)\).

Thus, the only true statement is that cosine of 𝜃 is equal to cosine of -𝜃.

</details>

</br>

2. **Prove that the cosine function is an even function**

<details>
  <summary>Solution</summary>
There are several ways to prove that the cosine function is an even function. Below are three common approaches:

---

**1. Using the Unit Circle**

Recall that on the unit circle, for an angle \( \theta \), the coordinates of the corresponding point are given by \((\cos\theta, \sin\theta)\).

- When you consider the angle \(-\theta\), you are reflecting the point across the \(x\)-axis. The new point becomes \((\cos(-\theta), \sin(-\theta))\).
- Since reflection across the \(x\)-axis leaves the \(x\)-coordinate unchanged and flips the sign of the \(y\)-coordinate, we have:
  \[
  \cos(-\theta) = \cos(\theta) \quad \text{and} \quad \sin(-\theta) = -\sin(\theta).
  \]

This shows directly that the cosine function is even:
\[
\cos(-\theta) = \cos(\theta).
\]

---

**2. Using the Taylor Series Expansion**

The cosine function can be expressed as a Taylor series around \(0\):
\[
\cos\theta = \sum\_{n=0}^{\infty} \frac{(-1)^n \theta^{2n}}{(2n)!}.
\]

Notice that every term in this series involves \(\theta\) raised to an even power. This means:
\[
\cos(-\theta) = \sum*{n=0}^{\infty} \frac{(-1)^n (-\theta)^{2n}}{(2n)!}.
\]
Since \((- \theta)^{2n} = \theta^{2n}\) (because the exponent is even), the series becomes:
\[
\cos(-\theta) = \sum*{n=0}^{\infty} \frac{(-1)^n \theta^{2n}}{(2n)!} = \cos(\theta).
\]

Thus, the Taylor series shows that:
\[
\cos(-\theta) = \cos(\theta).
\]

---

**3. Using Euler’s Formula**

Euler’s formula states that:
\[
e^{i\theta} = \cos\theta + i\sin\theta.
\]

From Euler’s formula, we can derive an expression for cosine:
\[
\cos\theta = \frac{e^{i\theta} + e^{-i\theta}}{2}.
\]

Now, consider \(\cos(-\theta)\):
\[
\cos(-\theta) = \frac{e^{-i\theta} + e^{i\theta}}{2}.
\]
Notice that this expression is identical to the expression for \(\cos\theta\):
\[
\cos(-\theta) = \frac{e^{i\theta} + e^{-i\theta}}{2} = \cos\theta.
\]

---

**Conclusion**

Each of the three methods—using the unit circle, Taylor series, or Euler's formula—demonstrates that:
\[
\cos(-\theta) = \cos\theta,
\]
which is the definition of an even function. Therefore, the cosine function is indeed an even function.

</details>

</br>

3. **What is the amplitude of the function y = 3sin(x)?**

- 2∏
- 1
- ∏
  3

<details>
  <summary>Solution</summary>

</br>

The amplitude of a sine function in the form \( y = A\sin(x) \) is given by the absolute value of \( A \). In this case, \( A = 3 \), so the amplitude is:

\[
\text{Amplitude} = |3| = 3.
\]

Thus, the correct answer is **3**.

</details>

</br>

4. **Derive the identity for sin(2𝛼), using the angle addition formula.**

<details>
  <summary>Solution</summary>

</br>

To derive the identity for \(\sin(2\alpha)\) using the angle addition formula, follow these steps:

1. **Start with the angle addition formula for sine:**

   \[
   \sin(\alpha + \beta) = \sin\alpha \cos\beta + \cos\alpha \sin\beta.
   \]

2. **Set \(\beta = \alpha\):**

   \[
   \sin(\alpha + \alpha) = \sin\alpha \cos\alpha + \cos\alpha \sin\alpha.
   \]

3. **Simplify the left-hand side:**

   \[
   \sin(2\alpha) = \sin\alpha \cos\alpha + \cos\alpha \sin\alpha.
   \]

4. **Combine like terms:**

   Since \(\sin\alpha \cos\alpha\) appears twice, we have:

   \[
   \sin(2\alpha) = 2\sin\alpha \cos\alpha.
   \]

Thus, the derived identity is:

\[
\boxed{\sin(2\alpha) = 2\sin\alpha \cos\alpha.}
\]

</details>

</br>

5. **If y = sin(2x), what is the period of the function?**

- 2∏
- 4∏
- $\frac{∏}{2}$
- ∏

<details>
  <summary>Solution</summary>

</br>

The general formula for the period of the function \( \sin(kx) \) is:

\[
\text{Period} = \frac{2\pi}{|k|}.
\]

For the function \( y = \sin(2x) \), we have \( k = 2 \). Thus, the period is:

\[
\text{Period} = \frac{2\pi}{2} = \pi.
\]

So, the correct answer is **\(\pi\)**.

</details>

</br>

6. **Sketch the graph of y = sin(2x) and explain how it differs from the graph of y = sin(x)**

<details>
  <summary>Solution</summary>

</br>

<img src="./output.png" width="550px"/>

**Explanation of the Graph**

The plot compares the graphs of \( y = \sin(x) \) (dashed line) and \( y = \sin(2x) \) (solid line). Here’s how they differ:

1. **Period Change (Horizontal Compression)**

   - The period of \( y = \sin(x) \) is \( 2\pi \), meaning it completes one full cycle over \( 2\pi \).
   - The period of \( y = \sin(2x) \) is \( \pi \), meaning it completes one full cycle in half the distance.
   - As a result, \( y = \sin(2x) \) oscillates twice as frequently as \( y = \sin(x) \), compressing the waveform horizontally.

2. **Same Amplitude**

   - Both functions oscillate between -1 and 1, meaning their amplitude remains **unchanged**.

3. **Frequency Doubling**
   - Since the function \( y = \sin(2x) \) completes two full cycles in the same space where \( y = \sin(x) \) completes one, it has **twice the frequency**.

**Summary of Differences**

| Feature       | \( y = \sin(x) \)      | \( y = \sin(2x) \)                           |
| ------------- | ---------------------- | -------------------------------------------- |
| **Period**    | \( 2\pi \)             | \( \pi \)                                    |
| **Amplitude** | 1                      | 1                                            |
| **Frequency** | 1 cycle per \( 2\pi \) | 2 cycles per \( 2\pi \)                      |
| **Effect**    | Normal wave            | Horizontally compressed wave (twice as fast) |

The main takeaway is that **\( y = \sin(2x) \) is a horizontally compressed version of \( y = \sin(x) \), with twice the frequency but the same amplitude.**

</details>

</br>
