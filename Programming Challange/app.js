function descendingOrder(n) {
	// 1. Turn the number into text so we can separate the digits
	let text = String(n);
	// 2. Break the text into a list (array)
	let digits = text.split('');
	// 3. Sort the digits from smallest to largest
	digits.sort();
	digits.reverse();
	// 4. Glue the digits back together
	let sortedText = digits.join('');
	// 5. Turn the text back into a real number
	return Number(sortedText);
}

console.log(descendingOrder(42145));
console.log(descendingOrder(145263));

/*
Variables:
- text
- digits
- sortedText
*/

/*
Input: 42145 Output: 54421

Input: 145263 Output: 654321

Input: 123456789 Output: 987654321
*/
