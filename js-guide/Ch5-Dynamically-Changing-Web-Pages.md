# 5.1 Structure of a web page

## 5.1.1 Document Object Model

Each time you access a webpage, the browser creates a corresponding model of the web page in memory, called the `Document Object Model (DOM)`. it represents the components of a web page hierarchically in a `tree representation`, also known as a `DOM tree`. A DOM tree, in turn is composed of `nodes`

## 5.1.2 The different Types of Nodes

In total there are four main types of nodes (there are a few more, twelve in total but they are less relevant)

<details>
  <summary>Example</summary>

```html
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Dropdown Menu</title>
    <link rel="stylesheet" href="style.css" />
  </head>

  <body>
    <main id="main">
      <h1>Contacts</h1>
      <table id="contact-list-table" summary="Contacts">
        <thead>
          <tr>
            <th id="table-header-first-name">First name</th>
            <th id="table-header-last-name">Last name</th>
            <th id="table-header-email">E-mail address</th>
          </tr>
        </thead>
        <tbody>
          <tr class="row odd">
            <td>John</td>
            <td>Doe</td>
            <td>john.doe@javascripthandbuch.de</td>
          </tr>
          <tr class="row even">
            <td>James</td>
            <td>Doe</td>
            <td>james.doe@javascripthandbuch.de</td>
          </tr>
          <tr class="row odd">
            <td>Peter</td>
            <td>Doe</td>
            <td>peter.doe@javascripthandbuch.de</td>
          </tr>
          <tr class="row even">
            <td>Paul</td>
            <td>Doe</td>
            <td>paul.doe@javascripthandbuch.de</td>
          </tr>
        </tbody>
      </table>
    </main>

    <script src="app.js"></script>
  </body>
</html>
```

</details>

- The `document node` represents the entire web page and is the root of the DOM tree. The document node is also called the `root node`.
- `Element nodes` represent individual HTML elements of a web page. In the example, these are the `<main>`, `<h1>`, `<table>`, `<thead>` and `<tbody>`.
- `Attribute nodes` in the example the attribute nodes are `lang`, `id`, `summary`.
- The text within the HTML elements is represented by its own type of node, called the `text node`. In the example, these are the nodes for the `Contacts`, `First name`, `Last name`.

## 5.1.3 The Document Node

|       Property        |                      Description                      |
| :-------------------: | :---------------------------------------------------: |
|    document.title     |       Contain the title of the current document       |
| document.lastModified | Contains the date when the document was last modified |
|     document.URL      |         Contain a URL of the current document         |
|    document.domain    |      Contains the domain of the current document      |
|    document.cookie    |    Contains a list of all cookies for the document    |
|    document.forms     |     Contains a list of all forms in the document      |
|    document.image     |     Contains a list of all images in the document     |
|    document.links     |     Contains a list of all links in the document      |

# 5.2 Selecting Elements

The different methods and properties for selecting elements

|     Property/Method      |                         Description                         |   Return Code    |
| :----------------------: | :---------------------------------------------------------: | :--------------: |
|     getElementById()     |              Selects an element based on an ID              |  single element  |
| getElementBy-ClassName() |           Selects elements based on a class name            | List of elements |
| getElementsBy-TagName()  |     Selects all elements with the specific element name     | List of elements |
|   getElementBy-Name()    |                Select elements by their name                | List of elements |
|     querySelector()      | Returns the first element that matches a given CSS selector |  Single element  |
|    querySelectorAll()    |    Returns all elements that match a given CSS selector     | List of elements |
|      parentElement       |            Returns the parent element for a node            | List of elements |
|       parent Node        |             Returns the parent node for a node              |   Single node    |
| previousElement-Sibling  |       Returns the previous sibling element for a node       |  Single element  |
|     previousSibling      |        Returns the previous sibling node for a node         |   Single Node    |
|    nextElementSibling    |         Returns the next sibling element for a node         |  Single element  |
|       nextSibling        |          Returns the next sibling node for a node           |   Single node    |
|    firstElementChild     |         Returns the first child element for a node          |  Single element  |
|        firstChild        |           Returns the first childnode for a node            |   Single node    |
|     lastElementChild     |          Returns the last child element for a node          |  Single element  |
|        lastChild         |           Returns the last child node for a node            |   Single node    |
|        childNodes        |             Returns all child modes for a node              |  List of nodes   |
|         children         |            Returns all child elements for a node            | List of elements |

