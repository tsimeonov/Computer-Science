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

## Step 3: The Frontend (The 'User Interface')

Just like the backend had a "starting" file (`server.mjs`), the frontend has one too.

`fronted/src/main.jsx `(The App's Starting Gun) 🚀

This file is the very first bit of your React code that runs. Its job is simple: find a spot on the webpage and inject your entire React application into it.

1. `import ...`: It imports `React` (to make components), `ReactDOM` (to put components on the page), your main `App` component, and some tools for styling (`ChakraProvider`) and page routing (`BrowserRouter`).

1. `createRoot(document.getElementById('root'))`: This line looks for an HTML element with the ID `root`. Where does it find this?

1. File: `fronted/index.html`: This is the only HTML file in your project. It's a very simple shell. If you look inside, you'll see `<div id="root"></div>`. This empty `div` is the "container" for your entire app.

1. `.render(...)`: Back in `main.jsx`, the `render` function injects your `<App />` component inside that `<div id="root">`.

You'll also notice it wraps `<App /> `in two other components:

- `<BrowserRouter>`: This enables "routing"—the ability to switch pages (like from `HomePage` to `CreatePage`) without the whole page reloading.

- `<ChakraProvider>`: This provides all the stylish UI components (like `Button`, `Input`, `Box`) from the Chakra UI library to your entire app.

So, `main.jsx` finds the empty `div` in `index.html` and fills it with your main `App` component, giving it styling and routing powers.

Let's look at `<App />` .

`fronted/src/App.jsx `(The Main Layout and Router) 🗺️

This component is the main "layout" for your entire application. It defines the parts of your site that are always present and the parts that change.

1. `<Navbar />`: This is the first thing inside the main `Box`. Since it's outside the `<Routes>` block, the Navbar will be visible on every single page of your application. This is great for consistent navigation.

1. `<Routes> ... </Routes>`: This block is the "page switcher." It's the part that looks at the URL in your browser and decides which component to show.

1. `<Route path="/" element={<HomePage />} />`: This line says, "If the user is at the main URL (like `http://localhost:5173/`), show the `HomePage` component."

1. `<Route path="/create" element={<CreatePage />} />`: This one says, "If the user goes to the /create URL (like `http://localhost:5173/create`), show the `CreatePage` component."

So, the `App` component essentially says: "Always show the `Navbar` at the top, and then, in the space below, show either the `HomePage` or the `CreatePage` depending on the URL."

`fronted/src/component/Navbar.jsx` (The Navigation Bar) 🧭

This is a reusable component whose only job is to be the navigation bar that you see at the top of every page (as defined in `App.jsx`).

It has three main features:

1. The Title: The text "Product Store 🛒". This is wrapped in a `<Link to={'/'}>` component, which means clicking it will always take you back to the home page.

1. Add Product Button: This is the button with the `<FaPlus />` icon. It's also wrapped in a `<Link to={'/create'}>`, so clicking it takes you to the "Create New Product" page.

1. Color Mode Toggle: This button uses Chakra UI's useColorMode hook. It cleverly checks if (colorMode === 'light') to decide whether to show the Moon icon (`<FaMoon />`) or the Sun icon (`ba`), and it calls toggleColorMode when clicked.

This is a great example of a clean, simple component that does one job well.

This is the main page of your app.

`fronted/src/pages/HomePage.jsx` (Displaying the Products) 🏠

This component's job is to get the list of products and display them as a grid of cards.

1. `const { fetchProducts, products } = useProductStore();`: This is important! It's reaching into a "store" (which we'll cover later) to get two things:

   - `products`: The list of products to display.

   - `fetchProducts`: A function it can call to get the products from the backend.

1. `useEffect(() => { ... }, [fetchProducts]);`: This is a React "effect" hook. It says: "The very first time this component is rendered, call the `fetchProducts()` function." This is what triggers the app to go get the data.

1. `{products.map((product) => ...)}`: This is the display logic. It "maps" (or loops) over the `products` array. For every single `product` it finds in the list, it renders a `<ProductCard key={product._id} product={product} /> `component.

1. `{products.length === 0 && ...}`: This is a nice fallback. It checks if the `products` list is empty. If it is, it shows a "No Product Found" message with a link to the create page.

So, the `HomePage` just knows to ask for the products and then loop over them, passing the details of each product to a `<ProductCard>` component to handle the actual display.

Let's check out the "Add Product" form. This is the other page our `App.jsx` can show.

`fronted/src/pages/CreatePage.jsx `(The "Add New Product" Form) ✍️

This component's job is to render a form with three inputs and a button.

1. `const [newProduct, setNewProduct] = useState({ ... });`: This is a React `useState` hook. It creates a "state" variable called `newProduct` to remember what the user types into the form fields. It's an object with `name`, `price`, and `image` keys.

1. `const { createProduct } = useProductStore();`: Just like `HomePage` grabbed the `fetchProducts` function, this page grabs the `createProduct` function from our "store".

