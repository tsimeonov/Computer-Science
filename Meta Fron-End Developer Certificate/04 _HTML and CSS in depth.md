# 1. Week 1

## 1.1 User Input and Forms

### 1.1.1 Radio buttons

Radio buttons are a type of input element in HTML that allows users to selevt a single option from a redefined set of mutually exclusive options.

<details>
  <summary>Example</summary>

```html
<h1>Book a table</h1>
<form action="POST">
  <fieldset id="size">
    <label> <input type="radio" value="2" name="size" /> 2-person table </label>
    <label>
      <input type="radio" value="4" name="size" checked /> 4-person table
    </label>
    <label> <input type="radio" value="6" name="size" /> 6-person table </label>
  </fieldset>
  <fieldset id="location">
    <label>
      <input type="radio" value="indoors" name="location" checked /> Indoors
    </label>
    <label>
      <input type="radio" value="outdoors" name="location" /> Outdoors
    </label>
  </fieldset>
  <button type="submit">Book a table</button>
</form>
```

</details>

### 1.1.2 Using interactive form elements

<details>
  <summary>Example</summary>

```html
<h1>Book a table</h1>
<form action="POST">
  <div>
    <label for="booking_date">Booking date</label>
    <input type="date" id="booking_date" name="booking_date" />
  </div>
  <div>
    <label for="booking_people">Number of people</label>
    <input
      type="range"
      id="booking_people"
      name="booking_people"
      min="1"
      max="10"
      value="4"
      oninput="this.nextElementSibling.value = this.value"
    />
    <output>4</output>
  </div>
  <div>
    <!-- Set up a data list -->
    <label for="booking_location">Location</label>
    <input id="booking_location" name="booking_location" list="locations" />
    <datalist id="locations">
      <option value="Downtown"></option>
      <option value="Uptown"></option>
    </datalist>
  </div>
  <div>
    <button>Submit</button>
  </div>
</form>
```

</details>

## 1.2 Media Elements

### 1.2.1 Video and Audio

### 1.2.2 Embedded players

### 1.2.3 iFrames

# 2. Week 2

## 2.1 Creating Layouts

### 2.1.1 CSS Web layout

CSS web layout refers to the process of structuring ans styling the visual elements of a web page using CSS.
CSS techniques for web layout:

- Box model
- CSS Grid
- Flexbox
- Responsive design

### 2.1.2 Basic flexbox

Typical use cases:

- Search bar
- Navigation bar
- Image gallery

### 2.1.3 Flex Charts

- flex-grow - specifies how much an item will grow compared to other flex items.
- flex-shrink - specifies how much an item will shrink compared to other flex items.
- flex-basis - specifies the initial length of the flexible item.

<details>
  <summary>Example</summary>

```html
<style>
  * {
      padding: 0;
      margin: 0;
  }

  .row {
      display: flex;
      align-items: stretch;
  }

  .row .label {
      flex: 0 0 auto;
  }

  .row .container {
      display: flex;
      flex: 1;
      justify-content: flex-start;
  }

  .row .dish {
      display: flex;
      flex: 1;
      justify-content: center;
  }

  .pasta {
      background-color: #ee9972;
  }

  .pizza {
      background-color: #f4ce14;
  }

  .borrito {
      background-color: #495e57;
  }
</style>

<body>

  <body>
      <div class="row">
          <div class="label">Preffered dishes</div>
          <div class="container">
              <div class="dish pasta" style="flex-basis: 35%;">35%</div>
              <div class="dish pizza" style="flex-basis: 50%;">50%</div>
              <div class="dish borrito" style="flex-basis: 15%;">15%</div>
          </div>
      </div>
  </body>
  <script src="app.js"></script>
</body>

</html>
```

</details>

### 2.1.4 CSS Grid

<details>
  <summary>Example</summary>

```html
<style>
  * {
    padding: 0;
    margin: 0;
  }

  body {
    display: grid;
    height: 200px;
    grid-template-areas:
      "header header"
      "nav main"
      "footer footer";
    grid-template-rows: 30px 1fr 30px;
    grid-template-columns: 150px 1fr;
  }

  header {
    grid-area: header;
    background-color: lightsalmon;
  }

  .nav-bar {
    grid-area: nav;
    background-color: lightcoral;
  }

  main {
    grid-area: main;
    background-color: lightcyan;
  }

  footer {
    grid-area: footer;
    background-color: lightseagreen;
  }
</style>

<body>
  <body>
    <header>Header</header>
    <nav class="nav-bar">Navigation</nav>
    <main>Main area</main>
    <footer>Footer</footer>
  </body>
  <script src="app.js"></script>
</body>
```

</details>

