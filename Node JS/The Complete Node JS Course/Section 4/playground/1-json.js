const fs = require("fs")

// const book = {
//     title: "Lord of the rings",
//     author: "Tolkin"
// }

// const bookJSON = JSON.stringify(book)
// fs.writeFileSync("1-json.json", bookJSON)

// const dataBuffer = fs.readFileSync('1-json.json')
// const dataJSON = dataBuffer.toString()

// const data = JSON.parse(dataJSON)

// console.log(data.title);

const dataBuffer = fs.readFileSync("1-json.json")
const dataJSON = dataBuffer.toString()

const user = JSON.parse(dataJSON)

user.name = "Todor"
user.age = 35

const userJSON = JSON.stringify(user)
fs.writeFileSync("1-json.json", userJSON)

console.log(dataJSON);