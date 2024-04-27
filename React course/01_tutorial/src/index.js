import React from "react";
import ReactDom from "react-dom";

// CSS
import "./index.css";

function BookList() {
  return (
    <section className="booklist">
      <Book />
      <Book />
      <Book />
      <Book />
    </section>
  );
}

const Book = () => {
  return (
    <article className="book">
      <Image />
      <Title />
      <Author />
    </article>
  );
};

const Image = () => (
  <img
    src="https://m.media-amazon.com/images/I/71I3CatXc8L._AC._SR360,460.jpg"
    alt=""
  />
);

const Title = () => <h1>Butter: The Cult new Japanese Bestselling Novel</h1>;
const Author = () => <h4>Asako Yuzuki </h4>;
ReactDom.render(<BookList />, document.getElementById("root"));
