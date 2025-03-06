### 9.102 Testing for stability

##### 1. What does integration testing validate?

- The stability of the application within the operating system ?
- Unit of code
- The interface and the underlying code that controls it
- The interaction between units of code

<details>
  <summary>Solution</summary>

**"The interaction between units of code"**

### **Explanation:**

**Integration testing** is a software testing phase that ensures different units/modules of an application work together correctly. It validates how individual components **interact** and communicate with each other after being combined.

**Why the other options are incorrect?**

- ❌ **"The stability of the application within the operating system"**
  - This is related to **system testing**, not integration testing.
- ❌ **"Unit of code"**
  - This is covered by **unit testing**, which tests isolated parts of the code.
- ❌ **"The interface and the underlying code that controls it"**

  - This is more related to **UI testing** or **functional testing**, not specifically integration testing.

  **Example of Integration Testing:**

- Testing an **API call** from a frontend UI to a backend service.
- Validating **database interactions** when multiple modules need to store or retrieve data.

</details>

---

##### 2. Where are system test cases often derived from?

- The system requirements
- User testing
- Issue raised in debugging
- Unit test results

<details>
  <summary>Solution</summary>

**"The system requirements"**

**Explanation:**

**System test cases** are primarily derived from **system requirements** because system testing ensures that the complete application behaves as expected according to the specifications.

**Why the other options are incorrect?**

- ❌ **"User testing"**
  - User testing (such as **UAT - User Acceptance Testing**) happens later and is based on user experience rather than predefined system requirements.
- ❌ **"Issue raised in debugging"**
  - Debugging issues are typically addressed during **unit testing** or **integration testing**, not system testing.
- ❌ **"Unit test results"**

  - Unit tests focus on individual functions or components, while **system testing** evaluates the entire system as a whole.

  **Example:**

If a requirement states,
_"The application should allow users to reset their password via email verification,"_
then a system test case would be designed to verify whether this functionality works correctly.

</details>

---

##### 3. In black box testing the tester needs to understand the underlying structure of the code.

- True
- False

<details>
  <summary>Solution</summary>

**False**

**Explanation:**
In **black box testing**, the tester does **not** need to understand the **underlying structure or implementation** of the code. Instead, they focus on testing the **functionality** of the system based on the requirements and expected outcomes.

**Why?**

- Testers interact with the **software’s inputs and outputs** without looking at the internal code.
- It simulates real user behavior to ensure the system meets the specified requirements.
- Examples include **functional testing, system testing, and user acceptance testing (UAT).**

  **Contrast with White Box Testing**

- **White box testing** requires knowledge of the internal structure and logic of the code.
- It includes unit testing, integration testing, and code coverage analysis.

  **Example of Black Box Testing:**
  A tester verifies that entering an incorrect password three times locks the account **without knowing how the authentication logic is implemented in the code.**

</details>

---

##### 4. When testing the structure of the code, it isn't possible to test all logical paths. Which of hte following is the best strategy for choosing to test?

- None of these - you just have to work through all possibilities
- Highest inputs only to a unit of code
- A random sample of inputs to a unit of code
- Highest and lowest possible inputs to a unit of code

<details>
  <summary>Solution</summary>

**"Highest and lowest possible inputs to a unit of code"**

**Explanation:**
When testing the structure of the code (such as in **white-box testing** or **structural testing**), it is **impractical to test all possible logical paths** due to the **combinatorial explosion** of possibilities. The best strategy is to choose a representative set of test cases that cover edge cases effectively.

**Why this is the best choice?**

- Testing **highest and lowest inputs** helps identify potential **boundary errors** (e.g., buffer overflows, incorrect conditions).
- It ensures the code handles **extreme cases** properly (e.g., maximum values, minimum values, empty inputs).
- **Boundary Value Analysis (BVA)** is a well-known testing technique that focuses on the limits of input ranges.

  **Why the other options are incorrect?**

- ❌ **"None of these - you just have to work through all possibilities"**
  - Not practical due to too many possible logical paths.
- ❌ **"Highest inputs only to a unit of code"**
  - Only testing the maximum values ignores potential failures at the lower boundaries.
- ❌ **"A random sample of inputs to a unit of code"**

  - Random testing may **miss critical edge cases** where errors are most likely to occur.

  **Example:**
  If a function processes **ages (0–120 years)**, the best test cases would include:

- **Lowest boundary**: `0`
- **Highest boundary**: `120`
- **Just outside boundaries**: `-1` (invalid), `121` (invalid)

</details>

---

##### 5. What should you do when you find a failed test case?

- Complete the remaining tests
- Fix the problem before continuing
- Change the test case so it passes
- Redesign the application

<details>
  <summary>Solution</summary>

</details>

---
