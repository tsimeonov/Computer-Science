## 1. About React

React is a JS library for building user interfaces.

- Developed by Facebook 2011
- Angular, Vue, Svelte
- Components = User Interfaces
- Root component, component tree
- Independence
- Reusability
- Speed

## 2. Dev Environment

- Node
- node --version, minimum 5.2.0
- Browser = Chrome
- Text Editor = Visual studio code
- React Developer Tools

## 3. Terminal

- PWD - Full pathname to current working directory
- LS - list of directories
- MKDIR - Create a Directory/folder
- CD - Change directory
- CD .. - Navigate to Parent / One level up
- Clear - clear console
- Arrow key up /down - previous commands

## 4. NPM

- NPM INIT - creates package.json (manifest) file, list dependencies
- NPM INSTALL `<package name>` -- save
  Install package locally (default) and add to package.json
- NPM INSTALL `<package name>` -g
  Install package globally (access anywhere) SUDO
- NPM INSTALL `<package name>` --save-dev
  Use it only in development

## 5. Create React app

`Create-react-app` uses the following technologies.

- `Babel` - is a transcompiler that is mainly used to convert newer JS code into backwards-compatible JS code that can run by older JS engines.
- `Webpack` - Webpakc takes modules with dependencies and generates static assets representing those modules.

## 6. Install Create-react-app

Quick Overview

```js
npx create-react-app my-app
cd my-app
npm start
```

## 7. Folder structure

If the `node_modules` are removed or deleted, you can run `npm install` to bring the `node_modules` folder back.

## 8. Clean Boilerplate

In the `src` folder, remore the following files:

- `App.css`
- `App.js`
- `App.test.js`
- `index.css`
- `logo.svg`
- `serviceWorker.js`
- `setupTests.js`

Leave only `index.js`, but remove all the content from it.

## 9. First compoponent

```js
import React from "react";
import ReactDom from "react-dom";

function Greeting() {
  return <h4>This is my first component</h4>;
}

ReactDom.render(<Greeting />, document.getElementById("root"));
```

## 10. Text Editor Setup

## 11. First component in detail