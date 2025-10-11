// const express = require("express")

import express from 'express';
import dotenv from 'dotenv';
import { connectBD } from '../config/db.js';
import Product from '../models/product.model.js';

dotenv.config();

const app = express();

app.use(express.json()); // allows us to accept JSON data in req.body

app.post('/api/products', async (req, res) => {
	const product = req.body; // User will end the data

	if (!product.name || !product.price || !product.image) {
		return res
			.status(400)
			.json({ success: false, message: 'Please provide all fields' });
	}

	const newProduct = new Product(product);

	try {
		await newProduct.save();
		res.status(201).json({ success: true, data: newProduct });
	} catch (error) {
		console.error('Error in Create product:', error.message);
		res.status(500).json({ success: false, message: 'Server error' });
	}
});

// console.log(process.env.MONGO_URI);

app.listen(5000, () => {
	connectBD();
	console.log('Server started at http://localhost:5000');
});