## 5.2.1 Selecting Elements by ID

```js
const mainElement = document.getElementById("main");
```

## 5.2.2 Selecting Elements by Class

<details>
  <summary>Example</summary>

```js
// Select all even table rows
const tableRowsEven = document.getElementsByClassName("even");
// if at least one element is found
if (tableRowsEven.length > 0) {
  // iterate all elements
  for (let i = 0; i < tableRowsEven.length; i++) {
    // Assign element to a variable
    const tableRow = tableRowsEven[i];
    // set new background color
    tableRow.style.backgroundColor = "#ccc";
  }
}
```

</details>

## 5.2.3 Selecting Elements by Element Name

<details>
  <summary>Example</summary>

```js
const tableCells = document.getElementsByTagName("td");
// If at least one element is found
if (tableCells.length > 0) {
  // iterate all elements
  for (let i = 0; i < tableCells.length; i++) {
    // Assign element to a variable
    const tableCell = tableCells[i];
    // Se new font
    tableCell.style.fontFamily = "Verdana";
    // set new font size
    tableCell.style.fontSize = "14px";
  }
}
```

</details>

## 5.2.4 Selecting Elements by Name

<details>
  <summary>Example</summary>

```html
<form action="#">
  <label for="artist">Artist</label>
  <input type="text" id="artist" name="artist" />
  <br />
  <label for="album">Album</label>
  <input type="text" id="album" name="album" />
  <br />
  <p>Genre:</p>
  <fieldset>
    <input type="radio" id="st" name="genre" value="Stonerrock" />
    <label for="st">Stonerrock</label>
    <br />
    <input type="radio" id="sp" name="genre" value="Spacerock" />
    <label for="sp">Spacerock</label>
    <br />
    <input type="radio" id="ha" name="genre" value="Hardrock" />
    <label for="ha">Hardrock</label>
    <br />
  </fieldset>
</form>
```

```js
// Accessing elements by elements names
// Select all elements by name
const inputElementsForGenre = document.getElementsByName("genre");
// If at least one element is found
if (inputElementsForGenre.length > 0) {
  // Iterate all elements
  for (let i = 0; i < inputElementsForGenre.length; i++) {
    // assign element to a variable
    const inputElement = inputElementsForGenre[i];
    // Output: Stonerrock, Spacerock, Hardrock
    console.log(inputElement.value);
  }
}
```

</details>

## 5.2.5 Selecting Elements by Selector

querySelector() returns only one element.

```js
const tableCell = document.querySelector("#main table td:nth-child(2)");
tableCell.style.border = "1px solid red";
```

querySelectorAll() returns multiple elements.

```js
const tableCells = document.querySelectorAll("#main table td:nth-child(2)");
if (tableCells.length > 0) {
  for (let i = 0; i < tableCells.length; i++) {
    const tableCell = tableCells[i];
    tableCell.style.border = "1px solid red";
  }
}
```

## 5.2.6 Selecting the parent element of an element

For the selection of parent node/elemenst, the `parentNode` and `parentElement` properties are available; for the selection of child nodes/elements, there are the `firstChild`, `firstElementChild`, `lastChild`, `lastElementChild`, `childrenNodes` and `clidren` properties; and for the selection of sibling nodes/elements the `previousSibling`, `previousElementSibling`, `nextSibling` and `nextElementSibling` properties are provided.

```js
const table = document.querySelector("table");
console.log(table.parentNode); // <main>
console.log(table.parentElement); // <main>
```

It's important to understand that some of the preceding properties return nodes, while other properties return elements. The `parentNode`, `childNodes`, `firstChild`, `lastChild`. `previousSibling` and `nextSibling` propertie return nodes, while the `parentElement`, `children`, `firstElementChild`, `lastElementChild`, previ`previousElementChild` and `nextElementChild` properties return elements.

## 5.2.7 Selecting the child element of an element

The child elements of an element can be determined via the `children` property, the childre nodes via the `childNodes` property. Whether an element has child nodes can be detemined using the `hasChildNodes()` method, which returns a Boolean value. You can determine whether an element has child elements using the `childElementCount` property: this contains the number of child elements.

```js
const tbody = document.querySelector("tbody");
console.log(tbody.children.length); // 4
console.log(tbody.childElementCount); // 4
console.log(tbody.childNodes.length); // 9
console.log(tbody.hasChildNodes()); // true
```

## 5.2.8 Selecting the sibling elements of an element

