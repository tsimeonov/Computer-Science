In JS, textual data is stored as strings.
There is no separate type for a single character.

### 5.3.1 Quotes

Strings can be enclosed within either single quotes, double quotes or backticks:

```js
let single = "single-quoted";
let double = "double-quoted";

let backticks = `backticks`;
```

### 5.3.2 Special characters

It is still possible to create multiline strings with single and double quotes by using a so-called "newline character", written as `\n`, which denotes a line break:

```js
let guestList = "Guests:\n * John\n * Pete\n * Mary";

alert(guestList); // a multiline list of guests, same as above
```

There are other, less common special characters:

|   Character   | Description |
| :-----------: | :---------: |
|     `\n`      |  New Line   |
| `\'`,`\"`,`\` |   Quotes    |
|     `\\`      |  Backslash  |
|     `\t`      |     Tab     |

### 5.3.3 String length

The `length` property has th string length:

```js
alert(`My\n`.length); // 3
```

### 5.3.4 Accessing characters

To get a character at position `pos`, use square brackets `[pos]` or call the method str.t(pos). The first character starts from the zero postion.

```js
let str = `Hello`;

// the first character
alert(str[0]); // H
alert(str.at(0)); // H

// the last character
alert(str[str.length - 1]); // o
alert(str.at(-1));
```

### 5.3.4 String are immutable

Strings can't be changed in JS. It's impossible to change a character.

```js
let str = "Hi";

str[0] = "h"; // error
alert(str[0]); // doesn't work
```

The usual workaround is to create a whole new string and assign it to `str` instead of the old one.
