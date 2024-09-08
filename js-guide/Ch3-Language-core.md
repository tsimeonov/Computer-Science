<h2>3. Language Core</h2>

The `syntax` determines the words that can be used in a given language, and the `grammar` defines the tules according to which these words can be arranged.

<h3>3.1: Storing values in variables</h3>

To store data temporarily use `varialbes`.

<h5>3.1.1: Defining variables</h5>

To be able to use variables, you need to perform two steps.
First you need to create the variable. this process is generally referred to as `variable declarataion`.

```js
let firstName;
let lastName;
```

Second you need to assign an actual value to the variable. This is referred to as `value assignment` or `variable initialization`

```js
firstName = "Todor";
lastName = "Simeonov";
```

<h5>3.1.2 Using Valid variable Names</h5>

`Keywords`

Do not use already reserved keyword or the interpreter will throw an error.

`Variale names already assigned`

If you use one of the predefined words `alert`, `document` to define a new varialbe, this can have unintended consequences and lead to errors in the program.

```js
const number = 22; // Define variable
console.log(number); // Output 22
const console = 4711; // Define variable
console.log(number); // TypeError: console.log is not a function
```

`Allowed Characters`

- A varialbe name may only start with a letter, the dollar sign ($), or an underscore (\_).
- A variable name must not start with a number
- A variable name may contain letters, numbers, dollar signs and underscores, but no other characters, like periods or hyphens.

`Case Sensitivity`

You should also note that varialve names are case-sensitive. For example, `name`, `Name` and `nAme` each represent different varialbes.

`CamelCase Spelling`

You can use both uppercase and lowercase letters when assigning variable names. The only important thing is that you do it consistently. A general accepted notationm for example is the `lowerCamelCase` notation.

```js
const defaulName = 2334;
const firstName = "Todor";
```

`Meaningful Names`

Last but not least, we advise you to choose variables names that are as meaningful as possible so that you can tell the purpose of the variable from the name alone.

<h5>3.1.3: Defining Constants</h5>

In JS, there is a `const` keywoord for defining constants.

```js
const MAXIMUM = 5000;
```

<h3>3.2: Using the Different Data Types</h3>

In total, JS distinguishes among six data type:

- Three `primitive` data types for representing numbers, strings and Boolean values.
- Three special data types `null`, `undefined` and Object type.

<h5>3.2.1: Numbers</h5>

`Defining Numbers`

In JS, numbers are represented by a numeric value.

```js
const number1 = 5; // definition of an integer
const number2 = 0,5; // definition of a decimal
const numbee3 = -22; // definition of a negative number
```

`The value Range of Numbers`

The `value` range of numbers is limited in JS; That is you cannot define infinetly large or infinitely small numbers.

```js
console.log(Number.MIN_VALUE); // Output: 5e-324
console.log(Number.MAX_VALUE); // Output: 1.79445456456454e+308
```

<h5>3.2.2 Strings</h5>

In programming `strings` are sequences of characters.

`Definition of Strings`

The beginning and the end of a string are defined by quotation marks. YOu can use both single and double quotation marks.

`Escaping of Characters within Strings`

If you want to use quotaion marks within a string, you have several options. depending on the type of quotation marks you want ot use.

```js
const message1 = 'Your name is "John Doe"';
const message2 = "Your name is 'John Doe'";
const message3 = "Your name is 'John Doe'";
const message4 = 'Your name is "John Doe"';
console.log(message1); // Output: Your name is "John Doe"
console.log(message2); // Output: Your name is 'John Doe'
console.log(message3); // Output: Your name is 'John Doe'
console.log(message4); // Output: Your name is "John Doe"
```

`Using Template Stringsa`

In everyday worki with strings, you'll often want to insert calculated values or values stored in variables at certain positions within a string.

```js
const name = "John Doe";
const age = 44;
const message = "My name is " + name + ", I am " + age + " years old.";
console.log(message); // "My name is John Doe, I am 44 years old."
```

`Defining Placeholders within Strings`

Within template strings, you can define placeholders usingg `${}` notation.

```js
const name = "Todor Simeonov";
const age = 34;
const message = `My name is ${name}, I am ${age} years old`;

console.log(message);
```

`Evaluating Expressions within Strings`

```js
const name = "Todor Simeonov";
const age = 34;
function getName() {
  return name;
}

const message = `My name is ${getName()}, I am twice the age of ${age / 2}`;

console.log(message);

// Output -> My name is Todor Simeonov, I am twice the age of 17
```

<h5>3.2.3 Boolean Values</h5>
