// import { createServer } from 'http';

// const server = createServer();
// server.listen(8080, () => {
// 	console.log(
// 		`Server is listening to http://localhost:${server.address().port}`
// 	);
// });

import { createServer } from 'http';

const server = createServer((request, response) => {
	response.writeHead(200, { 'content-type': 'text/plain; charset=utf=8' });

	const body = `
  <!DOCTYPE html>
  <html>
    <head></head>
  </html>`;
});

server.listen(8000, () => {
	console.log(`Server is running on port ${server.address().port}`);
});
