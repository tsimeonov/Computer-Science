const resultEl = document.getElementById('result');
const lengthEl = document.getElementById('length');
const uppercaseEl = document.getElementById('uppercase');
const lowercaseEl = document.getElementById('lowercase');
const numberstEl = document.getElementById('numbers');
const symbolsEl = document.getElementById('symbols');
const generateEl = document.getElementById('generate');
const clipboardEl = document.getElementById('clipboard');

const randomFunc = {
	lower: getRandomLower,
	upper: getRandomUpper,
	number: getRandomNumber,
	symbol: getRandomSymbol,
};

function generatePassword(lower, upper, number, symbol, length) {
	let generatePassword = '';
	const typesCount = lower + upper + number + symbol;
	const typeArr = [
		{ lower },
		{ upper },
		{ number },
		{ symbol }.filter((item) => Object.values(item[0])),
	];

	if (typesCount === 0) {
		return '';
	}

	for (let i = 0; i < length; i += typesCount) {
		typeArr.forEach((type) => {
			const funcName = Object.keys(type)[0];
			generatePassword += randomFunc[funcName]();
		});
	}

	const finalPassword = generatePassword.slice(0, length);

	return finalPassword;
}