## 2.2 CSS Selectors

### 2.2.1 Widely used selectors

- element or type selector `<p>`
- id selectors
- class selectors
- attribute selectors `[attr=value]`
- nth-of-type and nth-child selectors
- group selectors

### 2.2.2 Combination selectors

- descendant selectors (using space)
- child selectors (>)
- general sibling selectors (~)
- adjacent sibling selectors (+)

### 2.2.3 Pseudo-classes

Pseudo-classes are used to select and style elements based on their state or position in the document tree. They start with a colon `(:)` followed by the name of the pseudo-class.
The order in which you need to write a pseudo-class rulles is LVHA (link,visited, hover active)

```
// syntax
selector:pseudo-class {
    property: value
}
```

- User-action states:
  - :hover
  - :active
  - :focus
- Form states
  - :disabled and :enabled (generally used for buttons)
  - :checked and :indeterminate (used for checkboxes)
  - :valid and :invalid
- Specific position-based states
  - :first-of-type
  - :last-of-type
  - :nth-of-type()
  - :nth-last-of-type()

<details>
  <summary>Example of specific position-based states</summary>

```css
li:first-of-type {
  color: lightblue;
}
```

```html
<ul>
  <li>Mario</li>
  <li>Adrian</li>
</ul>
```

</details>

### 2.2.4 CSS pseudo cheat sheet

Simple selectors

| Selector  | Syntax  |  Example  |
| :-------: | :-----: | :-------: |
|  Element  | element |   div{}   |
|   Class   | .class  | .alpha {} |
|    ID     |   #id   | #alpha{}  |
| Universal |   \*    |   \* {}   |

Variations of simple selectors

|     Elements      |          Syntax           |    Example    |               Description                |
| :---------------: | :-----------------------: | :-----------: | :--------------------------------------: |
|    Two classes    | .first-class.second-class | .alpha.beta{} | All elements with classes alpha and beta |
| Element and class |       element.class       |  p.alpha {}   |  All alpha class elements inside `<p>`   |
|   Two elements    |      element,element      |   p, div{}    |      All `<p>` and `<div>` elements      |
|   Two elements    |      element element      |   p div {}    |    All `<div>` elements inisde `<p>`     |

Descendant selectors / combinators

|     Selector     |       Syntax        |  Example  |                Description                 |
| :--------------: | :-----------------: | :-------: | :----------------------------------------: |
|    Descendant    |  `element element`  |  `div p`  |      All `<p>` descendants of `<div>`      |
|      Child       | `element > element` | `div > p` |  All `<p>` direct descendants of `<div>`   |
| Adjacent Sibling | `element + element` | `div + p` |    `<p>` element directly after `<div>`    |
| General Sibling  | `element ~ element` | `div ~ p` | All `<p>` element iterations after `<div>` |

Attribute selectors

