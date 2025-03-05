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

##### 2. Which of the following p5.js methods runs asynchronously?

- setup()
- createCanvas()
- loadImage()
- dist()

<details>
  <summary>Solution</summary>

The correct answer is:

✅ **`loadImage()`**

Explanation:
`loadImage()` runs asynchronously in **p5.js** because it is designed to load an image from a file or URL in the background, preventing it from blocking the main program execution. It takes an optional callback function that executes once the image is fully loaded.

Why the other options are incorrect:

- ❌ **`setup()`**
  - This function runs once at the start of the program but executes synchronously.
- ❌ **`createCanvas()`**
  - This method runs synchronously to create a drawing canvas.
- ❌ **`dist()`**
  - This is a mathematical function (to calculate Euclidean distance) and runs synchronously.

Would you like a code example demonstrating the asynchronous behavior of `loadImage()`? 😊

</details>

---

##### 3. Study the following code and assume that music.mp3 is available in the same folder as the p5 template.

Which of hte following outputs would the program produce?

```js
function setup() {
  createCanvas(800, 600);
  getSound();
}

function getSound() {
  console.log("About to load sound");
  loadSound("music.mp3", soundLoaded, soundLoadingError);
  console.log("Is the sound loaded?");
}

function soundLoaded() {
  console.log("sound has loaded");
}

function soundLoadingError() {
  console.log("error loading sound");
}
```

- About to load sound -> sound has loaded -> Is the sound loaded?
- About to load sound -> Is the sound loaded? -> sound has loaded
- About to load sound -> sound has loaded -> error loading sound
- About to load sound -> Is the sound loaded? -> sound has loaded
