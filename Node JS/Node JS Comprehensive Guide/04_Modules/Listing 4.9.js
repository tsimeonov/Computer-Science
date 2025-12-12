// Using the Event API

// const target = new EventTarget();

// target.addEventListener('customEvent', (event) => {
// 	console.log(`${event.type} was triggered`);
// 	// Output: customeEvent was triggered
// });

// const event = new Event('customEvent');

// target.dispatchEvent(event);

const target = new EventTarget();

target.addEventListener('customEvent', (event) => {
	console.log(`${event.type} was triggered`);
});

const event = new Event('customEvent');
target.dispatchEvent(event);
