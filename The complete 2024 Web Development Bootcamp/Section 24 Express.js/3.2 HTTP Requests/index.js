import express from "express";
const app = express();

app.get("/", (req, res) => {
  res.send("<h1>Hello There</h1>");
});

app.get("/about", (req, res) => {
  res.send("<h1>About me</h1>");
});

app.listen(3000, () => {
  console.log("Server running on port 3000");
});
