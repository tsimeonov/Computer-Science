const main = document.getElementById('main');
const addUserBtn = document.getElementById('add-user');
const doubleBtn = document.getElementById('double');
const showMillionerBtn = document.getElementById('show-millionaires');
const sortBtn = document.getElementById('sort');
const calculateWealthBtn = document.getElementById('calculate-wealth');

let data = [];

getRandomUser();
getRandomUser();
getRandomUser();

// fetch random user and add money
async function getRandomUser() {
	const res = await fetch('https://corsproxy.io/?https://randomuser.me/api');

	const resData = await res.json();

	console.log(data);

	const user = resData.results[0];

	const newUser = {
		name: `${user.name.first} ${user.name.last}`,
		money: Math.floor(Math.random() * 1000000),
	};

	addData(newUser);
}

// Add new object to data arr
function addData(obj) {
	data.push(obj);

	updateDOM();
}

// Update DOM
function updateDOM(providedData = data) {
	// clear main div
	main.innerHTML = `<h2><strong>Person</strong> Wealth</h2>`;

	providedData.forEach((item) => {
		const element = document.createElement('div');
		element.classList.add('person');

		element.innerHTML = `<strong>${item.name}</strong> ${formatMoney(
			item.money
		)}`;
		main.appendChild(element);
	});
}

// Format number as number
function formatMoney(number) {
	return '$' + number.toFixed(2).replace(/\d(?=(\d{3})+\.)/g, '$&,');
}

addUserBtn.addEventListener('click', getRandomUser);
