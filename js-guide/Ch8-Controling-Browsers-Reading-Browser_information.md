## 8.1 The Browser Object Model

The Browser Object Model (BOM) is part of the Document Object Model (DOM) that represents the browser's window and allows JS to interact with the browser itself.
While the DOM focuses on the web page's structure and content, the BOM focuses on the browser environment.

## 8.2 Accessing the Window Information

### 8.2.1 Determining the Size and Postion of a browser window

<img src="./img/size and position.png" width="500px" />

The `outerHeight` and `outerWidth` properties represent the height and width of the browser window, including all displayed browser bars. The `innerHeight` and `innerWidth` properties, on the othr hand, represent the height and width without the browser bars, but including scrollbars.

## 8.2.2 Changing the size and posotion of a Browser window

The `moveBy()` method can be used to move a browser window horizontally and vertically by a specified number of pixels, and the `moveTo()` method can be used to move the window to a specific position. Via the `resizeBy()` method, you can scale a browser window by a certain factor, and via the `resizeTo()` method you can scale to a certain size.

## 8.2.3 Accessing Display information of the browser bars

<img src="./img/structure of a browser window.png" width="500px"/>

Structure of a browser window

A browser window typically consists of various components. In addition to the content area that displays the web page, there is an address bar which you can enter a URL; a status bar that indicates, among other things, whether a web page has been loaded ot is in the process of being loaded; a menu bar; a toolbar, a "personal" bar (containing bookmarks, for example); and last but not least, scrollbars, which display the horizontal and vertical position of the respective web page.

## 8.2.4 Determining General Properties

| Property |                                Description                                 |
| :------: | :------------------------------------------------------------------------: |
|   name   |                      Contains the name of the window                       |
|  opener  |      If you open a browser window from another browser window via JS.      |
|   self   | Contains a reference to an object representing the current browser window. |

## 8.2.5 Opening new browser windows
