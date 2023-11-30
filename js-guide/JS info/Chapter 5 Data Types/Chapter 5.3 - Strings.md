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

```js
let str = "Hi";
str = "h" + str[1]; // replace the string
alert(str); // hi
```

### 5.3.5 Changing the case

Methods toLowerCase() and toUpperCase() change the case:

```js
alert("Interface".toUpperCase()); // INTERFACE
alert("Interface".toLowerCase()); // interface
```

### 5.3.6 Searching for a substring

There are multiple ways to look for a substring within a string.

`str.indexOf`

This method looks the `substr` in `str`, starting from the given position `pos`, and returns the position where the match was founf or `-1` if nothing can be found.

```js
let str = "Widget with id";

alert(str.indexOf("Widget")); // 0, because 'Widget' is found at the beginning
alert(str.indexOf("widget")); // -1, not found, the search is case-sensitive

alert(str.indexOf("id")); // 1, "id" is found at the position 1 (..idget with id)
```

`includes, startWith, endsWith`

The more moedern method str.includes(substr, pos) returns `true/false` depending on whether `str` contains zsubstr within.
