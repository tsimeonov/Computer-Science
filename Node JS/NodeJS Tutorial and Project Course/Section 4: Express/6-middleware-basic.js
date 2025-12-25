const express = require('express');
const app = express();
const logger = require('./logger');
// req => middleware => res

app.use('/api', logger);

app.get('/', (req, res) => {
	res.send('Home Page');
});

app.get('/about', (req, res) => {
	res.send('About Page');
});

app.get('/products', (req, res) => {
	res.send('Products Page');
});

app.listen(5000, () => {
	console.log(`Server listening on port 5000....`);
});
