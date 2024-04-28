import React from "react";
import ReactDom from "react-dom";

// CSS
import "./index.css";

// Setup Variabled
const firstBook = {
  img: "https://m.media-amazon.com/images/I/71I3CatXc8L._AC._SR360,460.jpg",
  title: "Butter: The Cult new Japanese Bestselling Novel",
  author: "Asako Yuzuki",
};

function BookList() {
  return (
    <section className="booklist">
      <Book
        img={firstBook.img}
        title={firstBook.title}
        author={firstBook.author}
      />
    </section>
  );
}

const Book = (props) => {
  console.log(props);
  return (
    <article className="book">
      <img src={props.img} alt="" />
      <h1>{props.title}</h1>
      <h4>{props.author}</h4>
    </article>
  );
};

ReactDom.render(<BookList />, document.getElementById("root"));
