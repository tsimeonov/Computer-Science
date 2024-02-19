## 8.1 The Browser Object Model

The Browser Object Model (BOM) is part of the Document Object Model (DOM) that represents the browser's window and allows JS to interact withethe browser itself.
While the DOM focuses on the web page's structure and content, the BOM focuses on the browser environment.

## 8.2 Accessing the Window Information

### 8.2.1 Determining the Size and Postion of a browser window

<img src="./img/size and position.png" width="500px" />

The `outerHeight` and `outerWidth` properties represent the height and width of the browser window, including all displayes browser bars. The `innerHeight` and `innerWidth` properties, on the othr hand, represent the height and width without the browser bars, but including scrollbars.

## 8.2.2 Changing the size and posotion of a Browser window

The `moveBy()` method can be used to move a browser window horizontally and vertically by a specified number of pixels, and the `moveTo()` methof can be used to move the window to a specific position. Via the `resizeBy()` method, you can scale a browser window by a certain factor, and via the `resizeTo()` methof you can scale to a certain size.

## 8.2.3 Accessing Display information of the browser bars

<img src="./img/structure of a browser window.png" width="500px" />
Structure of a browser window

## 8.2.4 Determining General Properties

| Property |                                Description                                 |
| :------: | :------------------------------------------------------------------------: |
|   name   |                      Contains the name of the window                       |
|  opener  |      If you open a browser window from another browser window via JS       |
|   self   | Contains a reference to an object representing the current browser window. |

## 8.2.5 Opening New Browser Windows

The `open()` method is available for opening a new browser window.

HTML code

```html
<body>
  <span>URL:</span>
  <input id="url" type="text" />
  <br />
  <button id="link-open">Open window</button>
  <script src="./app.js"></script>
</body>
```

JavaScript code

```js
"use strict";
function init() {
  const linkOpen = document.getElementById("link-open");
  linkOpen.addEventListener("click", (e) => {
    const url = document.getElementById("url").value;
    window.open(
      url, // URL to open
      "Window title", // Name of the window
      "width=500," + // Width of the window
        "height=500," + // Height of the window
        "resizable=yes," + // Resizing possible
        "scrollbars=1," + // Scrollbar enabled
        "status" // Status bar enabled
    );
  });
}
document.addEventListener("DOMContentLoaded", init);
```

Exammple of some, Selected parameters for opening browser windows

| Parameter |                                     Meaning                                     |
| :-------: | :-----------------------------------------------------------------------------: |
|  height   |                    Contains the name of the window in pixels                    |
| location  | Indication of whether the new browser window should have an address bar or nots |
|  menubar  |        Indication of whether the new browser window is resizable or not         |

## 8.2.6 Closing the Browser Window

Analogous to the `open()` method, you can also use the `close()` method to close a browser window again.

HTML Code

```html
<span>URL</span>
<input type="text" id="url" />
<br />
<button id="link-open">open the window</button>
<button id="link-close">close the window</button>
```

JavaScript Code

```js
"use strict";
function init() {
  let windowReference;
  const linkOpen = document.getElementById("link-open");
  const linkClose = document.getElementById("link-close");
  linkOpen.addEventListener("click", (e) => {
    const url = document.getElementById("url").value;
    windowReference = window.open(
      url,
      "Fenstertitel",
      "width=500,height=500,resizable,scrollbars=yes,status=1"
    );
  });
  linkClose.addEventListener("click", (e) => {
    windowReference.close();
  });
}
document.addEventListener("DOMContentLoaded", init);
```

`Although we just showed you how it works, we advise agains opening browser windows via JavaScript. Such windows always have the negative connotation of annoying advertising windows.`

## 8.2.7 Opening Dialogs

In addition to the methods presented s far for opening and closing browseer windows, the `window` object offers furhter methods.

|  Method   |                   Description                   |
| :-------: | :---------------------------------------------: |
|  alert()  |          Opens a dialog with a message          |
|  close()  |            Closes the browser window            |
| confirm() |          Opens a dialog with a message          |
|  find()   |   Searches for a string in the browser window   |
|  print()  | Opens a dialog for printing the window contents |

## 8.2.8 Executing functions in a Time-Controlled Manner

If you want to execute certain functions within a web page with a delay (once) or ar certain intervals (repeatedly), the `window` object provides several helper methods for this purpose.

|    Method     |                   Description                   |
| :-----------: | :---------------------------------------------: |
| setInterval() | Executes a function at specified time intervals |
