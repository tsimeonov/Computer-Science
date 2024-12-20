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
  default:
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

The head-driven loop is also known as a while loop, first checks whether the Boolena conditon is met. If this is the case, the code in braces (the loop body) is executed.

```js
// The basic structure of a while loop

while (expression) {
  // Statement (s)
}
```

`Real-Life Example: Moving HTML Elements within a Web page`

See Listing 3.90 and 3.91

<h5>3.4.7: Defining Tail-Controlled Loops</h5>

The tail-controlled loop works similarly to the head-controlled loop, but in exactrly the opposite way. In other words: before the Boolean condition is checked, the loop body is already executed once.

```js
// The basic structure of a do-while Loop

do {
  // Statment (s)
} while (expression);
```

<h5>3.4.8: Prematurely terminating loops and loop iterations</h5>

`Prematurely terminating loops`

Sometimes you way want to terminate a loop prematurely.
Suppose you want to output the individual numbers from a number array, but only until the first odd number is found, at which point the loop is to be aborted.

```js
// Loop can be aborted via the break keyword

const numbers = [2, 4, 56, 22, 65, 2, 54, 88, 29];
console.log("Before the loop.");
for (let i = 0; i < numbers.length; i++) {
  // Iterate over ...
  const number = numbers[i]; // ... the number array.
  if (number % 2 === 1) {
    // If a number is odd ...
    console.log("Odd number found."); // ... output message ...
    break; // ... and terminate the loop.
  } // Otherwise ...
  console.log(number); // ... output the number.
}
console.log("After the loop.");
```

`Prematurely terminating loop iterations`

If you want to abort only the current loop iteration rather than the entire loop, use the `continue` keyword.

```js
// Loop Iterations can be aborted via the continue keyword

const numbers = [2, 4, 56, 22, 65, 2, 54, 88, 29];
console.log("Before the loop.");
for (let i = 0; i < numbers.length; i++) {
  // Iterate over ...
  const number = numbers[i]; // ... the number array.
  if (number % 2 === 1) {
    // If a number is odd ...
    console.log("Odd number found."); // ... output message ...
    continue; // ... and abort the
    // loop iteration.
  } // Otherwise ...
  console.log(number); // ... output the number.
}
console.log("After the loop.");
```

`Infinite Loops`

In the case of head-controlled and tail-controlled loops, you must be careful when using `continue`. If positioned incorrectly, the keyword can cause an `infinite` loop to occur - taht us a loop that is never aborted and thus sooner or later brings your application to its knees.

```js
// This code would produce an infinite loop

const numbers = [2, 4, 56, 22, 65, 2, 54, 88, 29];
console.log("Before the loop.");
let i = 0; // Initialize counter variable.
while (i < numbers.length) {
  // Iterate over ...
  const number = numbers[i]; // ... the number array.
  if (number % 2 === 1) {
    // If a number is odd ...
    console.log("Odd number found."); // ... output message ...
    continue; // ... and abort the
    // loop iteration.
  } // Otherwise ...
  console.log(number); // ... output the number and ...
  i++; // ... increment the ...
  // ... counter variable.
}
```

<h3>3.5: Creating reusable code blocks</h3>

<h5>3.5.1: Defining Functions</h5>

`Defining functions using a function declaration`

```js
// Creating a function using a function declaration

function showMessage() {
  console.log("Welcome");
}
```

`Defining funcions using a function expression`

```js
const showMessage = function () {
  console.log("Welcome");
};
```

<h5>3.5.2: Calling Functions</h5>

```js
showMessage(); // Output: "Welcome"
showMessage(); // Output: "Welcome"
```

<h5>3.5.3: Passing and evaluating function parameters</h5>

`Defining functions with a parameter`

```js
// Function declaration with parameter

function showMwssage(message) {
  console.log(message);
}
```

`Calling functions with a parameter`

```js
// Calling a function with an argument

showMwssage("James: Hello John");
showMwssage("John: Hello James");
```

`Defining Functions with multiple parameters`

```js
// Declaration of a Function with Multiple Parameters

function printPersonInformation(firsName, lastName, age) {
  console.log(`First name: ${firstName}`);
  console.log(`Last name: ${lastName}`);
  console.log(`Age: ${age}`);
}
```

`Calling functions with multiple parameters`

```js
printPersonInformation("John", "Doe", 44);
printPersonInformation("James", "Doe", 33);
```

`Defining functions within functions`

```js
// Funcions can be defined within other functions

function sum(x, y) {
  const result = normalize(x) + normalize(y);
  function normalize(i) {
    if (i < 0) {
      return 0;
    }
    return i;
  }
  return result;
}
console.log(sum(-5, 5)); // Output: 5
console.log(normalize(-5)); // ReferenceError: normalize is not defined
```

<h5>3.5.4: Defining Return Values</h5>

```js
function sum(x, y) {
  const result = x + y;
  return result;
}
```

<h5>3.5.5: Defining default values for parameters</h5>

Since ES2015, there is a relatively simple notation for using default parameters: As you see in the `password` parameter in the code below the default value of a parameter is simply written after the parameter.

```js
function createUser(username, email, password = "DeFaUlTPaSsWoRd") {
  const user = {
    username: username,
    email: email,
    password: password,
  };
  return user;
}
const john = createUser("John Doe", "john.doe@example.com", "secret");
console.log(john.username); // John Doe
console.log(john.email); // john.doe@example.com
console.log(john.password); // secret
const james = createUser("James Doe", "james.doe@example.com");
console.log(james.username); // James Doe
console.log(james.email); // james.doe@example.com
console.log(james.password); // DeFaUlTPaSsWoRd
```

