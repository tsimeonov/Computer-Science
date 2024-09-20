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

In everyday working with strings, you'll often want to insert calculated values or values stored in variables at certain positions within a string.

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

<h5>3.2.3: Boolean Values</h5>

Boolean values or Booleans are relatively easy to handle compared to numeric values and strings.
This is because they can only take one of two values: `true` or `false`.

```js
const isLoggedin = true;
const isAdmin = false;
```

<h5>3.2.4: Arrays</h5>

Arrays are nothing but lists; that is arrays can contain not only one but several values.

The most common and easiest way to create an array in JS is the `array literal notation`.

```js
// EXAMPLE OF ARRAY LITERAL NOTAION
const shoppingCart = [
  // Start of array definition
  "Record player", // first entry
  "Loudspeaker", // second entry
  "Amplifier", // third entry
  "Loudspeaker cables", // fourth entry
]; // end of array definition
```

`The Internal Structure of Arrays`

Arrays, in fact have what is called an `index-based struccture`, which means that every element in an array is stored at a particular index.
The counting of these indexes starts at 0 - as quite common in computer science, the second element is at index 1, and so on until the last element at index n-1.
Where `n` is the length of the array.

`Multidimensional Arrays`

Multidimensional array is adding an array into an array.

```js
// Adding price and qunatitiy to the original one dimensional array

const shoppingCart = [
  ["Record Player", 200, 1],
  ["Loudspeaker", 400, 2],
  ["Preamplifier", 80, 1],
  ["Loudspeaker cables", 20, 2],
];
```

<img style="border-radius: 3%;" src="./img/Chapter 3/multidimensiuonal array.png" width="500">

<h5>3.2.5: Objects</h5>

In the contex of objects, variables are called `properties` or `àttributes`, and functions are referred as `methods`.
Properties provide information about the object they are contained in, suah as person's name and age.
Object methods represent certain tasks related to the object in which they are defined, such as adjusting a persons'age.

`Definition of Objects`

The easiest way to create objects in JS is to use `object literal notaion`.
You simply define the object using braces and list the object properties and objects methods within these braces, separated by commas.

```js
const item = {
  name: "JS: comprehensive guide",
  price: 55.33,
  author: "Todor Simeonov",
  printDescription: function () {
    console.log(`${this.author}: ${this.name}`);
  },
};
```

The object in the example contains the three properties `name`, `price`, `author` as well as the method `printDescription`.

<h5>3.2.6: Special Data Types</h5>

If you declare a variable but do not initialize it by yet (by assigning a value to it), it has the value `undefined`.

```js
Let name;
console.log(name); // Output: undefined
```

The `null` data type, however represents an empty object.

```js
const dog = {
  name: "Bello";
}

const person = {
  firstName: "John",
  lastName: "Doe",
  pet: dog
}

console.log(person.pet); // Output: Object (name: "Bello")
person.pet = null;
console.log(person.pet); // Output: null
```

The `undefined` value is not meant to be manually assigned to a variable, but the `null` value is. The `undefined` value indicates that a variable has not yet been initialized; the `null` value represents an empty object pointer.

<h5>3.2.7: Symbols</h5>

Symbols are another kind of primitive data type introduced with ES2015.

```js
const symbol1 = Symbol();
const symbol2 = Symbol("exampleDescription");
const symbol3 = Symbol();
const symbol4 = Symbol("exampleDescription");
console.log(symbol1); // Output: Symbol()
console.log(symbol2); // Output: Symbol(exampleDescription)
console.log(symbol3); // Output: Symbol()
console.log(symbol4); // Output: Symbol(exampleDescription)
console.log(symbol1 === symbol3); // Output: false
console.log(symbol2 === symbol4); // Output: false
```

<h3>3.3: Deploying the Different Operators</h3>

<h5>3.3.1: Operators for Working with Numbers</h5>

JavaScript provides a set of `arithmetic` operators - that is, operators for working and calculating with numbers, including addition, subtraction, multiplication, division and the remainder operator (modulo).

<h5>3.3.2: Operators for Easier Assignment</h5>

<h5>3.3.3: Operators for Working with Strings</h5>

In JS, operator for joining two strings is the `+` operator.
The joining itself is also called `concatenation`.

```js
const salutaion = "Your personal newsletter ";
const name = "John Doe";
const message = salutaion + name;
```

<h5>3.3.4: Operators for working with boolean values</h5>

For working with Boolean values, there are various operators available in programming, which are referred to as logical operators.
There are three operatores in total: the `&&` operator (AND operator), the `||` operator (OR operator), and the `!` operator (negation operator).

