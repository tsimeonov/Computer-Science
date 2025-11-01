What and why markup?

<details>
  <summary>Origins of Markup</summary>
  
<br>

- `RUNOFF (1964)`: One of the first markup languages, using "control words" (like `.he` for heading, `.ce` for center) scattered in text to control formatting. It mexed `semantic` information (like identifying a heading) with purely `formatting` instructions
- `GML (Generalized Markup Language, 1970s)`: Developed by Goldfarb, focused more strongly on serarating the `logiacl structure` (semantic elements like quotes `:q` or list items `:li`) from formatting instructions.

</details>

---

Hyperlinks

<details>
  <summary>What is Hypertext?</summary>

- `Nonlinear`: Unlike a conventional book, it's not meant to be read sequentially. Users can jump around.
- `Machine-Supported`: It relies on a computer for "interactive branching" and dynamic display.
- `Linked`: It uses links to connect documents or points within a document, which is what enables the nonlinear organization.

<br>

</details>

<br>

<details>
  <summary>Features of Hypertext Systems (Pre-web)</summary>

The video lists several features found in vatious hypertext systems, before the World Wide Web existed. These include:

- Hierarchical or graph-based (non-hierarchical) structures.
- Different `link types` and `attributes` (key/value pairs on links)
- `Paths`: The ablility to string multiple links together into a single "persistent object"
- `Versions` of nodes and links
- `Executable procedures`: The ability to run arbitary code when a link is clicked
- Multi-user editing, embedded graphics, and a visual browser or "map" of the links.

<br>

</details>

<br>

<details>
  <summary>Hyperlinks vs. Modern Web Interaction</summary>

A `Hyperlink` (like the HTML `<a>` tag) is a reference that allows a user to "jump" to another resource.

<br>

</details>

---

Identifying common elements for real web pages

<details>
  <summary>Header</summary>

Located at the top of the page, the header's main purpose is to establich the webisite's `identity`, usually with a prominent `logo`. It also frequently contains the `main`, `high-level navigation links`.

</details>

<br>

<details>
  <summary>Body</summary>

This is the main, central part of the page that holds the primary contnet. The content varies greatly depending on the site's purpose, from articles and embedded videos.

</details>

<br>

<details>
  <summary>Navbar (Navigation Bar)</summary>

A navbar lists essential links for site navigation. The video emphasizes that this element often overlaps with others. The main navigation bar is usually inside the header, and the footer contains a secondary naviagtion bar.

</details>

<br>

---

Well formed, valid and semantic HTML

<details>

  <summary>Well-Formed HTML (Syntax)</summary>

This is about correct syntax. An HTML document is "well-formed" if it follows the basic strucrutal rules.

- `Missing Closing Tags`: Forgetting to close a tag (`<h1> This is a heading`) without a corresponding `</h1>`.

- `Improper Nesting`: Tags must be closed in the reverse order they were opened.
  - `incorrrect`: `<h2><a>Link...</h2></a>`
  - `Correct`: `<h2><a>Link...</a></h2>`

</details>

<br>

<details>

  <summary>Valid HTML (Rules)</summary>

This is about following the official HTML specification. Your HTML can be well-formed but still invalid because you used tags in a way tha isn't allowed by the rules.

- `Example`: placing a `<body>` tag inside an `<h2>` tag.
- `Example`: Forgetting a required tag, like a `<title>` tag inside the `<head>` tag.

</details>

<br>

<details>

  <summary>Semantic HTML (Meaning)</summary>

This is about using HTML tags that describe the meaning or purpose of the content, rather than just how it should look.

- Example: Instead of using `<div>` for everyting, you use specific tags like:

  - `<header>`: For the introductory content at the top of a page.

  - `<nav>`: For the main navigation links.

  - `<section>`: For grouping related content.

  - `<article>`: For a self-contained piece of content (like a blog post or news story).

  - `<footer>`: For the footer content at the bottom of a page.

  - `<figure>`: For an image or diagram that is part of the content.

</details>

<br>
