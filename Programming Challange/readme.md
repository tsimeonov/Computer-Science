# Table of Content

| Language   | Difficulty | Problem # |         Problem Name          |
| ---------- | :--------: | :-------: | :---------------------------: |
| JavaScript |   8 kyu    |     1     | [Descending Order](#problem1) |

---

### Problem #1 Descending Order<a name="problem1"></a>

Create a function that takes an integer as an argument and returns "Even" for even numbers or "Odd" for odd numbers.

<details>
  <summary>Solution</summary>
  
  ```javascript
function descendingOrder(n) {
	// 1. Turn the number into text so we can separate the digits
	let text = String(n);

    // 2. Break the text into a list (array) of individual items
    let digits = text.split('');

    // 3. Sort the digits from smalles to largest
    digits.sort();
    digits.reverse();

    // 4. Glue the digits back together into one string
    let sortedText = digits.join('');

    // 5. Turn the text back into a real number and return it
    return Number(sortedText);

}

console.log(descendingOrder(42145));
console.log(descendingOrder(145263));

/\*
Variables:

- text
- digits
- sortedText
  \*/

/\*
Input: 42145 Output: 54421

Input: 145263 Output: 654321

Input: 123456789 Output: 987654321
\*/

```
</details>

---
```
