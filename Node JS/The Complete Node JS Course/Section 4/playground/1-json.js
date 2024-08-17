const fs = require("fs")

const book = {
    title: "Lord of the rings",
    author: "Tolkin"
}

// Take a objects and returns a JSON
const bookJSON = JSON.stringify(book)

console.log(bookJSON);

// Take a JSON and returns an obejct
const parseData = JSON.parse(bookJSON)
console.log(parseData.author);