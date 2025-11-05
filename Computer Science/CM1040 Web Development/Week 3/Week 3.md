### The document object model: HTML is a tree, the internet is a forest

<details>
  <summary>🌳 What is the Document Object Model (DOM)?</summary>
  
<br>

The DOM is a "platform-neutral model" for documents like web pages. When a browser loads an HTML file, it creates a DOM version of that page.

This model serves two main purposes:

1. `For Programmers`: It provides a way for programmers to interact with the document. They can navigate its structure and add, modify or delete elements and content.
2. `For interactivity`: It defines a model for `events` such as a user clicking on an element which aloows web pages to become interactive.

</details>

<br>

<details>
  <summary>Hierarchy and Structure</summary>
  
<br>

The DOM is described as a `finite, hierarchical tree structure`

- `Hierarchical`: Elements are organized in layers, with some elements like `<html>` at the top of the hierarchy and others nested below.
- `Finite`: The structure has a clear end. You can follow a path from the top (the root) down to the bottom (a leaf) but you cannot loop back up.

</details>

<br>

<details>
  <summary>DOM Relationships</summary>
  
<br>

The hierarchical structure creates specific relationships between the nodes (elements) in the tree.

- `Parent` - The node directly above another node (e.g. `<body>` is the parent of `<p>`)
- `Child` - The node(s) directly below another node (e.g., `<head>` and `<body> `are children of `<html>`).
- `Ancestor`: Any node above another node in the hierarchy. (e.g., `<html>` is an ancestor of `<a>`).
- `Descendant`: Any node below another node in the hierarchy. (e.g., `<a>` is a descendant of `<body>`).
- `Sibling`: Nodes that are at the same level and share the same parent. (e.g., multiple `<li> `tags under one `<ul>` tag).

</details>

---

### The DOM can change dynamically

<details>
  <summary>Dynamic HTML (DHTML)</summary>
  
<br>

This refers to HTML that changes after the page has been loaded by the browser. It is a client-side (in browser) action, typically handled by JS, which modifies the DOM in response to user input (E.g, a mouse-over changing an image) or a timer.

</details>

<br>

<details>

  <summary>Dynamic Web pages</summary>
  
<br>

This refers to HTML that is generated on the fly by the server when a user requests a page. It is a `server-side` process. Middleware pulls data from a database, builds a complete HTML page with that data, and sends it to the browser. From the browser's perspective, it just receives a standard HTML page.

</details>

<br>

The evolution of web page generation

<details>

  <summary>1. Static Websites</summary>
  
<br>

This is the "Web 1.0 model". The webserver stores a collection of complete, pre-built HTML files.

- When a user clicks a link, the browser requests a specific file (e.g., about.html).

- The server finds that file and sends it.

- The browser then loads this entirely new page.

- This method is efficient but requires manual file edits to update content.

</details>

<br>

<details>

  <summary>2. Dynamic Websites</summary>
  
<br>

This model introduced server-side generation.

- When a user makes a request, it triggers middleware on the server.

- This middleware retrieves content (like news articles or user info) from a database.

- It dynamically builds a full HTML page by wrapping that data in HTML tags.

- The server sends this newly created, complete HTML page to the browser.

- This allowed for personalized content (e.g., based on a user login).

</details>

<br>

<details>

  <summary>3. Data-driven dynamic HTML</summary>
  
<br>

This model, which powers modern Single Page Applications (SPAs), combines the dynamic server with dynamic HTML in the browser.

- The browser loads an initial page.

- When a user interacts (e.g., clicks a button), the browser uses JavaScript (often via AJAX) to make a small background request to the server for data only (not a full HTML page).

- The server returns the data (e.g., in JSON format).

- The JavaScript in the browser receives this data, generates the necessary new HTML, and dynamically updates only a small part of the DOM without a full-page reload.

</details>
