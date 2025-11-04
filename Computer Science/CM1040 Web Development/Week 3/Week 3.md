### The document object model: HTML is a tree, the internet is a forest

<details>
  <summary>🌳 What is the Document Object Model (DOM)?</summary>
  
<br>

The DOM is a "platform-neutral model" for documents like web pages. When a browser loads an HTML file, it creates a DOM version of that page.

This model serves two main purposes:

1. `For Programmers`: It provides a way for programmers to interact with the document. They can navigate its structure and add, modify or delete elements and content.
2. `For interactivity`: It defines a model for `events` such as a user clicking on an element which aloows web pages to become interactive.

</details>

<details>
  <summary>Hierarchy and Structure</summary>
  
<br>

The DOM is described as a `finite, hierarchical tree structure`

- `Hierarchical`: Elements are organized in layers, with some elements like `<html>` at the top of the hierarchy and others nested below.
- `Finite`: The structure has a clear end. You can follow a path from the top (the root) down to the bottom (a leaf) but you cannot loop back up.

</details>
