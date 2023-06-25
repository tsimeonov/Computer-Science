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
            <label>
                <input type="radio" value="2" name="size"> 2-person table
            </label>
            <label>
                <input type="radio" value="4" name="size" checked> 4-person table
            </label>
            <label>
                <input type="radio" value="6" name="size"> 6-person table
            </label>
        </fieldset>
        <fieldset id="location">
            <label>
                <input type="radio" value="indoors" name="location" checked> Indoors
            </label>
            <label>
                <input type="radio" value="outdoors" name="location"> Outdoors
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
            <input type="date" id="booking_date" name="booking_date">
        </div>
        <div>
            <label for="booking_people">Number of people</label>
            <input type="range" id="booking_people" name="booking_people" min="1" max="10" value="4"
                oninput="this.nextElementSibling.value = this.value">
            <output>4</output>
        </div>
        <div>
            <!-- Set up a data list -->
            <label for="booking_location">Location</label>
            <input id="booking_location" name="booking_location" list="locations">
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
        grid-template-areas: 'header header'
            'nav main'
            'footer footer';
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
