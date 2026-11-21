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

/*
 */
