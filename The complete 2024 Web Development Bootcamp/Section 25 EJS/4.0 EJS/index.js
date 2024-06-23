import express from "express";

const app = express();

app.set("view engine", "ejs");

// Use res.render to load up an ejs view file
app.get("/", (req, res) => {
  const today = new Date();
  const day = today.getDay();

  let type = "the weekend";
  let adv = "It's time to have some fun";

  if (day === 0 || day === 6) {
  }

  res.render("index.ejs", {
    dayType: type,
    advice: adv,
  });
});

app.listen(3000, () => {
  console.log("Server running on port 3000");
});
