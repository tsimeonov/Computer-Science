# 5 Structure of a web page

## 5.1 Document Object Model

Each time you access a webpage, the browser creates a corresponding model of the web page in memory, called the `Document Object Model (DOM)`. it represents the components of a web page hierarchically in a `tree representation`, also known as a `DOM tree`. A DOM tree, in turn is composed of `nodes`

## 5.2 The different Types of Nodes

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
      <table id="table-list-table" summary="Contacts">
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

    <script src="app.js"></script>
  </body>
</html>
```

</details>

- The `document node` represents the entire web page and is the root of the DOM tree. The document node is also called the `root node`.
- `Element nodes` represent individual HTML elements of a web page. In the example, these are the `<main>`, `<h1>`, `<table>`, `<thead>` and `<tbody>`.
- `Attribute nodes` in the example the attribute nodes are `lang`, `id`, `summary`.
- The text within the HTML elements is represented by its own type of node, called the `text node`. In the example, these are the nodes for the `Contacts`, `First name`, `Last name`.

## 5.3 The Document Node

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
