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