1. `<Input ... onChange={(e) => ...} />`: Each `Input` field (for Name, Price, and Image) has an `onChange` handler. This handler calls setNewProduct every time the user types a character, keeping the `newProduct` state variable perfectly in sync with what's on the screen.
   `
1. `const handleAddProduct = async () => { ... }: This function is tied to the "Add Product" button's `onClick` event. When clicked, it:

   - Calls the `createProduct(newProduct)` function it got from the store, passing in the object from its state.

   - Uses a `toast` (a little pop-up) to tell the user if the action was a "Success" or "Error".

   - Resets the form by setting the state back to empty strings.

So, on the `HomePage`, we saw that it loops over a list of products and renders a `<ProductCard>`for each one. Let's look at that component now to see how the data actually gets displayed.

This is the component that the `HomePage` uses to display each individual product.

`fronted/src/component/ProductCard.jsx` (The Reusable Product Display) 📇

This is a reusable UI component. It's designed to receive a single `product` object as a "prop" (property) and display its details in a nice card format.

Here's what it does:

- Displays Product Info: It takes the `product` prop and uses `product.image`, `product.name`, and `product.price` to show the product's details.

- Gets Store Functions: Just like our page components, it uses `useProductStore()` to get the `deleteProduct` and `updateProduct` functions.

- Delete Button: It has an "Delete" `IconButton` (the trash can, `<AiFillDelete />`) with an `onClick` handler that calls `handleDeleteProduct(product.\_id)`. This function, in turn, calls the `deleteProduct` from the store.

- Edit Button & Modal: This is the most complex part:

  - The "Edit" `IconButton` (`<BiEditAlt />`) doesn't update the product directly. Instead, it calls `onOpen`.

  - `onOpen` opens a Modal (a pop-up window).

  - This modal contains another form (just like the `CreatePage`) for editing the name, price, and image.

  - Clicking the "Update" button in that modal calls `handleUpdateProduct`, which then uses the `updateProduct` function from the store.

That's the entire frontend UI! We've seen all the visual pieces. But you might be wondering...

- How does the `HomePage` actually get the products?

- How does the `CreatePage` actually send the new product?

All the components (`HomePage`, `CreatePage`, `ProductCard`) keep mentioning `useProductStore()`. This "store" is the final and most important piece of the puzzl

## Step 4: Connecting Frontend & Backend.

You were right to wonder about `useProductStore()`. That's the key. All your components are talking to one "store," and that store is the only thing that talks to the backend.

`fronted/src/store/product.js` (The Frontend's "Mission Control") 🚀

This file is your state management file. It uses a library called Zustand to create a "store."

Think of this store as a single, central "brain" for your frontend.

- It holds the state (the `products` array).

- It holds the functions that can change that state (like `createProduct`, `fetchProducts`, `deleteProduct`, `updateProduct`).

Any component (like `HomePage` or `ProductCard`) can use the `useProductStore()` hook to get access to this data and these functions.

Let's look at one function:

- `fetchProducts: async () => { ... }`

  - `const res = await fetch('/api/products');`: This is the connection! It makes a `GET` request to the `/api/products` URL.
    `
  - This is the exact same URL we defined in our `backend/routes/product.route.js file`!

  - `const data = await res.json();`: It gets the JSON data from the backend's response.

  - `set({ products: data.data });`: It updates the store's central `products` array with the data it just fetched.

Every component that uses `products` from the store will automatically re-render and show the new data!

The other functions work the same way:

- `createProduct` makes a `POST` request to `/api/products`.

- `deleteProduct` makes a `DELETE` request to `/api/products/${pid}`.

- `updateProduct` makes a `PUT` request to `/api/products/${pid}`.

You might be asking, "How does the frontend (running on l`ocalhost:5173`) know to send `/api/products` to the backend (running on `localhost:5000`)?"

That's the final piece of the puzzle, and it's in our `vite.config.js file`.

You've hit on the final piece of magic. This is a common setup in development, and the answer is in the frontend's configuration file.

`fronted/vite.config.js` (The "Redirect" Rule) ↪️

When you're running this project, your frontend (the React app) is served by a tool called Vite, which runs on a specific port (like `http://localhost:5173`).

But your backend (the Express server) is running on a different port, which you set in your `.env` file as `PORT=5000`.

A web browser, for security reasons, will not let a website on port `5173` make a `fetch` request to port `5000`. This is called CORS (Cross-Origin Resource Sharing).

To get around this during development, we use a proxy.

Look inside your `vite.config.js` file:

```js
    server: {
    	proxy: {
    		'/api': {
    			target: 'http://localhost:5000',
    		},
    	},
    },
```

This little block of code tells the Vite development server (on `5173`): "Hey, if you see any request that starts with `/api` (like the `fetch('/api/products')` from our store), don't try to find it on your own server. Instead, forward that request to `http://localhost:5000`, which is where our real backend is listening!"

So, `fronted/src/store/product.js` thinks it's just talking to `/api/products`, but the `vite.config.js` proxy secretly redirects that request to` http://localhost:5000/api/products` for it.

And that's it! That's the complete connection!

You've now seen how the whole MERN stack works together.