There is the possibility to select the sibling nodes or sibling elements within one level of the DOM:

- The `previousSibling` property contains the previous sibling node.
- The `nextSibling` property contains the next sibling node.
- The `previousElementSibling` property contains the previous sibling element.
- The `nextElementSibling` property contains the next sibling element.

```js
// Accessing specific sibling nodes and sibling elements
const tableCell = document.querySelector("tbody tr:nth-child(2)");
console.log(tableCell.previousSibling); // Text node
console.log(tableCell.nextSibling); // Text node
console.log(tableCell.previousElementSibling); // <tr>
console.log(tableCell.nextElementSibling); // <tr>
```

## 5.2.9 Calling selection methods on elements

<details>
  <summary>Example</summary>

```html
<main id="main-content">
  <ul id="list-1">
    <li>List entry 1</li>
    <li>
      List entry 2
      <ul id="list-2">
        <li>List entry 2.1</li>
        <li>List entry 2.2</li>
        <li>List entry 2.3</li>
        <li>List entry 2.4</li>
      </ul>
    </li>
    <li>List entry 3</li>
    <li>List entry 4</li>
  </ul>
</main>
```

```js
const allListItemElements = document.getElementsByTagName("li");
console.log(allListItemElements.length); // 8
const subList = document.getElementById("list-2");
const subListItems = subList.getElementsByTagName("li");
console.log(subListItems.length); // 4
```

</details>

## 5.2.10 Selecting Elements by Type

|     Property     |                      Description                      |
| :--------------: | :---------------------------------------------------: |
| document.anchors |    Contains a list of all anchors of the web page     |
|  document.forms  |     Contains a list of all forms on the web page      |
| document.images  |     Contains a list of all images on the web page     |
|  document.links  |     Contains a list of all links on the web page      |
|  document.head   | Provides access to the <head> element of the web page |
|  document.body   | Provides access to the <body> element of the web page |

# 5.3 Working with Text Nodes

The different methods and properties for modifying elements
| Property/Method | Description |
| :---------------: | :------------------------------------------------------------: |
| textContent | This property allows you to access the text content of a node. |
| nodeValue | This property allows you to access the contents of a node |
| innerHTML | This property allows you to access the HTML content of a node |
| createTextNode() | This method allows you to create text nodes |
| createElement() | This method allows you to create elements |
| createAttribute() | This methos allows you to create attribute nodes |
| appendChild() | This method allows you to add nodes ot the DOM tree |
| removeChild() | This method allows you to remove nodes from the DOM tree |

## 5.3.1 Accessing the text content of an element

```html
<ul id="news">
  <li><strong>Record news</strong>New album by <em>Ben Harper</em> released</li>
</ul>
```

```js
const textContent = document.querySelector("#news li:nth-child(1)").textContent;
console.log(textContent); // Record newsNew album by Ben Harper released
```

## 5.3.2 Modifying the text content of an element

```js
const element = document.querySelector("#news li:nth-child(1)");
element.textContent = "Record news"; // Record news
```

## 5.3.3 Modifying the HTML below an element

If you want to insert not only text but also HTML into an element, you can use the `innerHTML` property.

```js
const element = document.querySelector("#news li:nth-child(1)");
element.innerHTML = "<string>Record news:</strong> New album by....";
```

## 5.3.4 Creating and adding text nodes

```js
const element = document.querySelector("#news");
const textNode = document.createTextNode("Example");
element.appendChild(textNode);
```

# 5.4 Working with elements

## 5.4.1 Creating and adding elements

<details>
  <summary>Example</summary>

```html
<body onload="createTable()">
  <main>
    <table id="contact-table" summary="Contacts">
      <thead>
        <tr>
          <th>First name</th>
          <th>Last name</th>
          <th>E-mail address</th>
        </tr>
      </thead>
      <tbody></tbody>
    </table>
  </main>
</body>
```

