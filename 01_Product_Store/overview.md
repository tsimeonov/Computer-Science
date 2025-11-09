## Overivew

1. `High-Level Overview`: What are the two main parts of the project?

1. `The Backend`: We'll look at how the server and database are set up to store data.

1. `The Frontend`: We'll look at the React components that create the website you see.

1. `Connecting the Two`: We'll see the "magic" file that allows the frontend to talk to the backend.

1. `Package Files`: We'll quickly look at the files that manage the project's setup.

## Step 1: High-Level Overview (The big picture)

This project is a perfect example of a `MERN` stack application. That's a popular way to build websites, and the name "MERN" is an acronym for the four key technologies it uses:

- MongoDB: The `database`. It's where all the product data (name, price, image link) is stored.

- Express.js: The `backend framework`. It's a library that helps build the "engine" (the server) that runs on Node.js.

- React.js: The `frontend library`. It's used to build the user interface (UI)—the website you actually see and click on.

- Node.js: The `runtime environment`. It's what allows the server (the backend) to run

`Project Folders`

If you look at your files, you'll see two main folders:

1. `backend`: This folder contains all the code for the Express.js server, the MongoDB connection, and the Node.js environment. It's the "engine" and the database part.

1. `fronted`: This folder contains all the code for the React.js application. It's the website (the "User Interface") that the user interacts with.

So, the `backend` is like the kitchen and stockroom of a restaurant (handling data and requests), and the `fronted` is the dining room and menu that the customer (the user) sees.

## Step 2: The Backend (The "Engine" & Data)

