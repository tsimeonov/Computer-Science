#### Logarithmic functions

##### 1. What is the inverse function of the exponential function a^x^?

- e^x^
- log~a~(x)
- x^a^
- ${\frac{1}{a^x}}$

<details>
  <summary>Solution</summary>

  </br>

The exponential function \( a^x \) and the logarithmic function \( \log_a(x) \) are inverses of each other. This means that if:

\[
y = a^x,
\]

then the inverse is given by:

\[
x = \log_a(y).
\]

Thus, the correct answer is:

- **log~a~(x)**

</details>

</br>

##### 2. Which property of logarithms is illustrated by the equation log~b~(M \* N) = log~b~(M) + log~b~(N)?

- Product rule
- Power rule
- Quotient rule
- Change of base formula

<details>
  <summary>Solution</summary>

  </br>

    The equation log~b~(M \* N) = log~b~(M) + log~b~(N) represents the Product Rule for logarithms

    Answer: Product rule

</details>

</br>

##### 3. For which value of the x does the logarithmic function log~b~(b^x^) = x hold true?

- 1
- b
- Any real number
- 0

<details>
  <summary>Solution</summary>

  </br>

The identity

\[
\log_b(b^x) = x
\]

holds for **any real value** of \( x \). This is a fundamental property of logarithms: applying the log base \( b \) to \( b^x \) simply returns \( x \).

**Answer: Any real number**

</details>

</br>

##### 4. What is the value of the log~2~(16)

- 2
- 3
- 4
- 5

<details>
  <summary>Solution</summary>

  </br>

To find the value of \(\log_2(16)\), notice that \(16 = 2^4\). Therefore:

\[
\log_2(16) = 4.
\]

**Answer: 4**

</details>

</br>

##### 5. If log~a~(x) = 3, what is the value of x?

- a^3^
- a
- ${\frac{1}{a^3}}$
- 3

<details>
  <summary>Solution</summary>

  </br>

**Problem Statement:**
If \(\log_a(x) = 3\), find the value of \(x\).

---

Step-by-Step Solution

1. **Recall the definition of a logarithm:**
   By definition, \(\log_a(x)\) answers the question: "To what power must we raise \(a\) to get \(x\)?"
   Mathematically, if \(\log_a(x) = y\), then it means \(a^y = x\).

2. **Apply this definition to the given problem:**
   We have \(\log_a(x) = 3\). According to the definition above, this directly tells us:
   \[
   a^3 = x.
   \]

3. **Conclusion:**
   Therefore, the value of \(x\) is:
   \[
   \boxed{x = a^3}.
   \]

---

**Answer:** \( x = a^3 \)

</details>

</br>

##### 6. Find the inverse function of f(x) = 3^2x+1^

<details>
  <summary>Solution</summary>

  </br>

To find the inverse of the function

\[
f(x) = 3^{2x + 1},
\]

we follow these steps:

---

## Step 1: Replace \(f(x)\) with \(y\)

Write the function as an equation:

\[
y = 3^{2x + 1}.
\]

---

#Step 2: Solve for \(x\) in terms of \(y\)

1. **Take the logarithm base 3** of both sides to "undo" the exponential:

   \[
   \log*{3}(y) = \log*{3}\bigl(3^{2x + 1}\bigr).
   \]

2. **Simplify the right-hand side** using the property \(\log\_{a}(a^k) = k\):

   \[
   \log\_{3}(y) = 2x + 1.
   \]

3. **Isolate \(x\)**:

   \[
   2x = \log*{3}(y) - 1
   \quad\Longrightarrow\quad
   x = \frac{\log*{3}(y) - 1}{2}.
   \]

---

#Step 3: Swap \(x\) and \(y\)

To write the inverse function, we replace \(y\) by \(x\) (because the input to the inverse function is the output of the original function):

\[
f^{-1}(x) = \frac{\log\_{3}(x) - 1}{2}.
\]

---

Final Answer

\[
\boxed{f^{-1}(x) = \frac{\log\_{3}(x) - 1}{2}}.
\]

</details>

</br>

##### 7. Prove that log~b~(M \* N) = log~b~(M) + log~b~(N) using properties of exponents

<details>
  <summary>Solution</summary>

  </br>

Below is a **step-by-step proof** of the logarithm property

\[
\log_b(M \cdot N) \;=\; \log_b(M) \;+\; \log_b(N)
\]

using the definition of logarithms and basic properties of exponents.

---

1. State the property to be proven

We want to show that:

\[
\log_b(M \cdot N) \;=\; \log_b(M) + \log_b(N),
\]

where \(b > 0\) and \(b \neq 1\), and \(M, N > 0\).

---

2. Express \(M\) and \(N\) in exponential form

1. Let \( \log_b(M) = a \). By definition of a logarithm, this means:
   \[
   b^a = M.
   \]

