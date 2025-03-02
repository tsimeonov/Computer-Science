### Vectors and vector spaces

##### 1. Which of the following is NOT a way to represent a vector in two dimensions?

- Cartesian coordinates (x,y)
- Parametric form (t)
- Polar coordinates (r, θ)
- Unit vector form (i,j)

<details>
  <summary>Solution</summary>

The correct answer is:

**- Parametric form (t)**

Explanation:

1. **Cartesian coordinates (x, y)** – A vector in two dimensions can be represented by its components along the x and y axes, such as \( (x, y) \).
2. **Polar coordinates (r, θ)** – A vector can also be represented using its magnitude \( r \) (length) and direction \( \theta \) (angle).
3. **Unit vector form (i, j)** – A vector can be expressed in terms of unit vectors \( \hat{i} \) and \( \hat{j} \) as \( x\hat{i} + y\hat{j} \).

However, **parametric form (t)** is typically used to describe a curve or a line rather than a single vector. Parametric equations define how coordinates change with respect to a parameter \( t \), rather than directly describing a vector itself.

  </br>

</details>

</br>

##### 2. Which property of vectors states that the sum of vectors is independent of the grouping of the vectors?

- Associativity
- Identity
- Distributivity
- Commutativity

<details>
  <summary>Solution</summary>

The correct answer is:

**- Associativity**

Explanation:

The **associative property** of vector addition states that the sum of vectors is independent of how they are grouped. Mathematically, this is expressed as:

\[
(\mathbf{A} + \mathbf{B}) + \mathbf{C} = \mathbf{A} + (\mathbf{B} + \mathbf{C})
\]

This means that no matter how we group the vectors when adding them, the result remains the same.

Explanation of Other Options:

- **Identity**: Refers to the existence of an additive identity, which is the **zero vector** \( \mathbf{0} \), such that \( \mathbf{A} + \mathbf{0} = \mathbf{A} \).
- **Distributivity**: Refers to how scalar multiplication distributes over vector addition: \( k(\mathbf{A} + \mathbf{B}) = k\mathbf{A} + k\mathbf{B} \).
- **Commutativity**: States that vector addition is independent of the order of addition: \( \mathbf{A} + \mathbf{B} = \mathbf{B} + \mathbf{A} \).

Thus, the property that ensures the sum of vectors is independent of grouping is **Associativity**.

  </br>

</details>

</br>

##### 3. In the context of vector operations, what does the dot product of the two perpendicular vectors equal to ?

- 1
- 0
- -1
- Undefined

##### 4. Which vector property states that the dot product is distributive?

- Distributivity
- Identity
- Commutativity
- Associativity

<details>
  <summary>Solution</summary>

The correct answer is:

**- Distributivity**
Explanation:

The **distributive property** of the dot product states that for any three vectors **\(\mathbf{A}\)**, **\(\mathbf{B}\)**, and **\(\mathbf{C}\)**:

\[
\mathbf{A} \cdot (\mathbf{B} + \mathbf{C}) = \mathbf{A} \cdot \mathbf{B} + \mathbf{A} \cdot \mathbf{C}
\]

This means that the dot product distributes over vector addition.

Explanation of Other Options:

- **Identity**: Refers to the existence of an identity element (such as the zero vector) in vector operations.
- **Commutativity**: The dot product is commutative, meaning \( \mathbf{A} \cdot \mathbf{B} = \mathbf{B} \cdot \mathbf{A} \), but this does not describe its distributive property.
- **Associativity**: The dot product is **not** associative in general (i.e., \( \mathbf{A} \cdot (\mathbf{B} \cdot \mathbf{C}) \) is not valid since \( \mathbf{B} \cdot \mathbf{C} \) is a scalar, not a vector).

Thus, the **distributive property** is the correct answer.

  </br>

</details>

</br>

##### 5. What is the result of the cross product of two parallel vectors?

- Zero vector
- Undefined
- A scalar
- A vector perpendicular to both

<details>
  <summary>Solution</summary>

The correct answer is:

**- Zero vector**

Explanation:

