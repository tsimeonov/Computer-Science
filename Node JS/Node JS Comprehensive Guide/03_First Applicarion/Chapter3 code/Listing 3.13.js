// Manipulating Web pages via Parameters

import { createServer } from 'http';
import { url } from 'inspector';

const server = createServer((request, response) => {
	response.writeHead(200, { 'content-type': 'text/html; charset=utf-8' });

	const url = new URL(request.url, 'http://localhost:8000');

	const body = `
  <!DOCTYPE html>
  <html>
    <head>
      <body>
        <h1 style="color: green">Hello ${
					url.searchParams.get('name') || 'Guest'
				} </h1>
      </body?
    </head>
  </html>`;

	response.end(body);
});

server.listen(8000, () => {
	console.log(`Server is running on port ${server.address().port}`);
});
