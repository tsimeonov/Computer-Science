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

- HTTP Methods

  - GET -> Retrieves information from the specified resource, and should be used to request data (not modify it).
  - POST -> Sends data to the server for processing, usually reslulting in a change in the server state or side effects on the server.
  - PUT -> Updates a current resource or creates it if it doesn't exist, with the client providing a complete updated copy of the resource.
  - PATCH -> Updates parts of an existing resource, with the client providing only the parts of the resource that needs to be updated.
  - DELETE -> Removes the specified resource from the server.

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

- Install nodemon

```
sudo npm i -g nodemon
```

- Using nodemon

```
nodemon index.js
```

- Add another endpoint

```js
app.get("/about", (req, res) => {
  res.send("<h1>About me</h1>");
});
```

<h5>203. Postman</h5>

HTTP Response Status Codes

1. Information responses (100-199)
2. Successful responses (200-299)
3. Redirection messages (300-399)
4. Clien erro response (400-499)
5. Server error response (500-599)

- Code example:

```js
import express from "express";
const app = express();

app.get("/", (req, res) => {
  res.send("<h1>Hello There</h1>");
});

app.post("/register", (req, res) => {
  res.sendStatus(201);
});

app.put("/user/todor", (req, res) => {
  res.sendStatus(200);
});

app.patch("/user/angela", (req, res) => {
  res.sendStatus(200);
});

app.delete("/user/angela", (req, res) => {
  res.sendStatus(200);
});

app.listen(3000, () => {
  console.log("Server running on port 3000");
});
```

<h5>204: Introduction to Middelewares</h5>

Middleware is a software that provides common services and capabilities to applications outside of what's offered by the operation system

- Body Parser
  Node.js body parsing middleware.
  Parse incomming request bodies in a middleware before your handlers, availab,e under the `req.body` property.
