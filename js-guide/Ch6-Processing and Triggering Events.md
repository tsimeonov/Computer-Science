# 6.1 The concept of event-driven Programming

The principle of sending and responding to events is called `event-driven programming`.
After an event has been triggered, it's placed in an `event queue`, which ensures that events that were triggered first are also handled first. The `event` loop continuously checks whether there is a new event queue, and if there is, the corresponding event is forwarded to event `handlers`.

# 6.2 Responding to events

To trigger a function on user interactions within a web page, three steps are required.

1. Select the element on the page.
2. Specify the event that is to be caught.
3. Specify the function to be called.

## 6.2.1 Defining an Event handler via HTML

```html
<div>
  <label for="age"></label>
  <input type="number" id="age" value="0" onblur="checkAgeNotNegative()" />
</div>
<div id="output"></div>
```

```js
function checkAgeNotNegative() {
  // Container for message
  const output = document.getElementById("output");
  // Input field for the age
  const element = document.getElementById("age");
  // Current age value
  const age = element.value;
  // If there is negative
  if (age < 0) {
    // Output an error message
    output.textContent = "Age cannot be negative";
  } else {
    // delete message
    output.textContent = "";
  }
}
```

## 6.2.2 Defining an Event Handler via Javascript

```html
<div>
  <label for="age"></label>
  <input type="number" id="age" value="0" onblur="checkAgeNotNegative()" />
</div>
<div id="output"></div>
```

```js
function checkAgeNotNegative() {
  // Container for message
  const output = document.getElementById("output");
  // Input field for the age
  const element = document.getElementById("age");
  // Current age value
  const age = element.value;
  // If there is negative
  if (age < 0) {
    // Output an error message
    output.textContent = "Age cannot be negative";
  } else {
    // delete message
    output.textContent = "";
  }
}

function init() {
  // Get element
  const element = document.getElementById("age");
  // Define event and define handler
  element.onblur = checkAgeNotNegative;
}
```

## 6.2.3 Defining Event Listeners

```js
function init() {
  const element = document.getElementById("age"); // Get element
  element.addEventListener(
    // Register event listener
    "blur", // Name of the event
    checkAgeNotNegative, // Name of the event listener
    false // Event flow, details to follow later on
  );
}
document.addEventListener("DOMContentLoaded", init);
```

## 6.2.4 Defining multiple event listeners

<details>
  <summary>Example</summary>

```html
<div>
  <label for="age"></label>
  <input id="age" type="number" value="0" />
</div>
<div id="output"></div>
```

```js
function checkAgeNotNegative(age) {
  if (age < 0) {
    showMessage("Age must be a number");
  }
}
function checkAgeisNumber(age) {
  // Check is a value is a valid number
  if (!(!isNaN(parseFloat(age)) && isFinite(age))) {
    showMessage("Age must be a number");
  }
}

function clearMessage() {
  showMessage("");
}

function showMessage(message) {
  const output = document.querySelector("#output");
  output.textContent = message;
}

function getAgeValue() {
  const element = document.querySelector("#age");
  const age = element.value;
  return age;
}

function init() {
  const element = document.querySelector("#age");
  element.addEventListener("blur", clearMessage);
  element.addEventListener("blur", function () {
    // Anonymous function
    const age = getAgeValue(); // get value for age
    checkAgeNotNegative(age); // call the actual function
  });
  element.addEventListener("blur", function () {
    // Anonymous function
    const age = getAgeValue();
    checkAgeNotNegative(age);
  });
}

document.addEventListener("DOMContentLoaded", init);
```

</details>

## 6.2.5 Passing arguments to event listeners

```js
// Using an anonymous function
const element = document.querySelector("#age");
element.addEventListener("click", function () {
  // The event handler code goes here
  // Access the arquments using the 'arquments' object
});

// Using an arrow function
element.addEventListener("click", () => {
  // The event handler code goes here
  // You can access the arquments directly
});
```

## 6.2.6 Removing event listeners

```js
const element = document.querySelector("#age");
function myEventHandler() {
  // The event handler codegoes here
  element.addEventListener("click", myEventHandler);
}

element.removeEventListener("click", myEventHandler);
```

## 6.2.8 Accessing information of an event

```html
<div>
  <input id="button" type="button" value="Please click" />
</div>
<div id="output"></div>
```

```js
function buttonClicked(event) {
  console.log(event.bubbles); // true
  console.log(event.cancelable); // true
  console.log(event.currentTarget); // <input>
  console.log(event.defaultPrevented); // false
  console.log(event.target); // <input>
  console.log(event.timeStamp); // 17463.69
  console.log(event.type); // click
  console.log(event.eventPhase); // 2
}

function init() {
  const element = document.querySelector("#button");
  element.addEventListener("click", buttonClicked, false);
}

document.addEventListener("DOMContentLoaded", init);
```
