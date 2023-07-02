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
