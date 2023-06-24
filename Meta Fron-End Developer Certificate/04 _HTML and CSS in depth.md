# User Input and Forms
## Radio buttons
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