<h5>3.5.6: Using Elements from array as parameters</h5>

Example 1

```js
// Using array values as argumenrs of a function

function createUser(username, email, password) {
  const user = {
    username: username,
    email: email,
    password: password,
  };
  return user;
}
const userData1 = ["John Doe", "john.doe@example.com", "secret"];
const userData2 = ["James Doe", "james.doe@example.com", "password"];
const john = createUser(userData1[0], userData1[1], userData1[2]);
const james = createUser(userData2[0], userData2[1], userData2[2]);
```

Example 2

```js
const userData1 = ["John Doe", "john.doe@example.com", "secret"];
const userData2 = ["James Doe", "james.doe@example.com", "password"];
const john = createUser(...userData1);
const james = createUser(...userData2);
```

<h5>3.5.7: Defining functions using short notation</h5>

```js
// Basic structure of an arrow funcion

(parameters) => {function body}
```

Normal function declaration vs arrow function

```js
const sum = (x, y) => {
  return x + y;
};
// ... is the same as ...
const sum = function (x, y) {
  return x + y;
};
```

`An Arrow function with one parameter`

```js
const showMwssagew = (message) => console.log(message);
```

`An arrow function without parameter`

```js
const showMwssagew = () => console.log("Hello world");
```

<h5>3.5.8: Modifying Strings via Functions</h5>

<details>
  <summary>Implementation and Usage of a tag function</summary>

```javascript
function tagFunction(strings, ...replacements) {
  const name = replacements[0]; // "John Doe"
  const age = replacements[1]; // 44 or 88, respectively
  if (age > 80) {
    return `${strings[0]}${replacements[0]}.`;
    // --> "My name is John Doe."
  }
  return `${strings[0]}${name}${strings[1]}${age}${strings[2]}.`;
  // --> "My name is John Doe, I am 44 years old."
}
const name = "John Doe";
let age = 44;

let message = tagFunction`My name is ${name}, I am ${age} years old`;
console.log(message);
// My name is John Doe, I am 44 years old.

age = 88;

message = tagFunction`My name is ${name}, I am ${age} years old`;
console.log(message);
// My name is John Doe
```

</details>

<h5>3.5.9: Functions in Detail</h5>

`The function call stack`

```js
// Code example to illustrate the call stack

function doSomething() {
  doSomethingB();
}

function doSomethingB() {
  doSomethingC();
}

function doSomethingC() {
  doSomethingD();
}

function doSomethingD() {}
```

`Execution contexts`

`Scopes`

`Scope Chain`

<h5>Calling Functions through User Interaction</h5>

<details>
  <summary>HTML code</summary>

```html
<!DOCTYPE html>
<html>
  <head lang="en">
    <meta charset="UTF-8" />
    <title>Example</title>
    <link rel="stylesheet" href="styles/main.css" type="text/css" />
  </head>
  <body>
    <div class="container">
      <div class="row">
        <label for="field1">X</label>
        <input id="field1" type="text" value="5" />
      </div>
      <div class="row">
        <label for="field2">Y</label>
        <input id="field2" type="text" value="5" />
      </div>
      <div class="row">
        <label for="result">Result: </label> <input id="result" type="text" />
        <button id="button-calculate-sum">Calculate sum</button>
      </div>
    </div>
    <script src="scripts/main.js"></script>
  </body>
</html>
```

</details>

<details>
  <summary>JavaScript code</summary>

```js
document.addEventListener("DOMContentLoaded", function () {
  const button = document.getElementById("button-calculate-sum");
  button.addEventListener("click", calculateSum);
});
function calculateSum() {
  const x = parseInt(document.getElementById("field1").value);
  const y = parseInt(document.getElementById("field2").value);
  const result = x + y;
  showResult(result);
}
function showResult(result) {
  const resultField = document.getElementById("result");
  resultField.value = result;
}
```

</details>

<h3>3.6: Responding to Errors and handling them correctly</h3>

<h5>3.6.1: Syntax errors</h5>

`Syntax errors` occur when the syntactic rules of JavaScript are disregarded.

```js
// Example of a syntax error

funktion divide(x, y) {
  return normalize(x) / normalize(y);
}
```

<h5>3.6.2: Runtime errors</h5>

`Runtime errors` are errors that occur only at runtime - that is , when a program is executed.

```js
// Example of a runtime error

function divide(x, y) {
  return normalized(x) / normalized(y);
}

function normalize(x) {
  return x <= 0 ? 1 : x;
}

console.log(normalize(-2)); // Output 1
console.log(normalize(-2)); // Output 5
console.log(normalize(-2)); // ReferenceError
```

<h5>3.6.3: Logic errors</h5>

`Logic errors` or bugs refer to those types of errors that are caused by incorrect logic of your program.

```js
// Example of a logic error

function divide(x, y) {
  return normalize(x) / normalize(y);
}
function normalize(x) {
  return x < 0 ? 1 : x;
}
console.log(divide(5, -1)); // Output: 5
console.log(divide(5, -2)); // Output: 5
console.log(divide(5, 0)); // Output: Infinity
```

<h5>3.6.4: The principle of error handling</h5>

<h5>3.6.5: Catching and handling errors</h5>

- The `try` keyword can be used to execeute a block of code that potentially produces errors
- The `catch`, it's possible to catch or react to errors

```js
// The basic structure of a try-catch block

try {
  // Execute the code that potentially produces errors
} catch (errors) {
  // Handle the error
}
```

<h5>3.6.6: Triggering Errors</h5>

<h5>3.6.7: Errors and the function call stack</h5>

<h5>3.6.8: Calling certain statements regardless of errors that have occured</h5>
