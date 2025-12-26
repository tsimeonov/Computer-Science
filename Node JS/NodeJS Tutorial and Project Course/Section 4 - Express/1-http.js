const http = require('http');
const { readFileSync } = require('fs');

//get all files
const homePage = readFileSync('./index.html');

const server = http.createServer((req, res) => {
	// console.log(req.method);
	// console.log(req.url);
	const url = req.url;

	// Home page
	if (url === '/') {
		res.writeHead(200, { 'content-type': 'text/html' });
		res.write(homePage);
		res.end();
	}
	// About page
	else if (url === '/about') {
		res.writeHead(200, { 'content-type': 'text/html' });
		res.write('<h1>About page</h1>');
		res.end();
	}
	// Not found
	else {
		res.writeHead(404, { 'content-type': 'text/html' });
		res.write('<h1>Page not found</h1>');
		res.end();
	}
});

server.listen(5000);
