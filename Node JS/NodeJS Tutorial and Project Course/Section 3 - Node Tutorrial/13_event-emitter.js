const EventEmitter = require('events');

const customEitter = new EventEmitter();

customEitter.on('response', (name, id) => {
	console.log(`data received user ${name} with id ${id}`);
});

customEitter.on('response', () => {
	console.log(`some other logic here`);
});

customEitter.emit('response', 'todor', 34);