1. Let \( \log_b(N) = c \). Similarly, this means:
   \[
   b^c = N.
   \]

Hence, \(M\) and \(N\) can be written as powers of \(b\).

---

3. Multiply \(M\) and \(N\)

Using the expressions for \(M\) and \(N\), we have:

\[
M \cdot N \;=\; b^a \cdot b^c.
\]

By the **Exponent Product Rule** (\(b^a \cdot b^c = b^{a+c}\)), we get:

\[
M \cdot N = b^{\,a + c}.
\]

---

4. Take the logarithm (base \(b\)) of both sides

We want \(\log_b(M \cdot N)\), so we apply \(\log_b(\cdot)\) to the expression \(M \cdot N = b^{\,a + c}\):

\[
\log_b\bigl(M \cdot N\bigr)
\;=\;
\log_b\bigl(b^{\,a + c}\bigr).
\]

---

5. Use the property \(\log_b\bigl(b^k\bigr) = k\)

From the definition of logarithms, applying \(\log_b\) to \(b\) raised to any exponent simply returns that exponent:

\[
\log_b\bigl(b^{\,a + c}\bigr) = a + c.
\]

Thus,

\[
\log_b\bigl(M \cdot N\bigr) \;=\; a + c.
\]

---

6. Substitute back \(a = \log_b(M)\) and \(c = \log_b(N)\)

Recall our definitions:

- \( a = \log_b(M) \)
- \( c = \log_b(N) \)

Therefore,

\[
a + c
\;=\;
\log_b(M) \;+\; \log_b(N).
\]

Hence,

\[
\log_b(M \cdot N) \;=\; \log_b(M) \;+\; \log_b(N).
\]

---

7. Conclusion

We have shown, using the definition of logarithms and the properties of exponents, that:

\[
\boxed{\log_b(M \cdot N) = \log_b(M) + \log_b(N).}
\]

This completes the proof.

</details>

</br>

##### 8. Solve the equation log~2~(x - 1) + 3 = 5

<details>

  <summary>Solution</summary>

  </br>

**Problem Statement:**
Solve the equation

\[
\log\_{2}(x - 1) + 3 = 5.
\]

---

Step-by-Step Solution

1. **Isolate the logarithmic term:**
   Subtract 3 from both sides to get
   \[
   \log\_{2}(x - 1) = 5 - 3 = 2.
   \]

2. **Rewrite in exponential form:**
   By the definition of logarithms, \(\log\_{2}(y) = 2\) implies \(y = 2^2 = 4\).
   Therefore,
   \[
   x - 1 = 4.
   \]

3. **Solve for \(x\):**
   \[
   x = 4 + 1 = 5.
   \]

4. **Check the solution in the original equation:**
   - We need \(x - 1 > 0\) for \(\log\_{2}(x - 1)\) to be defined, which means \(x > 1\).
   - Our solution \(x = 5\) is indeed greater than 1, so it is valid.

---

Final Answer

\[
\boxed{x = 5}.
\]

</details>

</br>

##### 9. Given f(x) = 2^x+3^, find f^-1^(8)

<details>
  <summary>Solution</summary>

  </br>

First, we need to interpret the problem correctly:

We have a function

\[
f(x) = 2^x + 3,
\]

and we want to find

\[
f^{-1}(8).
\]

In other words, we're looking for the \(x\) such that \(f(x) = 8\).

---

## Step-by-Step Solution

1. **Set up the equation for \(f(x) = 8\):**

   \[
   2^x + 3 = 8.
   \]

2. **Isolate the exponential term:**

   \[
   2^x = 8 - 3 = 5.
   \]

3. **Take the logarithm (base 2) of both sides to solve for \(x\):**

   \[
   x = \log_2(5).
   \]

Hence, the value of \(x\) that makes \(f(x) = 8\) is

\[
x = \log_2(5).
\]

---

## Final Answer

\[
f^{-1}(8) = \log_2(5).
\]

</details>

</br>

##### 10. Find the value of log~5~(125)

<details>
  <summary>Solution</summary>

  </br>

We want to find:

\[
\log\_{5}(125).
\]

Notice that \(125\) can be expressed as a power of \(5\):

\[
125 = 5^3.
\]

By the definition of logarithms:

\[
\log\_{5}(5^3) = 3.
\]

Thus,

\[
\boxed{\log\_{5}(125) = 3}.
\]

</details>

</br>

##### 11. Solve x in the equation 3^2-1^ = 27

<details>
  <summary>Solution</summary>

  </br>

It appears there might be a typographical issue with the expression \(3^2 - 1^ = 27\). A common type of problem involves solving for \(x\) in an exponential equation like

\[
3^{2x - 1} = 27.
\]

Below is how you would solve \(3^{2x - 1} = 27\). If your original problem is different, you can adapt the steps accordingly.

---

Problem (Assuming Typo)

Solve for \(x\) in the equation:

