import React from "react";
import ReactDom from "react-dom";

// CSS
import "./index.css";

// Setup Variables
const books = [
  {
    id: 1,
    img: "https://m.media-amazon.com/images/I/71I3CatXc8L._AC._SR360,460.jpg",
    title: "Butter: The Cult new Japanese Bestselling Novel",
    author: "Asako Yuzuki",
  },
  {
    id: 2,
    img: "https://m.media-amazon.com/images/I/71UUUzTDmSL._AC._SR360,460.jpg",
    title: "On the Origin of Time: The instant Sunday Times bestseller",
    author: "Thomas Hertog",
  },
];

function BookList() {
  return (
    <section className="booklist">
      {books.map((book) => {
        return <Book key={book.id} {...book}></Book>;
      })}
    </section>
  );
}

const Book = (props) => {
  const { img, title, author } = props;

  return (
    <article className="book">
      <img src={img} alt="" />
      <h1>{title}</h1>
      <h4>{author}</h4>
    </article>
  );
};

ReactDom.render(<BookList />, document.getElementById("root"));
