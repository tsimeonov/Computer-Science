#### 8.203 Callbacks

##### 1. What is a callback?

- A property of an object that is called in a different thread
- A function provided as an argument to another function called when it has finisher execution
- An asynchronous function
- A type of global variable

<details>
  <summary>Solution</summary>

The correct answer is:

✅ **"A function provided as an argument to another function called when it has finished execution."**

Explanation:

A **callback** is a function that is passed as an argument to another function and is executed after that function completes its operation. This is commonly used in asynchronous programming (e.g., in JavaScript with event listeners or API calls) but is not inherently asynchronous.

Why the other options are incorrect:

- ❌ **"A property of an object that is called in a different thread"**
  - Callbacks are not necessarily properties of objects or related to multithreading.
- ❌ **"An asynchronous function"**
  - While callbacks are often used in asynchronous code, a callback itself is just a function—it is not inherently asynchronous.
- ❌ **"A type of global variable"**
  - Callbacks are typically functions passed as arguments, not global variables.

</details>

---