<h5>3.3.5: Operators for working with bits</h5>

Bitwise operations enable you to work with sigle bits of values.

| Operator |           Meaning            |
| :------: | :--------------------------: |
|    %     |         Bitwise AND          |
|    \|    |          Bitwise OR          |
|    ^     |     Bitwise exclusive OR     |
|    ~     |         Bitwise NOT          |
|    <<    |      Bitwise left shift      |
|    >>    |     Bitwise right shift      |
|   >>>    | Bitwise unsigned right shift |

<h5>3.3.6: Operators for comparing values</h5>

Comparing two values is certainly one of the most frequently performed tasks in programming.

| Operator |         Meaning          |                                         Description                                          |
| :------: | :----------------------: | :------------------------------------------------------------------------------------------: |
|    ==    |          Equal           |                     Compares two values and checks ig they are the same                      |
|    !=    |        Unequal to        |                     Compares two values and checks if they are unewqual                      |
|   ===    |    Strictly equal to     |             Compares not only two values, but also the data type of the values.              |
|   !==    |   Strictly unequal to    |             Compares not only two values, but also the data type of the values.              |
|    <     |        Less than         |     Compares two values and chechs if the left operand is smaller than the right operand     |
|    >     |    Greater than sign     |     Compares two values and chechs if the left operand is greater than the right operand     |
|    <=    |  Less than or equal to   | Compares two values and checks if the left operand is smaller or equal to the right operand. |
|    >=    | Greater than or equal to | Compares two values and checks if the left operand is greater or equal to the right operand. |

<h5>3.3.7: The optional chaining operator</h5>

<details>
  <summary>Without the chaining operator</summary>

```javascript
const john = {
  firstName: "John",
  lastName: "Doe",
  contact: {
    email: "john.doe@javascripthandbuch.com",
  },
};
const james = {
  firstName: "James",
  lastName: "Doe",
};
if (john.contact && john.contact.email) {
  console.log(john.contact.email);
}
// Output: "john.doe@javascripthandbuch.com"
// Runtime error!
// console.log(james.contact.email);
if (james.contact && james.contact.email) {
  console.log(james.contact.email);
}
// No output
```

</details>

<details>
  <summary>With the chaining operator</summary>

```javascript
const john = {
  firstName: "John",
  lastName: "Doe",
  contact: {
    email: "john.doe@javascripthandbuch.com",
  },
};
const james = {
  firstName: "James",
  lastName: "Doe",
};

// Access to nested property via
// optional chaining operator:
console.log(john.contact?.email);

// Output: "john.doe@javascripthandbuch.com"
console.log(james.contact?.email);

// Output: undefined
// Alternative possibility: Using the
// operator on multiple hierarchy levels:
console.log(john?.contact?.email);
// Output: "john.doe@javascripthandbuch.com"
console.log(james?.contact?.email);
// Output: undefined
```

</details>

<h5>3.3.8: The logical Assignment Operators</h5>

There are a total of three assignemnt operators, each operating on two operands.

- The logical OR assignment operator `||=` is a combination of the logical `||` operator and the assignemnt opearator `=`. That is, it assigns the right operand to the left operand if the formet has a falsy value and is thus a short form of the notation `a || (a = b)`

