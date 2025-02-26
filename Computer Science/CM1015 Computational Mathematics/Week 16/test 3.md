#### Limits and differentiation - summative quiz

##### 1. What is the value of lim~x->2~ ${\frac{x^2 - 4}{x-2}}$

If the correct answer of the limit 1, then insert only the value 1, or if the answer is -1, then insert -1 only without any space.

<details>
  <summary>Solution</summary>

To evaluate the limit:

\[
\lim\_{{x \to 2}} \frac{x^2 - 4}{x - 2}
\]

**Step 1: Factor the Numerator**
The numerator can be factored as:

\[
x^2 - 4 = (x - 2)(x + 2)
\]

So the given limit simplifies to:

\[
\lim\_{{x \to 2}} \frac{(x - 2)(x + 2)}{x - 2}
\]

**Step 2: Cancel the Common Factor**
For \( x \neq 2 \), we can cancel \( (x - 2) \):

\[
\lim\_{{x \to 2}} x + 2
\]

**Step 3: Substitute \( x = 2 \)**
\[
2 + 2 = 4
\]
**Final Answer:**
\[
4
\]

  </br>

</details>

</br>

##### 2. Calculate the value of the following limit:

lim~x->2~ f(x) = ${\frac{x^2+4x-12}{x^2-2x}}$

If the correct answer of the limit 1, then insert only the value 1, or if the answer is -1, then insert -1 only without any space.

<details>
  <summary>Solution</summary>

To evaluate the limit:

\[
\lim\_{{x \to 2}} \frac{x^2 + 4x - 12}{x^2 - 2x}
\]

**Step 1: Factor the Numerator and Denominator**

- Factor the numerator \( x^2 + 4x - 12 \):

\[
x^2 + 4x - 12 = (x + 6)(x - 2)
\]

- Factor the denominator \( x^2 - 2x \):

\[
x^2 - 2x = x(x - 2)
\]

Now, the expression becomes:

\[
\frac{(x + 6)(x - 2)}{x(x - 2)}
\]

**Step 2: Cancel the Common Factor**
For \( x \neq 2 \), cancel \( (x - 2) \):

\[
\frac{x + 6}{x}
\]

**Step 3: Substitute \( x = 2 \)**
\[
\frac{2 + 6}{2} = \frac{8}{2} = 4
\]
**Final Answer:**
\[
4
\]

  </br>

</details>

</br>

##### 3. What is the limit of the function lim~x->5~ f(x) ${\frac{x^2+3x-10}{x+5}}$

If the correct answer of the limit 1, then insert only the value 1, or if the answer is -1, then insert -1 only without any space.

<details>
  <summary>Solution</summary>

To evaluate:

\[
\lim\_{{x \to 5}} \frac{x^2 + 3x - 10}{x + 5}
\]

**Step 1: Factor the Numerator**
The numerator \( x^2 + 3x - 10 \) can be factored:

\[
x^2 + 3x - 10 = (x - 2)(x + 5)
\]

So the function becomes:

\[
\frac{(x - 2)(x + 5)}{x + 5}
\]

**Step 2: Cancel the Common Factor**
For \( x \neq -5 \), we can cancel \( (x + 5) \):

\[
f(x) = x - 2
\]
**Step 3: Substitute \( x = 5 \)**
\[
f(5) = 5 - 2 = 3
\]

**Final Answer:**
\[
3
\]

Since the result is **not 1 or -1**, I will not insert any value. 🚀

  </br>

</details>

</br>

##### 4. What is the limit of the function lim~x->5~ f(x) ${\frac{x^3-6x^2+25}{x-5}}$

If the correct answer of the limit 1, then insert only the value 1, or if the answer is -1, then insert -1 only without any space.

<details>
  <summary>Solution</summary>

To evaluate:

\[
\lim\_{{x \to 5}} \frac{x^3 - 6x^2 + 25}{x - 5}
\]

**Step 1: Direct Substitution**

Substituting \( x = 5 \):

\[
\frac{5^3 - 6(5^2) + 25}{5 - 5}
\]

\[
\frac{125 - 6(25) + 25}{0}
\]

\[
\frac{125 - 150 + 25}{0} = \frac{0}{0}
\]

Since this results in an **indeterminate form**, we proceed with **polynomial division**.

**Step 2: Perform Polynomial Division**

We divide \( x^3 - 6x^2 + 25 \) by \( x - 5 \) using **synthetic division**:

#**Synthetic Division Setup:**

```
 5 |  1   -6    0   25
   |      5   -5   -25
   --------------------
     1   -1   -5    0
```

The quotient is:

\[
x^2 - x - 5
\]

**Step 3: Evaluate the Limit**

Since:

\[
\frac{x^3 - 6x^2 + 25}{x - 5} = x^2 - x - 5
\]

Now, substituting \( x = 5 \):

\[
5^2 - 5 - 5 = 25 - 5 - 5 = 15
\]

**Final Answer:**

\[
15
\]

Since the result is **not 1 or -1**, I will not insert any value. 🚀

  </br>

</details>

</br>

##### 5. A function defined by

\(
f(x) =
\begin{cases}
nx + 2, & \text{if } x \geq 2 \\
x^2 + 8, & \text{if } x < 2
\end{cases}
\)

For what value of n is lim~x->2~f(x) defined?

If the correct answer of the limit 1, then insert only the value 1, or if the answer is -1, then insert -1 only without any space.

<details>
  <summary>Solution</summary>

For the limit \(\lim\_{x \to 2} f(x)\) to be defined, the left-hand limit and right-hand limit must be equal.

Step 1: Compute the Left-Hand Limit
The left-hand limit is:
\[
\lim*{x \to 2^-} f(x) = \lim*{x \to 2^-} (x^2 + 8)
\]
Substituting \( x = 2 \):
\[
2^2 + 8 = 4 + 8 = 12
\]

Step 2: Compute the Right-Hand Limit
The right-hand limit is:
\[
\lim*{x \to 2^+} f(x) = \lim*{x \to 2^+} (nx + 2)
\]
Substituting \( x = 2 \):
\[
n(2) + 2 = 2n + 2
\]

Step 3: Equate the Limits
For the limit to be defined, the left-hand and right-hand limits must be equal:
\[
12 = 2n + 2
\]

Step 4: Solve for \( n \)
\[
12 - 2 = 2n
\]
\[
10 = 2n
\]
\[
n = 5
\]

Thus, the required value of \( n \) is **5**.

  </br>

</details>

</br>

##### 6. Consider the function

\(
f(x) =
\begin{cases}
x^3 + 2, & \text{if } x <2 \\
5, & \text{if } x = 2 \\
x^2 + 6, & \text{if } x>2
\end{cases}
\)

Select all the correct statements

- The limit of the function is equal to 10
- The function value us equal to 5
- The limit exists as x = 2
- It is discontinuous at x = 2
- The function value is equal to 2
- The limit does not exists at x = 2
- None of the other options is correct

<details>
  <summary>Solution</summary>

  </br>

</details>

</br>
