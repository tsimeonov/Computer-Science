import express from 'express';
import dotenv from 'dotenv';
import { connectDB } from './config/db.js';
import Product from './models/product.model.js';

dotenv.config();

const app = express();

// Witout this req.body will be undefined
app.use(express.json());

app.get('/api/products', async (req, res) => {
	try {
		const products = await Product.find({});
		res.status(200).json({ success: true, data: products });
	} catch (error) {
		res.status(404).json({ success: false, message: 'Server error' });
	}
});

app.post('/api/products', async (req, res) => {
	const product = req.body; // User will send this data

	if (!product.name || !product.price || !product.image) {
		return res
			.status(400)
			.json({ success: false, message: 'Please fill all images' });
	}

	const newProduct = new Product(product);

	try {
		await newProduct.save();
		res.status(201).json({ success: true, data: newProduct });
	} catch (error) {
		console.error('Error in create product', error.message);
		res.status(500).json({ success: false, message: 'Server Error' });
	}
});

app.delete('/api/products/:id', async (req, res) => {
	const { id } = req.params;

	try {
		await Product.findByIdAndDelete(id);
		res.status(200).json({ success: true, message: 'Product deleted' });
	} catch (error) {
		res.status(404).json({ success: false, messaage: 'Product not found' });
	}
});

// console.log(process.env.MONGO_URI);

app.listen(5000, () => {
	connectDB();
	console.log('Server started on port 5000');
});
