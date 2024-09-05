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

<h5>3.1.2 Using Valid variable Names</h5>

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

`CamelCase Spelling`

You can use both uppercase and lowercase letters when assigning variable names. The only important thing is that you do it consistently. A general accepted notationm for example is the `lowerCamelCase` notation.

```js
const defaulName = 2334;
const firstName = "Todor"
```

`Meaningful Names`

Last but not least, we advise you to choose variables names that are as meaningful as possible so that you can tell the purpose of the variable from the name alone.

<h5>3.1.3: Defining Constants</h5>

In JS, there is a `const` keywoord for defining constants.

```js
const MAXIMUM = 5000
```

<h3>3.2: Using the Different Data Types</h3>

In total, JS distinguishes among six data type:
- Three `primitive` data types for representing numbers, strings and Boolean values.
- Three special data types `null`, `undefined` and Object type.





