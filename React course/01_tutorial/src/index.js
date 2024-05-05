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
      >
        <p>
          Lorem ipsum dolor sit amet, consectetur adipisicing elit. Distinctio
          id dolores delectus voluptatibus aspernatur, at dicta fuga ex culpa
          recusandae.
        </p>
      </Book>
    </section>
  );
}

const Book = ({ img, title, author, children }) => {
  // const { img, title, author } = props;
  return (
    <article className="book">
      <img src={img} alt="" />
      <h1>{title}</h1>
      <h4>{author}</h4>
      {children}
    </article>
  );
};

ReactDom.render(<BookList />, document.getElementById("root"));