|        Selector         |       Syntax       |                          Example                           |
| :---------------------: | :----------------: | :--------------------------------------------------------: |
|       [attribute]       |      `[href]`      |        Selects all elements with a `href` attribute        |
|    [attribute=value]    |   `[lang="fr"]`    |  Selects all elements with `lang` attribute value of "fr"  |
|   [attribute~=value]    |  `[input~=hello]`  |     Elements with `input` attribute containing "hello"     |
| [attribute&#124;=value] | `[lang&#124;=en]`  |  Elements with `lang` attribute value starting with "en"   |
|   [attribute^=value]    | `a[href^="https"]` | `<a>` elements with `href` attribute starting with "https" |
|   [attribute$=value]    | `a[href$=".docx"]` |  `<a>` elements with `href` attribute ending with ".docx"  |
|   [attribute*=value]    | `a[href*="meta"]`  |   `<a>` elements with `href` attribute containing "meta"   |

Pseudo-classes

|     Pseudo-class     |           Example           |                                          Description of selection                                          |
| :------------------: | :-------------------------: | :--------------------------------------------------------------------------------------------------------: |
|       :active        |       `a:active { }`        |                                              All active links                                              |
|       :checked       |     `input:checked { }`     |                                     All the checked `<input>` elements                                     |
|       :default       |     `input:default { }`     |                                       All default `<input> `elements                                       |
|      :disabled       |    `input:disabled { }`     |                                      All disabled `<input> `elements                                       |
|        :empty        |       `div:empty { }`       |                                  All the <div> elements with no children                                   |
|       :enabled       |     `input:enabled { }`     |                                     All the enabled `<input> `elements                                     |
|     :first-child     |     `p:first-child { }`     |                      All the <p> elements who are the first child of a parent element                      |
|    :first-of-type    |    `p:first-of-type { }`    |                   All the <p> element who are the first <p> element of a parent element                    |
|        :focus        |      `input:focus { }`      |                                         Input element under focus                                          |
|     :fullscreen      |      `:fullscreen { }`      |                                      The element in full-screen mode                                       |
|        :hover        |        `p:hover { }`        |                                        Action effect on mouse hover                                        |
|       :invalid       |     `input:invalid { }`     |                                    Input elements with an invalid value                                    |
|     :last-child      |     `p:last-child { }`      |                      All the <p> elements who are the last child of a parent element                       |
|    :last-of-type     |    `p:last-of-type { }`     |                   All the <p> elements who are the last <p> element of a parent element                    |
|        :link         |        `a:link { }`         |                                            All unvisited links                                             |
|    :not(selector)    |       `:not(div) { }`       |                               All the elements that are not a <div> element                                |
|    :nth-child(n)     |   `div:nth-child(3) { }`    |                     All the <p> elements that are the third child of a parent element                      |
|  :nth-last-child(n)  | `div:nth-last-child(3) { }` | All the <div> elements which are the third child of a parent element, counting from the last child element |
| :nth-last-of-type(n) | `p:nth-last-of-type(2) { }` |                         The second sibling from the last child of a parent element                         |
|   :nth-of-type(n)    |   `p:nth-of-type(2) { }`    |                                   The second sibling of a parent element                                   |
|    :only-of-type     |    `p:only-of-type { }`     |                     All the <p> elements which are only <p> elements inside its parent                     |
|     :only-child      |     `p:only-child { }`      |                       All the <p> elements which are only child of a parent element                        |
|      :optional       |    `input:optional { }`     |                              The input elements with no "required" attribute                               |
|      :required       |    `input:required { }`     |                       Selects input elements with the "required" attribute specified                       |
|        :root         |         `:root { }`         |                                      The Root element of the document                                      |
|     ::selection      |      `::selection { }`      |                            The portion of an element that is selected by a user                            |
|        :valid        |      `input:valid { }`      |                                 All the input elements with a valid value                                  |
|       :visited       |       `a:visited { }`       |                                         Selects all visited links                                          |

Pseudo-element selectors

|     Syntax     |         Example          |                          Description                          |
| :------------: | :----------------------: | :-----------------------------------------------------------: |
|    ::after     |      `p::after { }`      |        Inserts content after content of `<p>` element         |
|    ::before    |     `p::before { }`      |        Inserts content before content of `<p>` element        |
| ::first-letter |  `p::first-letter { }`   |          Selects first letter of every `<p>` element          |
|  ::first-line  |   `p::first-line { }`    |           Selects first line of every `<p>` element           |
| ::placeholder  | `input::placeholder { }` | Selects input elements with "placeholder" attribute specified |
|    ::marker    |      `::marker { }`      |                   Selects markers in a list                   |

## 2.3. CSS Effects

### 2.3.1 What is an effect

Effect - a change which is a result or consequence of an action or other cause.
Animation - graphics in motion transitioning over time.

- popmotion library
- framer-motion

### 2.3.2 Text effects

### 2.3.3 CSS Transform and transitions

```html
<head>
  <title>Moving Element with Arrow Keys</title>
  <style>
    .box {
      display: grid;
      width: 300px;
      height: 300px;
      margin: 100px;
      background-color: rgba(55, 255, 50, 0.5);
      border-radius: 12px;
      border: solid #6feb6f 4px;
      transition: all 1s ease-in;
    }

    .box:hover {
      transform: rotateZ(60deg);
      background-color: lightcoral;
      opacity: 50%;
      transition: all 1s ease-in;
    }
  </style>
</head>

<body>
  <div class="box"></div>
</body>
```

### 2.3.4 CSS animation

- animation property - for creating complex animations
- @keyframe rule - to control the execution of the steps of the animation

```html
 <style>
        @keyframes bounce {
            from {
                transform: translate3d(0, 0, 0);
            }

            to {
                transform: translate3d(640px, 0, 0);
            }
        }

        #ball {
            width: 100px;
            height: 100px;
            border-radius: 50%;
            background-color: lightblue;

            animation: bounce 2s linear;
            animation-direction: alternate;
            animation-iteration-count: infinite;
        }
    </style>
</head>

<body>
    <div id="ball"></div>
</body>
```

## 2.4. Debugging

### 2.4.1 Common errors

- Identify common errors in programming
  - skill based errors
  - rule based errors
  - knowledge based errors
- Explain good practices to avoid making errors

### 2.4.2 Handling errors

- CSS handles errors differently
- The code does not break or stop executing
- Code with errors is ignored

### 2.4.3 Debugging tools

### 2.4.4 Browser-specific CSS
