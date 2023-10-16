## Week 1

### Course introduction

---

<h5>Introduction to the course</h5>

Context application programming interface (Context API) - Manage global state in React apps.

---

### Rendering Lists in React

List - represents an array in JavaScript

<details>
  <summary>Example</summary>

```js
const data = [
  {
    id: "1",
    title: "Tiramisu",
    description: "a dessert",
    price: 432,
  },
];

const topDessesrts = data.map((dessert) => {
  return {
    content: `${dessert.title} - ${dessert.description}`,
    price: dessert.price,
  };
});

export default function App() {
  console.log(topDessesrts);
  return <h1>Eamine the console output</h1>;
}
```

</details>

---

<h5>Render a simple list component</h5>

JSX -> Syntax extension for React
Component -> function that returns a JSX

---
