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