The **cross product** of two vectors **\(\mathbf{A} \times \mathbf{B}\)** is given by the formula:

\[
\mathbf{A} \times \mathbf{B} = |\mathbf{A}| |\mathbf{B}| \sin\theta \ \hat{\mathbf{n}}
\]

where:

- \( |\mathbf{A}| \) and \( |\mathbf{B}| \) are the magnitudes of the vectors,
- \( \theta \) is the angle between them,
- \( \sin\theta \) determines the influence of the angle,
- \( \hat{\mathbf{n}} \) is the unit vector perpendicular to both.

When Vectors Are Parallel:

- Two vectors are **parallel** if they point in the same or exactly opposite direction, meaning \( \theta = 0^\circ \) or \( 180^\circ \).
- Since \( \sin 0^\circ = 0 \) and \( \sin 180^\circ = 0 \), the cross product simplifies to:

\[
\mathbf{A} \times \mathbf{B} = |\mathbf{A}| |\mathbf{B}| \cdot 0 \cdot \hat{\mathbf{n}} = \mathbf{0}
\]

Thus, the result is the **zero vector** \( \mathbf{0} \).

Explanation of Other Options:

- **Undefined**: The cross product is always defined for two vectors in 3D space.
- **A scalar**: The cross product produces a **vector**, not a scalar.
- **A vector perpendicular to both**: This is generally true for **non-parallel** vectors, but for **parallel** vectors, the result is the zero vector.

Thus, the **cross product of two parallel vectors is always the zero vector**.

  </br>

</details>

</br>

##### 6. Which of the following properties is NOT true for vector addition?

- Identity element
- Associativity
- Commutativity
- Multiplicative inverse

<details>
  <summary>Solution</summary>

The correct answer is:

**- Multiplicative inverse**

### Explanation:

Vector addition follows several key properties, but **multiplicative inverse** is not one of them.

**True Properties of Vector Addition:**

1. **Identity Element:**

   - The **zero vector** \( \mathbf{0} \) serves as the additive identity:
     \[
     \mathbf{A} + \mathbf{0} = \mathbf{A}
     \]

2. **Associativity:**

   - The grouping of vectors does not affect the sum:
     \[
     (\mathbf{A} + \mathbf{B}) + \mathbf{C} = \mathbf{A} + (\mathbf{B} + \mathbf{C})
     \]

3. **Commutativity:**
   - The order of addition does not change the result:
     \[
     \mathbf{A} + \mathbf{B} = \mathbf{B} + \mathbf{A}
     \]
     **Why "Multiplicative Inverse" is NOT True for Vector Addition:**

- The **multiplicative inverse** refers to an element that, when multiplied by another, results in the identity element (like how \( a \times a^{-1} = 1 \) in real numbers).
- In vector operations, **multiplication of vectors is not defined in a way that supports a multiplicative inverse**.
- Vectors only have an **additive inverse**, which is \( -\mathbf{A} \), satisfying \( \mathbf{A} + (-\mathbf{A}) = \mathbf{0} \), but not a **multiplicative** inverse.
  Conclusion:

**Vector addition does NOT have a multiplicative inverse, making it the correct answer.**

  </br>

</details>

</br>

##### 7. What is the result of the dot product of a vector **_a_** with itself?

- a
- |a|
- a^2^
- |a|^2^

<details>
  <summary>Solution</summary>

The correct answer is:

**- \( |\mathbf{a}|^2 \)**

Explanation:

The **dot product** of a vector **\(\mathbf{a}\)** with itself is given by:

\[
\mathbf{a} \cdot \mathbf{a} = |\mathbf{a}| |\mathbf{a}| \cos 0^\circ
\]

Since the angle between a vector and itself is **0°**, we know that:

\[
\cos 0^\circ = 1
\]

Thus, the equation simplifies to:

\[
\mathbf{a} \cdot \mathbf{a} = |\mathbf{a}|^2
\]

where \( |\mathbf{a}| \) represents the **magnitude (length)** of vector \( \mathbf{a} \).

Explanation of Other Options:

