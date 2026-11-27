# Table of Content

| Language   | Difficulty | Problem # |                            Problem Name                            |
| ---------- | :--------: | :-------: | :----------------------------------------------------------------: |
| JavaScript |   7 kyu    |     1     |                   [Descending Order](#problem1)                    |
| JavaScript |   7 kyu    |     2     |              [Sort array by string length](#problem2)              |
| JavaScript |   8 kyu    |     3     | [Replace all vowel to exclamation mark in the sentence](#problem3) |

---

### Problem #1 Descending Order<a name="problem1"></a>

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

````
</details>

----

### Problem #2 Sort array by string length<a name="problem1"></a>

Write a function that takes an array of strings as an argument and returns a sorted array containing the same strings, ordered from shortest to longest.

<details>
  <summary>Solution</summary>

```javascript
function sortByLenght(array) {
	// Return an array containing the same strings, ordered fro shortest to longest

	let inputArray = array;

	inputArray.sort(function (a, b) {
		return a.length - b.length;
	});

	return inputArray;
}

console.log(sortByLenght(['Telescopes', 'Glasses', 'Eyes', 'Monocles']));
console.log(sortByLenght(['Beg', 'Life', 'I', 'To']));

````

</details>

---

### Problem #3 Replace all vowel to exclamation mark in the sentence<a name="problem3"></a>

Replace all vowel to exclamation mark in the sentence. aeiouAEIOU is vowel.

<details>
  <summary>Solution</summary>

```javascript
function replace(s) {
	let stringInput = String(s);
	let result = '';
	const vowels = 'aeiouAEIOU';

	for (let i = 0; i < stringInput.length; i++) {
		if (vowels.includes(stringInput[i])) {
			// runs when the if statements is true
			// It appends (+=) an exclamation mark "!" onto the end of "results"
			result += '!';
		} else {
			// runs when the if statement is false
			// it keeps the original character by appending stringInput[i] onto result
			result += stringInput[i];
		}
	}
	// Once every character has been checked and added, the function hands back the finisher result string.
	return result;
}

// vowels = aeiouAEIOU

console.log(replace('Hi!'));
console.log(replace('aeiou'));
console.log(replace('ABCDE'));
```

</details>

---