\[
3^{2x - 1} = 27.
\]

---

Step-by-Step Solution

1. **Rewrite 27 as a power of 3.**

   We know that:
   \[
   27 = 3^3.
   \]

2. **Set the exponents equal.**

   Since \(3^{2x - 1} = 3^3\), and the bases (3) are the same, it must be that:
   \[
   2x - 1 = 3.
   \]

3. **Solve for \(x\).**

   \[
   2x - 1 = 3
   \quad\Longrightarrow\quad
   2x = 3 + 1 = 4
   \quad\Longrightarrow\quad
   x = 2.
   \]

---

Final Answer

\[
\boxed{x = 2}.
\]

---

If your original equation is different

- If you intended \(3^2 - 1 = 27\), that would simplify to \(9 - 1 = 8\), which is not true, so there would be no solution.
- If it was \(3^{2 - x} = 27\), you would set \(2 - x = 3\), and solve for \(x\) accordingly.

However, based on typical problems, **\(3^{2x - 1} = 27\)** is the most likely correct interpretation, whose solution is \(x = 2\).

</details>

</br>

##### 12. If log~4~(x) = 2, what is the value of x?

- 2
- 8
- 16
- 4

<details>
  <summary>Solution</summary>

  </br>

We have:

\[
\log_4(x) = 2.
\]

By the definition of logarithms, \(\log_4(x) = 2\) means:

\[
x = 4^2 = 16.
\]

\[
\boxed{16}
\]

</details>

</br>

##### 13. Express the logarithmic equation log~7~(49) = x in exponential form and solve for x

<details>
  <summary>Solution</summary>

  </br>

Step 1: Express the Logarithmic Equation in Exponential Form\*\*
The equation given is:

\[
\log_7(49) = x.
\]

By definition of logarithms, \(\log_b(a) = c\) is equivalent to \(b^c = a\). Thus,

\[
\log_7(49) = x
\quad\Longleftrightarrow\quad
7^x = 49.
\]

---

Step 2: Recognize 49 as a Power of 7\*\*
We know that:

\[
49 = 7^2.
\]

So we rewrite the equation as:

\[
7^x = 7^2.
\]

---

Step 3: Equate the Exponents\*\*
Since the bases (7) are the same and both sides are positive,

\[
x = 2.
\]

---

Final Answer
\[
\boxed{\log_7(49) = x \quad\Longleftrightarrow\quad 7^x = 49 \quad\Longrightarrow\quad x = 2.}
\]

</details>

</br>

##### 14. Given the function f(x) = log~2~(x-3), find the value if x when f(x) = 3

<details>
  <summary>Solution</summary>

  </br>

We are given the function

\[
f(x) = \log\_{2}(x - 3)
\]

and asked to find the value of \(x\) when \(f(x) = 3\).

---

Step-by-Step Solution

1. **Set up the equation:**

   \[
   \log\_{2}(x - 3) = 3.
   \]

2. **Rewrite in exponential form (base 2):**

   \[
   x - 3 = 2^3 = 8.
   \]

3. **Solve for \(x\):**

   \[
   x = 8 + 3 = 11.
   \]

4. **Check for validity (domain check):**

   - The argument of the logarithm \((x - 3)\) must be positive, that is \(x - 3 > 0 \Rightarrow x > 3\).
   - Our solution \(x = 11\) is indeed greater than 3, so it is valid.

---

Final Answer

\[
\boxed{x = 11}.
\]

</details>

</br>

##### 15. Determine the value of x for which 2^x+1^ = 32

<details>
  <summary>Solution</summary>

  </br>

The equation as written, **2^x+1^ = 32**, is ambiguous. There are two common ways it might have been intended:

---

1. Interpretation: \(2^x + 1 = 32\)

If the equation is

\[
2^x + 1 = 32,
\]

then

\[
2^x = 31 \quad\Longrightarrow\quad x = \log_2(31).
\]

Since \(2^5 = 32\), and 31 is just one less than 32, there is no integer solution. Numerically,

\[
x \approx \log_2(31) \approx 4.954.
\]

---

2. Interpretation: \(2^{x + 1} = 32\)

If the equation was meant to be

\[
2^{(x+1)} = 32,
\]

then we notice that \(32 = 2^5\). Matching exponents gives

\[
x + 1 = 5
\quad\Longrightarrow\quad
x = 4,
\]

which is a nice integer solution.

---

Which is correct?

- **If the original problem expects an integer solution,** it was almost certainly meant to be \(2^{(x+1)} = 32\), yielding \(\boxed{x = 4}\).
- **If the equation was truly \(2^x + 1 = 32,\)** then the solution is \(\boxed{x = \log_2(31)}\approx 4.954\), which is not an integer.

Without additional context, **\(2^{(x+1)}=32\)** is the more likely intended form, since it leads to the neat integer answer \(x = 4\).

</details>

</br>
