<h1>Section 24: Express.js with Node.js</h1>

<h5>200: What is Express?</h5>

<h5>201: Creating Our First Server with Express  </h5>

Creating an Express Server

1. Create directory

```
mkdir "3.1 Express Server"
```

2. Create index.js file

```
touch index.js
```

3. Initialise NPM

```
npm init -y
```

4. Install the Express packgage

```
npm i express
```

5. Write Server application in index.js

```js
import express from "express";
const app = express();

app.listen(3000, () => {
  console.log("Server is running on port 3000");
});
```

6. Start server

```
node your_app.js
```

<h5>202: HTTP Request</h5>

- HTTP - HyperText Transfer Protocol

- HTTP Methodscoea

  - GET
  - POST
  - PUT
  - PATCH
  - DELETE

- Starting a server

```js
import express from "express";
const app = express();

app.get("/", (req, res) => {
  res.send("Hello");
});

app.listen(3000, () => {
  console.log("Server running on port 3000");
});
```

- Using nodemon

```
nodemon index.js
```
