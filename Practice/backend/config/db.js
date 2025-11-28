import mongoose from 'mongoose';

export default connectDB = async () => {
	try {
		const conn = await mongoose.connect(process.env.MONGO_URI);
		console.log(`MongoDB Connectd ${conn.connection.host}`);
	} catch (error) {}
};