```js
let a1 = 5;
let a2 = null;
let a3 = false;
a1 ||= 7; // ---> 5
a2 ||= 7; // ---> 7
a3 ||= 7; // ---> 7
console.log(`a1" ${a1}`); // "a1" 5"
console.log(`a2" ${a2}`); // "a2" 5"
console.log(`a3" ${a3}`); // "a3" 5"
```

- The logical AND assignment operator `&&=` works similarly, but it combines the logical `&&` operator and the assihnment operator = and assigns the right operand to the left operand only if the former has a `truthy` value. This means it is a short form of the notation `a && (a=b).`

```js
// logical AND assignment
let b1 = 5;
let b2 = null;
let b3 = false;
b1 &&= 7; // --> 7
b2 &&= 7; // --> null
b3 &&= 7; // --> false
console.log(`b1: ${b1}`); // "b1: 7"
console.log(`b2: ${b2}`); // "b2: null"
console.log(`b3: ${b3}`); // "b3: false"
```

- The operator for the logical nullish assignment `??=` in turn is a short form of the notation `a?? (a=b)`

```js
// logical nullish assignment
let c1 = 5;
let c2 = null;
let c3 = false;
c1 ??= 7; // --> 5
c2 ??= 7; // --> 7
c3 ??= 7; // --> false
console.log(`c1: ${c1}`); // "c1: 5"
console.log(`c2: ${c2}`); // "c2: 7"
console.log(`c3: ${c3}`); // "c3: false"
```

<h5>3.3.9: Operators for special operations</h5>

|                            Operation                             |            Operator             |                                                              Description                                                              |
| :--------------------------------------------------------------: | :-----------------------------: | :-----------------------------------------------------------------------------------------------------------------------------------: |
|                       Conditional operator                       | `<condition>?<value1>:<value2>` | Ternary operator that, depending on a condition (first operand), returns one of two values (defined by the second and third operands) |
| Deleting objects, object properties, or elements within an array |            `delete`             |                          Enables you to delete ements from arrays as well as object properties from obejcts                           |
|               Existence of a property in an object               |     `<property>in<object>`      |                                                Checks whether an object has a property                                                |
|                        Type verification                         |   `<object> instanceof<type>`   |                                   Binary operator that checks whter an object is of a specific type                                   |
|                        Type determination                        |       `typeof <>Operand`        |                                                Determines the data type of the operand                                                |

<h3>3.4: Controlling the flow of a program</h3>

<h5>3.4.1: Defining Conditional Statements</h5>

```js
const useIsLoggedIn = true;
if (userIsLoggedIn) {
  const message = `Welcome ${username}`;
  document.getElementbyId("message").textContent = message;
}
```

<h5>3.4.2: Defining Branches</h5>

```js
// Basic structure of a branch

if (condition) {
  // Program code to be executed if condition is met
} else {
  // Program code to be executed if condition is not met
}
```

`Testing Multiple Conditions`

```js
// Basic structure of an if-else-if-eles Branch
if (condition1) {
  // Program branch that will be executed if condition 1 is met
} else if (condition2) {
  // Program branch that will be executed if condition 2 is met
} else {
  // Program branch that will be executed if none of the previous ...
  // ... conditions is met
}
```

`Using More Complex Conditions`

```js
const userIsLoggedIn = true;
const userIsAdmin = false;
if (userIsLoggedIn && userIsAdmin) {
  //////
}
```

`Nesting Branches`

```js
const age = prompt("For what age are you looking for film tips?");
if (!isNaN(parseFloat(age)) && isFinite(age)) {
  if (age >= 18) {
    console.log("Show films with a rating of G, PG, PG-13, R, and NC-17.");
  } else if (age >= 17) {
    console.log("Show films with a rating of G, PG, PG-13, and R.");
  } else if (age >= 13) {
    console.log("Show films with a rating of G, PG, and PG-13.");
  } else if (age >= 6) {
    console.log("Show films with a rating of G and PG.");
  }
} else {
  console.error("Invalid age entered.");
}
```

<h5>3.4.3: Using the selector Operator</h5>

In programming, you'll often want to assign one value or another to a variable depending on a condition.

```js
// Structure of the selection operator
const variable = condition ? value1 : value2;
```

```js
// Example using selection operator
const age = prompt("Please enter your age");
const isAtLeast18 = age >= 18 ? true : false;
console.log(isAtLeast18);
```

<h5>3.4.4: Defining Multiple Branches</h5>

```js
// Basic Structure of a switch statement

switch (expression) {
  case value1:
    // Statements
    break;
  case value2:
    // Statements
    break;
  case value3:
    // Statements
    break;
  dedault:
    // Statements
}
```

`Canceling switch Statements`

We already mentioned that a `break` is usually written at the end of a `case` program branch, but haven't explained why. The reason is simple: the keyword `break` prevents the statements of the followin `case` expressions from being executed.

<h5>3.4.5: Defining Counting Loops</h5>

Overall, there are three different types of such loops, which are more or less suitable depending on the application.
First there is the `counting` loop, which executes code repeatedly on a counter variable.
Then there are the `head-controlled` loop and the `tail-controlled` loop, both of which execute code for as long as a certain condition is met. 

`Counting Loop Structure`

```js
// Basic structure of a for loop
for (Initialization; Condition; Increment expression;) {
  Loop body
}
```

`Real-Life Example: Generating Values in a pick list`

See lisitng 3.84 

<h5>3.4.6: Defining Head-Controlled Loops</h5>

Both head-controlled and tail-controlled loops basicaly function in the same way: the purpose of both loops is to execute one or more statements repeatedly so long as a given Boolean condition is fulfilled.
The difference between the two types of loops is the time at which the Boolean check takes place.



