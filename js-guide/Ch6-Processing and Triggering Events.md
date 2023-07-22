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

# 6.3 Different types of events

## 6.3.1 Events when interacting with the mouse

```html
<div id="container">
  <canvas id="canvas" width="400" height="400"></canvas>
</div>
```

```js
function init() {
  const canvas = document.getElementById("canvas");
  canvas.addEventListener("mousemove", handleMouseMove, false);
  // Get drawing area
  const context = canvas.getContext("2d");
  // Notice start of path
  let started = false;
  function handleMouseMove(e) {
    let x, y;
    // If x position is specified anf not 0
    if (e.clientX || e.clientX == 0) {
      // remember x position
      x = e.clientX;
      // remember y position
      y = e.clientY;
    }
    // If path not yet started
    if (!started) {
      // start path and
      context.beginPath();
      // move to position
      context.moveTo(x, y);
      // Notice that path has started
      started = true;
    }
    // If path has started
    else {
      // move to position
      context.lineTo(x, y);
      // and draw connection
      context.stroke();
    }
  }
}
document.addEventListener("DOMContentLoaded", init);
```

## 6.3.2 Events when interacting with the keyboard and text fields

<details>
  <summary>Example</summary>

```html
<!DOCTYPE html>
<html>
  <head>
    <title>Moving Element with Arrow Keys</title>
    <style>
      #movingElement {
        position: absolute;
        width: 50px;
        height: 50px;
        background-color: red;
        top: 50px;
        left: 50px;
      }
    </style>
  </head>

  <body>
    <div id="movingElement"></div>

    <script>
      document.addEventListener("DOMContentLoaded", function () {
        const movingElement = document.getElementById("movingElement");
        const stepSize = 10; // Adjust this value to control the movement speed

        let currentPosition = {
          top: 50,
          left: 50,
        };

        document.addEventListener("keydown", function (event) {
          if (event.key === "ArrowLeft") {
            currentPosition.left -= stepSize;
          } else if (event.key === "ArrowRight") {
            currentPosition.left += stepSize;
          } else if (event.key === "ArrowUp") {
            currentPosition.top -= stepSize;
          } else if (event.key === "ArrowDown") {
            currentPosition.top += stepSize;
          }

          movingElement.style.top = currentPosition.top + "px";
          movingElement.style.left = currentPosition.left + "px";
        });
      });
    </script>
  </body>
</html>
```

</details>

## 6.3.3 Events when working with forms

There are also special events for working with forms. For example, corresponding events are triggered whenever the user modifies the text in an `input` or a `textarea` element.

| Event  |                                     Description                                     | Object type |
| :----: | :---------------------------------------------------------------------------------: | :---------: |
| input  | Triggered when the value if an `<input>` or a `<textarea>` element has been changed |    Event    |
| chabge |                      Triggered when a form has been submitted                       |    Event    |
| submit |                      Triggered when a form has been submitted                       |    Event    |
| reset  |              Triggered when a form has been reset (via a reset button)              |    Event    |

## 6.3.4 Events when focusing elements

In addition, an event is triggered every time an element on a web page goes into focus (e.g by navigating to the elemsn using the `Tab` key).

|   Event   |                                      Description                                      | Object type |
| :-------: | :-----------------------------------------------------------------------------------: | :---------: |
|   focus   |                         Triggered when an element is focused                          | FocusEvent  |
|   blur    |                         Triggered when an element loses focus                         | FocusEvent  |
|  focusin  |  Triggered when an element is focused. Unlike the `focus` event, this event bubbles   | FocusEvent  |
| focuesout | Triggered when an element is loses focus. Unlike the `blur` event, this event bubbles | FocusEvent  |

## 6.3.5 General Events of the User Interface

<details>
  <summary>Fade in element with scrolling</summary>

```html
<!DOCTYPE html>
<html>
  <head>
    <title>Moving Element with Arrow Keys</title>
    <style>
      #content {
        height: 2000px;
        border: thin solid black;
        padding-left: 20px;
        padding-top: 150px;
        font-size: 22px;
      }

      .hide {
        opacity: 0;
      }

      .show {
        animation: fadein 2s;
      }

      @keyframes fadein {
        from {
          opacity: 0;
        }

        to {
          opacity: 1;
        }
      }
    </style>
  </head>

  <body>
    <div id="content">
      Hello
      <span id="name" class="hide">John Doe</span>
    </div>
    <script>
      function init() {
        let scrollPosition = window.scrollY;
        const nameElement = document.getElementById("name");

        function handleScrollEvent(e) {
          console.log(scrollPosition);
          scrollPosition = window.scrollY;
          if (scrollPosition > 5) {
            nameElement.classList.remove("hide");
            nameElement.classList.add("show");
          } else {
            nameElement.classList.remove("show");
            nameElement.classList.add("hide");
          }
        }
        window.addEventListener("scroll", handleScrollEvent);
      }

      document.addEventListener("DOMContentLoaded", init);
    </script>
  </body>
</html>
```

</details>

## 6.3.5 Events on mobile devices

A Selection of mobile device events
| Event | Description | Object type |
| :---------------: | :-----------------------------------------------------------------------------------------: | :--------------------: |
| orientationchange | Triggered when the orientation of the input device changes | Event |
| deviceorientation | Triggered when new data is available regarding the orientaton of the end device | DeviceOrientationEvent |
| touchstart | Triggered when the input device (usually a finger) touches the dispaly | TouchEvent |
| touchend | Triggered when the input device stops touchng - when the finger is removed from the display | TouchEvent |
| touchmove | Triggered when the input device has been moved over the dispaly | TouchEvent |
| touchcancel | Triggered when the tracking of the touch has been interrupted | TouchEvent |

# 6.4 Understanding and influencing the flow of events

## 6.4.1 Event phases

1. Capturing phase
2. Targeting phase
3. Bubbling phase

## 6.4.2 Interupting the event flow

- The `stopProoagation()` method can be used to prevent the corresponding event from being propagated to the next element in the DOM tree.
- The `preventDefault()` method, on the other hand can be used to prevent the browser's default actions from being executed when an event occurs.

## 6.4.3 Preventing dafault actions of events