```js
const contacts = [
  {
    firstName: "John",
    lastName: "Doe",
    email: "john.doe@gmail.com",
  },
  {
    firstName: "James",
    lastName: "Doe",
    email: "james.doe@gmail.com",
  },
  {
    firstName: "Peter",
    lastName: "Doe",
    email: "peter.doe@gmail.com",
  },
];

function createTable() {
  const tableBody = document.querySelector("#contact-table tbody");
  for (let i = 0; i < contacts.length; i++) {
    // For the current contact ...
    const contact = contacts[i];
    // ... a new line is created.
    // (1)
    const tableRow = document.createElement("tr");
    // Within the row, different cells are created ...
    // (2)
    const tableCellFirstName = document.createElement("td");
    // ... and filled with values.
    // (3)
    const firstName = document.createTextNode(contact.firstName);
    // (4)
    tableCellFirstName.appendChild(firstName);
    // (5)
    const tableCellLastName = document.createElement("td");
    // (6)
    const lastName = document.createTextNode(contact.lastName);
    // (7)
    tableCellLastName.appendChild(lastName);
    // (8)
    const tableCellEmail = document.createElement("td");
    // (9)
    const email = document.createTextNode(contact.email);
    // (10)
    tableCellEmail.appendChild(email);
    // (11)
    tableRow.appendChild(tableCellFirstName);
    // (12)
    tableRow.appendChild(tableCellLastName);
    // (13)
    tableRow.appendChild(tableCellEmail);
    // (14)
    tableBody.appendChild(tableRow);
  }
}
```

</details>

## 5.4.2 Removing elements and nodes

Each HTML Element is represented by Its own object type

```html
<main id="main">
  <h1>Contacts</h1>
  <table id="contact-list-table" summary="Contacts">
    <thead>
      <tr>
        <th id="table-header-first-name">First name</th>
        <th id="table-header-last-name">Last name</th>
        <th id="table-header-email">E-mail address</th>
      </tr>
    </thead>
    <tbody>
      <tr class="row odd">
        <td>John</td>
        <td>Doe</td>
        <td>john.doe@gmail.com</td>
      </tr>
      <tr class="row even">
        <td>James</td>
        <td>Doe</td>
        <td>james.doe@gmail.com</td>
      </tr>
      <tr class="row odd">
        <td>Peter</td>
        <td>Doe</td>
        <td>peter.doe@gmail.com</td>
      </tr>
      <tr class="row even">
        <td>Paul</td>
        <td>Doe</td>
        <td>paul.doe@gmail.com</td>
      </tr>
    </tbody>
  </table>
</main>
```

```js
const table = document.querySelector("table");
// HTMLTableElement
console.log(Object.getPrototypeOf(table));
// null
console.log(table.caption);
// thead
console.log(table.tHead);
// tbody
console.log(table.tBodies);
// [tr,tr,tr,tr]
console.log(table.rows);
// null
console.log(table.tFoot);
```

</details>

# 5.5 Working with attributes

## 5.5.1 Reading the value of an attribute

To access the value of an attribute, use the `getAttribute()` method on the respective method.

```html
<a href="#" id="home" class="link">Home</a>
```

```js
const element = document.getElementById("home");
// home
console.log(element.getAttribute("id"));
// link
console.log(element.getAttribute("class"));
// #
console.log(element.getAttribute("href"));
```

## 5.5.2 Changing the value of an attribute or adding a new attribute

```html
<a href="#" id="home" class="link">Home</a>
```

```js
const element = document.getElementById("home");
element.setAttribute("class", "link active");
element.setAttribute("href", "newlink.html");
element.setAttribute("target", "_blank");
console.log(element.getAttribute("class")); // link active
console.log(element.getAttribute("href")); // navlink.html
console.log(element.getAttribute("target")); // _blank
```

## 5.5.3 Creating and Adding attribute nodes

```html
<a href="#" id="home" class="link">Home</a>
```

```js
const element = document.getElementById("home");
const attribute = document.createAttribute("target");
attribute.value = "_blank";
element.setAttributeNode(attribute);
console.log(element.getAttribute("target")); // _blank
```

## 5.5.4 Removing attributes

```html
<a href="#" id="home" class="link">Home</a>
```

```js
const element = document.getElementById("home");
element.removeAttribute("class");
element.removeAttribute("href");
console.log(element.getAttribute("class")); // null
console.log(element.getAttribute("href")); // null
```

## 5.5.5 Accessing CSS classes

```js
const element = document.getElementById("home");
console.log(element.classList); // ['link']
element.classList.add("active"); // Add class
console.log(element.classList); // ['link', 'active']
element.classList.remove("active"); // Remove class
console.log(element.classList); // ['link']
element.classList.toggle("active"); // Togle class
console.log(element.classList); // ['link', 'active']
element.classList.toggle("active"); // Togle class
console.log(element.classList); // ['link', 'active']
element.classList.contains("link"); // true
console.log(element.classList.contains("link")); // true
```
