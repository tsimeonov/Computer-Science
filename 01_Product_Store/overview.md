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
