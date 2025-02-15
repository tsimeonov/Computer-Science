### Exponential and logarithmic functions

##### 1. What is the value of 7^-4^

Select all the correct answers:

- ${\frac{1}{7 * 7^3}}$
- ${\frac{1}{4^7}}$
- 0.0004164931
- 0.0000610352

<details>
  <summary>Solution</summary>

  </br>

We want to evaluate:

\[
7^{-4}.
\]

1. **Rewrite \(7^{-4}\) using exponents:**
   By definition of negative exponents,
   \[
   7^{-4} = \frac{1}{7^4}.
   \]

2. **Check each option given:**

   - \(\displaystyle \frac{1}{7 \times 7^3}\)
     Since \(7^4 = 7 \times 7^3,\) it follows that
     \[
     \frac{1}{7 \times 7^3} = \frac{1}{7^4}.
     \]
     This **is** a correct representation of \(7^{-4}\).

   - \(\displaystyle \frac{1}{4^7}\)
     This would be \(\frac{1}{4^7} = \frac{1}{16384}\), which does **not** equal \(\tfrac{1}{2401}\). So this is **not** correct.

   - \(0.0004164931\)
     Numerically,
     \[
     \frac{1}{2401} \approx 0.0004164931 \quad(\text{to 10 decimal places}),
     \]
     which matches \(7^{-4}\). So this **is** a correct approximation.

   - \(0.0000610352\)
     This is approximately \(\tfrac{1}{16384}\), not \(\tfrac{1}{2401}\). So it is **not** correct.

---

Final Answer

The correct representations/values for \(7^{-4}\) among the options given are:

1. \(\displaystyle \frac{1}{7 \times 7^3}\) (exact form)
2. \(0.0004164931\) (approximate decimal form)

</details>

</br>

##### 2. The value of x, solve for the variable

3^x^ - 1 = 4

Select all the correct answers:

- x = 3
- x = ${\frac{log5}{log3}}$
- x = ${\frac{log3}{log5}}$
- x = ${\frac{1}{3}}$
- ≈ 1.46
- ≈ 0.68

<details>
  <summary>Solution</summary>

  </br>

We have the equation:

\[
3^x - 1 = 4.
\]

---

Step 1: Isolate the exponential term

\[
3^x = 4 + 1 = 5.
\]

---

Step 2: Solve for \(x\)

Rewrite in logarithmic form:

\[
x = \log_3(5).
\]

Using the change of base formula, this is equivalent to:

\[
x = \frac{\log(5)}{\log(3)},
\]

where \(\log\) can be \(\ln\) (natural log) or \(\log\_{10}\) (common log); the base doesn’t matter as long as it’s consistent.

---

Step 3: Approximate the value

Numerically:

\[
x \approx \frac{1.6094}{1.0986} \approx 1.4649 \approx 1.46.
\]

---

Step 4: Match with the given options

1. **\(x = 3\):**
   Substituting \(x=3\) would give \(3^3 - 1 = 27 - 1 = 26 \neq 4.\) Not correct.

2. **\(x = \tfrac{\log(5)}{\log(3)}\):**
   This is exactly the solution we found. **Correct.**

3. **\(x = \tfrac{\log(3)}{\log(5)}\):**
   This would be \(\log_5(3)\), which solves \(5^x=3\), not \(3^x=5.\) Not correct.

4. **\(x = \tfrac{1}{3}\):**
   Then \(3^{1/3} - 1 \approx 1.442 - 1 = 0.442 \neq 4.\) Not correct.

5. **\(x \approx 1.46\):**
   This matches our approximate calculation. **Correct.**

6. **\(x \approx 0.68\):**
   Not correct for \(3^x=5.\)

---

Final Answer

All correct solutions/values to the equation \(3^x - 1 = 4\) among the given options are:

1. \( \displaystyle x = \frac{\log(5)}{\log(3)}\)
2. \( x \approx 1.46.\)

</details>

</br>

##### 3. What is the value of x

0.5^x^ = 10

- x = ${\frac{log10}{log0.5}}$
- x ≈ -3.32
- x = ${\frac{10}{5}}$ = 2
- x = ${\frac{log0.5}{log10}}$
- x ≈ 0.3
- None of the other options is correct

<details>
  <summary>Solution</summary>

  </br>

We need to solve the equation:

\[
(0.5)^x = 10.
\]

---

1. Rewrite \(0.5\) in exponential form

Recall that \(0.5 = \tfrac{1}{2} = 2^{-1}\). So we have:

\[
(0.5)^x = (2^{-1})^x = 2^{-x}.
\]

Hence, the equation becomes:

\[
2^{-x} = 10.
\]

---

2. Solve using logarithms

Take the logarithm (let’s use \(\log\) base 10 for convenience) of both sides:

\[
\log\bigl(2^{-x}\bigr) = \log(10).
\]

Use the property \(\log(a^b) = b \,\log(a)\):

\[
-\,x \,\log(2) = \log(10).
\]

Thus,

\[
x = -\frac{\log(10)}{\log(2)}.
\]

But we also can write this in terms of \(0.5\), since \( \log(0.5) = \log\bigl(2^{-1}\bigr) = -\log(2)\). Hence,

\[
x = \frac{\log(10)}{\log(0.5)}.
\]

Given that \(\log*{10}(10) = 1\) and \(\log*{10}(0.5) \approx -0.3010\), numerically:

\[
x \approx \frac{1}{-0.3010} \approx -3.3219 \ (\text{rounded to } -3.32).
\]

---

3. Match with the provided options

- **\(x = \tfrac{\log(10)}{\log(0.5)}\)**
  This exactly matches our derived expression and is correct.

- **\(x \approx -3.32\)**
  This is the correct approximate decimal value.

- **\(x = \tfrac{10}{5} = 2\)**
  Not correct. Substituting \(x = 2\) yields \((0.5)^2 = 0.25 \neq 10\).

- **\(x = \tfrac{\log(0.5)}{\log(10)}\)**
  This would invert our correct fraction, which would solve \( (0.5)^{\frac{\log(0.5)}{\log(10)}} = 10\), but that’s not the same equation. Not correct.

- **\(x \approx 0.3\)**
  Substituting \(x = 0.3\) gives \((0.5)^{0.3} \approx 0.81\), definitely not 10. Not correct.

- **None of the other options is correct**
  We have already found correct matches above, so this is not the choice.

---

4. Final Answer

The correct solutions from the list are:

\[
x = \frac{\log(10)}{\log(0.5)}
\quad\text{and}\quad
x \approx -3.32.
\]

</details>

</br>

##### 4. Find x such that log~(x)~ = 4

Select all correct statements:

- None of other options is correct
- 4 = 2^2^ and hence log~2~(x) = 4 means x = 2
- x = 16
- x = 2
