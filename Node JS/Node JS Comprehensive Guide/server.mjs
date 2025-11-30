// import { createServer } from 'http';

// const server = createServer();
// server.listen(8080, () => {
// 	console.log(
// 		`Server is listening to http://localhost:${server.address().port}`
// 	);
// });

import { createServer } from 'http';

const server = createServer();

server.listen(8080, () => {
	console.log(`Server is listening on port ${server.address().port}`);
});
