const EventEmitter = require('events');

const customEitter = new EventEmitter();

customEitter.on('response', () => {
	console.log(`data received`);
});

customEitter.emit('response');
