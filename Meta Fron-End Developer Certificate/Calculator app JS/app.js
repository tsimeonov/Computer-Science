const input1 = document.querySelector(".number1");
const input2 = document.querySelector(".number2");
const output = document.querySelector(".output");
const calculate = document.querySelector(".calculate");
const add = document.querySelector(".add");
const subtract = document.querySelector(".subtract");
const multiply = document.querySelector(".multiply");
const divide = document.querySelector(".divide");
const resetInput = document.querySelector(".reset-input");
const resetResult = document.querySelector(".reset-result");

add.addEventListener("click", () => {
  let result = parseInt(input1.value) + parseInt(input2.value);
  output.value = result;
});

subtract.addEventListener("click", () => {
  let result = parseInt(input1.value) - parseInt(input2.value);
  output.value = result;
});

multiply.addEventListener("click", () => {
  let result = parseInt(input1.value) * parseInt(input2.value);
  output.value = result;
});

divide.addEventListener("click", () => {
  let result = parseInt(input1.value) / parseInt(input2.value);
  output.value = result;
});

resetInput.addEventListener("click", () => {
  input1.value = "";
  input2.value = "";
});

resetResult.addEventListener("click", () => {
  output.value = "";
});
