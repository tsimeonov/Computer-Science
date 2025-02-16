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

<details>
  <summary>Solution</summary>

  </br>

First, let's restate the problem clearly:

> **Problem**: Find the value of \(x\) that satisfies
> \[
> \log(x) = 4.
> \]
> Then, determine which of the given statements are correct.

The difficulty here is that the base of the logarithm \(\log(\cdot)\) is **not explicitly stated**. By convention in many contexts (particularly in high-school level algebra courses in certain regions), \(\log(x)\) often means \(\log*{10}(x)\). In higher mathematics or certain contexts, \(\log(x)\) might mean \(\ln(x)\) (log base \(e\)). Meanwhile, some textbooks or problems might use \(\log\) to mean \(\log*{2}\). Without a clear base, we have an ambiguity.

---

1. If \(\log\) means \(\log\_{10}\)

- The equation \(\log\_{10}(x) = 4\) means \(x = 10^4 = 10000\).
- Checking the provided options:

  1. None of the other options is correct
  2. \(4 = 2^2\) and hence \(\log\_{2}(x) = 4\) means \(x=2\)
  3. \(x = 16\)
  4. \(x = 2\)

  None of these is \(x = 10000\). Therefore, if the base is \(10\), the correct solution \(x=10000\) does **not** appear in the list. In that scenario, the only truthful statement would be

  > **"None of the other options is correct."**

---

2. If \(\log\) means \(\log\_{2}\)

- The equation \(\log\_{2}(x) = 4\) means \(x = 2^4 = 16\).
- Checking the same options with this interpretation:

  1. None of the other options is correct
  2. \(4 = 2^2\) and hence \(\log*{2}(x) = 4\) means \(x=2\) (This is **incorrect** reasoning; if \(\log*{2}(x)=4\), then \(x=16\), not 2.)
  3. \(x = 16\) (This is **correct** for \(\log\_{2}(x)=4\).)
  4. \(x = 2\) (Incorrect for \(\log\_{2}(x)=4\).)

  In this scenario, the correct statement is \(x = 16\), so statement #3 is true and statement #1 ("None of the other options is correct") would be false—because one of the other statements (\#3) _is_ correct.

---

3. Which Interpretation Is Most Likely?

- If a problem simply writes \(\log(x)\) without a base, the most common “default” in many high-school or standard algebra texts is \(\log\_{10}\). In that case, \(x = 10^4 = 10000\), and it matches **none** of the provided numerical options, so “None of the other options” would be correct.
- However, the presence of statements referring explicitly to \(\log\_{2}(x)\) and powers of 2 (like \(4 = 2^2\)) strongly suggests the problem _might_ be intending to use base 2.
- Indeed, the statement _"4 = 2^2 and hence \(\log\_{2}(x) = 4\) means \(x=2\)"_ is obviously a _wrong_ conclusion (it should yield \(x=16\)), which implies the question revolves around base 2 logs.

Given the nature of the options (mentioning \(2^2\) and so forth), it is very likely the problem intended:

\[
\log\_{2}(x) = 4.
\]

Hence the correct solution is

\[
x = 2^4 = 16.
\]

---

4. Analyzing Each Provided Statement

Let’s match each of the given statements with \(\log\_{2}(x) = 4\):

1. **None of the other options is correct**
   This would be true _only if_ there were no correct statements among the rest. But we will see that one of them is correct.

2. **\(4 = 2^2\) and hence \(\log\_{2}(x) = 4\) means \(x=2\)**

   - This is incorrect reasoning. If \(\log\_{2}(x)=4\), then \(x=2^4=16\), _not_ 2. So this statement is false.

3. **\(x=16\)**

   - This is exactly the correct solution for \(\log\_{2}(x)=4\). So this statement is **true** if the base is 2.

4. **\(x=2\)**
   - As discussed, that would mean \(\log\_{2}(2)=1\), not 4. So this is incorrect.

Therefore, assuming the base is 2 (which all the statements seem to hint at), **the correct statement is** \(x=16\). Choosing “None of the other options is correct” would be wrong, because there _is_ a correct option (\(x=16\)).

---

5. Conclusion

- If the base is understood to be 10, the solution is \(x=10^4=10000\), not in the list, so “None of the other options is correct” would be the right choice.
- If the base is understood to be 2, the solution is \(x=16\), which _is_ in the list, making \(x=16\) the correct statement.

Given that two statements explicitly mention \(\log\_{2}\) and powers of 2, the problem almost certainly wants you to interpret “\(\log\)” as base 2.

Thus, the best interpretation is:

\[
\log\_{2}(x) = 4
\quad\Longrightarrow\quad
x = 16.
\]

So the correct statement(s) from the list is/are:

- \(x = 16\).

All others are incorrect under the base-2 assumption.

</details>

</br>

##### 5. Calculate log~2~8

Select all correct statements

- 8 = 2^3^
- log~2~8 = -4
- log~2~8 = 0
- 2 = 8^-4^
- log~2~8 = -1
- None of the other options is correct
- log~2~8 = 3

<details>
  <summary>Solution</summary>

  </br>

Your evaluation is **correct**! The correct answers are:

✅ **8 = 2³** (True, because 8 can be rewritten as \( 2^3 \))
✅ **log₂(8) = 3** (True, by logarithm properties)

All other options are **incorrect**:

❌ **log₂(8) = -4** (False, the correct value is 3)
❌ **log₂(8) = 0** (False, because \( 2^0 = 1 \), not 8)
❌ **2 = 8⁻⁴** (False, because \( 8^{-4} = \frac{1}{8^4} \), which is very small, not 2)
❌ **log₂(8) = -1** (False, because \( 2^{-1} = \frac{1}{2} \), not 8)
❌ **None of the other options is correct** (False, because two options are correct)

---

### **Final Answer:**

✔ **8 = 2³**
✔ **log₂(8) = 3**

</details>

</br>
