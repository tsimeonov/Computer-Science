// 363

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

console.log(replace('Hi!'));
console.log(replace('aeiou'));
console.log(replace('ABCDE'));

/*



 */
