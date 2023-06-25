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
