const { readFile, writeFile } = require('fs').promises;

const start = async () => {
	try {
		const first = await readFile('./content/first.txt', 'utf-8');
		const second = await readFile('./content/second.txt', 'utf-8');
		await writeFile(
			'./content/result-mind-granade.txt',
			`This is awesome: ${first}, ${second}`,
			{ flag: 'a' }
		);
	} catch (error) {
		console.log(error);
	}
};
