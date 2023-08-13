function Buttons() {
  const input1 = document.querySelector(".number1");
  const input2 = document.querySelector(".number2");
  const output = document.querySelector(".output");

  const addNums = () => {
    let result = parseInt(input1.value) + parseInt(input2.value);
    output.value = result;
  };

  const subtractNums = () => {
    let result = parseInt(input1.value) - parseInt(input2.value);
    output.value = result;
  };

  const multiplyNums = () => {
    let result = parseInt(input1.value) * parseInt(input2.value);
    output.value = result;
  };

  const divideNums = () => {
    let result = parseInt(input1.value) / parseInt(input2.value);
    output.value = result;
  };

  const resetInputField = () => {
    input1.value = "";
    input2.value = "";
  };

  const resetResultField = () => {
    output.value = "";
  };

  return (
    <div className="btns">
      <button className="add" onClick={addNums}>
        Add
      </button>
      <button className="subtract" onClick={subtractNums}>
        Subtract
      </button>
      <button className="multiply" onClick={multiplyNums}>
        Multiply
      </button>
      <button className="divide" onClick={divideNums}>
        Divide
      </button>
      <button className="reset-input" onClick={resetInputField}>
        Reset Input
      </button>
      <button className="reset-result" onClick={resetResultField}>
        Reset Result
      </button>
    </div>
  );
}

export default Buttons;
