# Week 1

## 1. Course Introduction

### 1.1 React Basics

Set up

1. run `npm init react-app example`, where 'example' is the actual name of your app.
2. `cd example`
3. `npm start`

## 2. React components and where they live

### 2.1 Why react

### 2.2 React.js overview

React.js - a js library for single-page applications.
Component-based architecture - build software based on resuable components of code.
Components - stand alone parts of a UI.

### 2.3 Introduction to functional components

React provides two types of components:

```js
// Functional components
function Welcome() {
  return <h1>Hello</h1>;
}

// Class components
class Welcome extends React.Component {
  render() {
    return <h1>Hello</h1>;
  }
}
```

Render syntax

```js
<ComponentName />
```

```mermaid
flowchart TD
    A[React app] --> B(Root component)
    B --> Header
    B --> Sidebar
    B --> Main
```

JSX - Synta extensio for JS

Example of creating a Rect component

1. Create file `Heading.js`
   Capitalizing a component name helps to distinguish JSX elements from HTML elements.
2. Inside the `Heading.js`, create the following:

```js
function Heading() {
  let title = "This is some heading text";
  return <h1>{title}</h1>;
}
```

Transpiling - interpreting a programming language and translating it ti a specifix target language.

### 2.4 Creating React Components

1. Remove all code inside the function `App()` in the `App.js` file
2. Create the `Header()` function

```js
function Header() {
  return <h1>Hello, World</h1>;
}
```

3. Type the `Header` funcion inside the `App` function

```js
import logo from "./logo.svg";
import "./App.css";

function Header() {
  return <h1>Hello, World</h1>;
}

function App() {
  return <Header />;
}

export default App;
```

### 2.5 The React project structure

- `node_modules` folder - repository for all the modules in your React app.
  It's automatically added when an npm package is installed.
- `public` folder - contains the assets that will be displayed in the app.
