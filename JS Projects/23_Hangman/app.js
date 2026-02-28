const wordEl = document.getElementById('word');
const wrongLetterEl = document.getElementById('wrong-letters');
const playAgainBtnEl = document.getElementById('play-button');
const popup = document.getElementById('popup-container');
const notification = document.getElementById('notification-container');
const finalMessage = document.getElementById('final-message');
const finalMessageRevealWord = document.getElementById(
	'final-message-reveal-word'
);

const figureParts = document.querySelectorAll('.figure-part');

const words = ['application', 'programming', 'interface', 'wizard'];

let selectWord = words[Math.floor(Math.random() * words.length)];

let playable = true;

const correctLetters = [];
const wrongLetters = [];

// Show hidden word

function displayWord() {
	wordEl.innerHTML = `
		${selectWord
			.split('')
			.map(
				(letter) => `<span class="letter">
			${correctLetters.includes(letter) ? letter : ''}</span>`
			)
			.join('')}
	`;

	const innerWord = wordEl.innerText.replace(/[ \n]/g, '');

	if (innerWord === selectWord) {
		finalMessage.innerText = 'Congarulations! You won!';
		finalMessageRevealWord.innerText = '';
		popup.style.display = 'flex';

		playable = false;
	}
}
