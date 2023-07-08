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

# 6.2.3 Defining Event Listeners

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
