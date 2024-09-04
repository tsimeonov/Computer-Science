<h2>3. Language Core</h2>

The `syntax` determines the words that can be used in a given language, and the `grammar` defines the tules according to which these words can be arranged.

<h3>3.1: Storing values in variables</h3>

To store data temporarily use `varialbes`.

<h5>3.1.1: Defining variables</h5>

To be able to use variables, you need to perform two steps.
First you need to create the variable. this process is generally referred to as `variable declarataion`.

```js
let firstName
let lastName
```

Second you need to assign an actual value to the variable. This is referred to as `value assignment` or `variable initialization`

```js
firstName = "Todor"
lastName = "Simeonov"
```

<h3>3.1.2 Using Valid variable Names</h3>

`Keywords`

Do not use already reserved keyword or the interpreter will throw an error.

`Variale names already assigned`

If you use one of the predefined words `alert`, `document` to define a new varialbe, this can have unintended consequences and lead to errors in the program.

```js
const number = 22;  // Define variable
console.log(number); // Output 22
const console = 4711; // Define variable
console.log(number); // TypeError: console.log is not a function
```

`Allowed Characters`

- A varialbe name may only start with a letter, the dollar sign ($), or an underscore (_).
- A variable name must not start with a number
- A variable name may contain letters, numbers, dollar signs and underscores, but no other characters, like periods or hyphens.

`Case Sensitivity`

You should also note that varialve names are case-sensitive. For example, `name`, `Name` and `nAme` each represent different varialbes.

