const name = "Todor Simeonov";
const age = 34;
function getName() {
  return name;
}

const message = `My name is ${getName()}, I am twice the age of ${age / 2}`;

console.log(message);

// Output -> My name is Todor Simeonov, I am twice the age of 17