- **\( \mathbf{a} \)**: Incorrect because the dot product results in a **scalar**, not a vector.
- **\( |\mathbf{a}| \)**: Incorrect because the dot product produces the **square** of the magnitude, not just the magnitude.
- **\( \mathbf{a}^2 \)**: Incorrect notation, as vectors do not have exponentiation in this form.

Conclusion:

The result of **the dot product of a vector with itself is always the square of its magnitude**, i.e., **\( |\mathbf{a}|^2 \)**.

  </br>

</details>

</br>

##### 8. If u = 2i + 3j and v = -3i + 2j, what is the magnitude of u + v?

- $\sqrt{26}$
- 1
- 0
- $\sqrt{29}$

<details>
  <summary>Solution</summary>

We are given the vectors:

\[
\mathbf{u} = 2\hat{i} + 3\hat{j}
\]

\[
\mathbf{v} = -3\hat{i} + 2\hat{j}
\]

**Step 1: Compute \( \mathbf{u} + \mathbf{v} \)**

Adding the corresponding components:

\[
(2 + (-3))\hat{i} + (3 + 2)\hat{j}
\]

\[
(-1)\hat{i} + (5)\hat{j}
\]

So,

\[
\mathbf{u} + \mathbf{v} = -\hat{i} + 5\hat{j}
\]

**Step 2: Compute the Magnitude \( |\mathbf{u} + \mathbf{v}| \)**

The magnitude of a vector \( a\hat{i} + b\hat{j} \) is given by:

\[
|\mathbf{a}| = \sqrt{a^2 + b^2}
\]

For our resultant vector \( -\hat{i} + 5\hat{j} \):

\[
| -\hat{i} + 5\hat{j} | = \sqrt{(-1)^2 + (5)^2}
\]

\[
= \sqrt{1 + 25}
\]

\[
= \sqrt{26}
\]

**Final Answer:**

\[
\mathbf{\sqrt{26}}
\]

  </br>

</details>

</br>

##### 9. Given the vectors u = 2i + 3j and v = -3i + 2j, calculate the vector u + v

<details>
  <summary>Solution</summary>

We are given the vectors:

\[
\mathbf{u} = 2\hat{i} + 3\hat{j}
\]

\[
\mathbf{v} = -3\hat{i} + 2\hat{j}
\]
**Step 1: Compute \( \mathbf{u} + \mathbf{v} \)**

Adding the corresponding components:

\[
(2 + (-3))\hat{i} + (3 + 2)\hat{j}
\]

\[
(-1)\hat{i} + (5)\hat{j}
\]

**Final Answer:**
\[
\mathbf{u} + \mathbf{v} = -\hat{i} + 5\hat{j}
\]

  </br>

</details>

</br>

##### 10. If u = i - 2j + k and v = 2i + 3j - k, find the cross product u \* v

<details>
  <summary>Solution</summary>

The cross product of the vectors
\[
\mathbf{u} = \hat{i} - 2\hat{j} + \hat{k}
\]
and
\[
\mathbf{v} = 2\hat{i} + 3\hat{j} - \hat{k}
\]
is:

\[
\mathbf{u} \times \mathbf{v} = -\hat{i} + 3\hat{j} + 7\hat{k}
\]

  </br>

</details>

</br>

##### 11. Find the magnitude of the vector a = -2i + 3j + 6k

<details>
  <summary>Solution</summary>

The magnitude of the vector
\[
\mathbf{a} = -2\hat{i} + 3\hat{j} + 6\hat{k}
\]
is:

\[
|\mathbf{a}| = 7
\]

  </br>

</details>

</br>

##### 12. Determine the angle between the vectors u = 4i - j and v = i + 3j

<details>
  <summary>Solution</summary>

The angle between the vectors
\[
\mathbf{u} = 4\hat{i} - \hat{j}
\]
and
\[
\mathbf{v} = \hat{i} + 3\hat{j}
\]
is approximately:

\[
85.60^\circ
\]

  </br>

</details>

</br>

##### 13. Given the vectors u = i + 2j + 3k and v = 4i - j + 2k, calculate the dot product u . v
