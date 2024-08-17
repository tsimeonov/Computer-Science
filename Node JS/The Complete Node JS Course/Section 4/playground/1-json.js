const fs = require("fs")

const book = {
    title: "Lord of the rings",
    author: "Tolkin"
}

const bookJSON = JSON.stringify(book)
fs.writeFileSync("1-json.json", bookJSON)