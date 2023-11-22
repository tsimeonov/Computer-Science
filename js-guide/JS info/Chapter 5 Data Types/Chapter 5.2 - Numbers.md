In modern JS, there are two types of numbers:

1. Regular numbers in JS are stored in 64-bit format IEEE-754, also as "double precision floating oint numbers".
2. Bigint numbers represent integers of arbitrary length. They are sometimes needed because a regular integer number can't safelt exceed - 2<sup>53</sup> -1 or be less than - 2<sup>53</sup> -1.

### 5.2.1 More ways to write a number

Imagine we need to write 1 billion. The obvious way is:

```js
let billion = 1000000000;
```

We also can use underscore `_` as the separator:

```js
let billion = 1_000_000_000;
```

Here the underscore `_` plays the role of the "syntactic sugar", it makes the number more readable. The JS engine simply ingnores `_` between digits, so it's exactly the same one billion as above.

In JS, we can shorten a number by appending the letter `"e"` to it and specifying the zeroes count:

```js
let billion = 1e9; // 1 billion, literally: 1 and 9 zeroes
alert(7.3e9); // 7.3 billions
```
