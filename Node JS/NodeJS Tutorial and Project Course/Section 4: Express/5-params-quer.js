const express = require('express');
const app = express();
const { products } = require('./data');

app.get('/', (req, res) => {
	res.send('<h1>Home Page</h1> <a href="./api/products">product</a>');
});

app.get('/api/products', (req, res) => {
	const newProducts = products.map((products) => {
		const { id, name, image } = products;
		return { id, name, image };
	});
	res.json(newProducts);
});

// app.get('/api/products/:productID', (req, res) => {
// 	const { productID } = req.params;

// 	const singleProduct = products.find((product) => {
// 		return product.id === Number(productID);
// 	});
// 	if (!singleProduct) {
// 		return res.status(404).send("Product doesn't exit");
// 	}
// 	res.json(singleProduct);
// });

app.get('/api/products/:productID', (req, res) => {
	const { productID } = req.params;

	const singleProduct = products.find((product) => {
		return product.id === Number(productID);
	});
	if (!singleProduct) {
		return res.status(404).send('Product not found ');
	}
	res.json(singleProduct);
});

app.listen(5000, () => {
	console.log(`Server listening on port 5000...`);
});
