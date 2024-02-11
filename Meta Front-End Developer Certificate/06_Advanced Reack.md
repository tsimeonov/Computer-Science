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

<h5>What are Keys in React?</h5>

- Use keys to identify and distinguish between list of elements
  Keys are indentifiers that identify changes, added or removed list items.
  Instructors - Instruct treatment of elents when updawts happen
- Determine the appropriate key
  Use stable identifiers(Unique IDs)
- Understand the implications of using keys incorrectly
  If used incorrectly may couse negative affect on performance and user interface glitches.

Keys instruct React about whetner a specific elemt's internal state should be preserved or not.
Keys help React determine which items have changed, are added or are removed.
Keys instruct React how to treat a specific element when an update occurs.

---

### Forms in React

<h5>What are contorlled components?</h5>
