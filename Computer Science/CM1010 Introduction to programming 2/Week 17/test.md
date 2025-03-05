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

Would you like more examples of black box testing techniques? 😊

</details>

---
