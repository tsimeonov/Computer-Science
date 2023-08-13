import Heading from "./components/Heading";
import "./components/Heading.css";
import Output from "./components/Output";
import "./components/Output.css";
import Inputs from "./components/Inputs";
import "./components/Inputs.css";
import Buttons from "./components/Buttons";
import "./components/Buttons.css";
import "./index.css";

function App() {
  return (
    <div className="App">
      <Heading />
      <Output />
      <Inputs />
      <Buttons />
    </div>
  );
}

export default App;
