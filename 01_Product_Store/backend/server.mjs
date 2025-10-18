// const express = require("express")

import express from 'express';
import dotenv from 'dotenv';
import { connectBD } from '../config/db.js';

import productRoutes from '../routes/product.route.js';

dotenv.config();

const app = express();
const PORT = process.env.PORT || 5000;

app.use(express.json()); // allows us to accept JSON data in req.body

app.use('/api/products', productRoutes);

// console.log(process.env.MONGO_URI);

app.listen(PORT, () => {
	connectBD();
	console.log(`Server started at http://localhost:${PORT}`);
});
