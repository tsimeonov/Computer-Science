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
