import React from "react";
import ReactDom from "react-dom";

function Greeting() {
  return (
    <div>
      <h1>Jon Doe</h1>
      <p>This is my message</p>
    </div>
  );
}

ReactDom.render(<Greeting />, document.getElementById("root"));
