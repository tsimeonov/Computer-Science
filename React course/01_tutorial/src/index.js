import React from "react";
import ReactDom from "react-dom";

// CSS
import "./index.css";

// Setup Variabled
const author = "Asako Yuzuki";
const title = "Butter: The Cult new Japanese Bestselling Novel";
const image =
  "https://m.media-amazon.com/images/I/71I3CatXc8L._AC._SR360,460.jpg";

function BookList() {
  return (
    <section className="booklist">
      <Book />
    </section>
  );
}

const Book = (props) => {
  console.log(props);
  return (
    <article className="book">
      <img src={image} alt="" />
      <h1>{title}</h1>
      <h4>{author}</h4>
    </article>
  );
};

ReactDom.render(<BookList />, document.getElementById("root"));
