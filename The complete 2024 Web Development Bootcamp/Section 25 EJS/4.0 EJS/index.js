import express from "express";

const app = express();

// Use res.render to load up an ejs view file
let bowl = ["Apples", "Oranges", "Pears"];

app.get("/", (req, res) => {
  res.render("index.ejs", { fruits: bowl });
});

app.listen(3000, () => {
  console.log("Server running on port 3000");
});