`backend/server.mjs` (The Server's Ignition Key)

Think of this file as the main "on" switch for your server. Here's what it does, line by line:

1. `import ...`: It imports all the tools it needs. `express` is the main framework for building the server, `dotenv` is for loading secret keys, and `connectBD` is a function you wrote to connect to your database.

1. `dotenv.config()`: This line reads your `.env` file.

1. `const app = express()`: This creates your actual server application.

1. `const PORT = ...`: This sets the "port" your server will listen on. A port is like a specific door on your computer. It looks for `process.env.PORT` first.

1. `app.use('/api/products', ...)`: This is a key line! It tells the server, "If anyone sends a request to a URL starting with `/api/products`, pass that request over to `productRoutes` to handle it."

1. `app.listen(PORT, ...)`: This is the command that actually starts the server. It also runs your `connectBD()` function to connect to the database right at the start.

`Where do the "secrets" come from?`

You'll see the code uses `process.env.PORT` and `process.env.MONGO_URI`. This data comes from:

- File: `.env` This file holds "environment variables." It's a best practice to keep secrets like database passwords or specific ports out of your main code. This file provides the `PORT` (5000) and the `MONGO_URI` (your database connection string) to the rest of the application.

`How does it connect to the database?`

- File: `backend/config/db.js` This file has one job: connect to MongoDB. The `connectBD` function (which was called from `server.mjs`) takes that `MONGO_URI` secret from the .env file and uses a tool called `mongoose` to establish the connection.

So, to summarize: `server.mjs` starts the server, loads secrets from `.env`, and tells `db.js` to connect to the database.

So, we've started the server and connected to the database. But how does our database know what a "product" is supposed to look like?

That's the job of the `model`.

`backend/models/product.model.js` (The Data Blueprint) 📜

Think of this file as the official "blueprint" or "schema" for every single product in your database. It's a strict set of rules.

Here's the breakdown of the `productSchema`:

- `mongoose.Schema`: This is a tool from `mongoose` that helps you create the blueprint.

- `name: { type: String, required: true }`: This rule says, "Every product MUST have a `name`, and it MUST be a String (text)."

- `price: { type: Number, required: true }`: "Every product MUST have a `price`, and it MUST be a Number."

- `image: { type: String, required: true }`: "Every product MUST have an `image`, and it MUST be a String (we're storing a link to the image, not the image itself)."

- `timestamps: true`: This is a handy Mongoose feature. It automatically adds `createdAt` and `updatedAt` fields to your product, so you always know when it was created or last changed.

Finally, the line `const Product = mongoose.model('Product', productSchema); `takes this blueprint and creates a "model." The model is the tool you'll actually use in your code to create, read, update, or delete products that follow this set of rules.

So now we have:

1. A server that's running (`server.mjs`).

1. A connection to the database (`db.js`).

1. A strict blueprint for our data (`product.model.js`).

Next, we need to create the "addresses" (or "routes") that our frontend can use to actually do things with this model. Ready to look at the API routes?

Now we need a way for the outside world (like our frontend) to ask for that data. These are called `routes`.

`backend/routes/product.route.js` (The API's Address Book) 📮

This file is like the "address book" or "signpost" for our API. It defines the specific URLs (or "endpoints") that our frontend can contact to get, create, update, or delete products.

Remember in `server.mjs`, we had this line: `app.use('/api/products', productRoutes);`

That line means, "For any request that starts with `/api/products`, send it to the `product.route.js` file to figure out what to do next."

Here are the routes defined in that file:

- `router.get('/', getProducts);`

  - Method: `GET`

  - Full URL: `/api/products`

  - Purpose: Gets the list of all products. It's set up to call a function named `getProducts`.

- `router.post('/', async (req, res) => { ... });`

  - Method: `POST`

  - Full URL: `/api/products`

  - Purpose: Creates one new product. The logic for this is written right inside this file.

- `router.put('/:id', async (req, res) => { ... });`

  - Method: `PUT`

  - Full URL: `/api/products/123` (where `:id` is a variable for the product's ID)

  - Purpose: Updates a specific product that matches the ID.

- `router.delete('/:id', async (req, res) => { ... });`

  - Method: `DELETE`

  - Full URL: `/api/products/123`

  - Purpose: Deletes a specific product that matches the ID.

You might notice that the `getProducts` route points to a function, while the others have the code written directly in the routes file. This project also gives us a `controllers` file, which is a cleaner way to organize this.

Let's look at that file next to see the "brain" behind these routes

We've seen the "addresses" (`product.route.js`), now let's look at the "brain" that lives at those addresses.

`backend/controllers/product.controller.js` (The API's Brain) 🧠

This file is called a controller. Its job is to hold the actual logic for what to do when a route is called. A route (address) should be simple; it just points to a controller function (the brain) to do the heavy lifting.

In this file, you see functions like `getProducts`, `createProduct`, `updateProduct`, and `deleteProduct`.

Let's look at one:

- `export const getProducts = async (req, res) => { ... }`

  - This is the function that our `product.route.js` file calls.

  - `const products = await Product.find({});`: This is the key line. It uses the `Product` model (the blueprint we saw earlier) and tells Mongoose, "Please `find` all (`{}`) products in the database."

  - `res.status(200).json({ ... })`: This sends a "Success" (200) response back to the frontend, along with the `products` it found.

A quick note on your code:

You might have noticed something interesting. Your `product.route.js` file only uses the `getProducts` function from the controller.

But your `product.controller.js` file also has functions for `createProduct`, `updateProduct`, and `deleteProduct`.

Your `product.route.js` file also has logic for `POST`, `PUT`, and `DELETE` written directly inside it. This means you have the same logic in two places!

This is a common thing to see when code is being developed. The "cleanest" way (and what was probably intended) is for the `product.route.js` file to be only an address book, like this:

```js
// A cleaner way to write product.route.js
import express from 'express';
import {
	getProducts,
	createProduct,
	updateProduct,
	deleteProduct,
} from '../controllers/product.controller.js';

const router = express.Router();

router.get('/', getProducts);
router.post('/', createProduct);
router.put('/:id', updateProduct);
router.delete('/:id', deleteProduct);

export default router;
```

This way, your routes file is simple, and all your "brain" logic lives in the controller file. Your code works, but this is a great way to think about organizing it even better!

That's the entire backend! We have a server, a database connection, a data model, API routes, and controllers.
