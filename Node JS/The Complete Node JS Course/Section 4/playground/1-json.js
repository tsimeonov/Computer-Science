const fs = require("fs")

// const book = {
//     title: "Lord of the rings",
//     author: "Tolkin"
// }

// const bookJSON = JSON.stringify(book)
// fs.writeFileSync("1-json.json", bookJSON)

const dataBuffer = fs.readFileSync('1-json.json')

console.log(dataBuffer.toString());