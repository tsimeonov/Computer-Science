<h1>Section 25: EJS</h1>

<h5>208: What is EJS?</h5>

EJS -> Embeded Javascript

1. Install the `EJS language support` in VS Code.
2. Initialise NPM and install `express` and `ejs`.
3. Create the following files and folders: `index.js`, `views/index.js`.

```js
// Index.js file
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
```

```html
<!-- Index.ejs file -->
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Document</title>
  </head>

  <body>
    <h1>Hey it's <%= dayType %>, <%= advice %></h1>
  </body>
</html>
```
