## 1.0 Describing the UI

React is a JS library for rendering user interfaces (UI). UI is built from small units like buttons, text and images. React lets you combine them into reusable, nestable components.

### 1.1 Your first component

Components are one of the core concepts of React.
React applications are built from isolated pieces of UI called `components`. Components can be as small as a button, or as large as an entire page.

#### 1.1.1 Components: UI building blocks

#### 1.1.2 Defining a component

React component is a JS function that you can sprinkle with markup.

Step 1: Export the component

The `export default` prefix is a standard JS syntax (not specific to React). It lets you mark the main function in a file so that you can later import it from other files.

Step 2: Define the function

With `function Profile() {}` you define a JS function with the name `Profile`

Step 3: Add markup

The component returns an `<img/>` tag with `src` attributes. `<img/>` is written like HTML, but it's actually JS under the hood! This syntax is called `JSX` and it lets you embed markup indide JS.

Return statements can be written all on one line, as in this component:

```js
return <img src="https://i.imgur.com/MK3eW3As.jpg" alt="Katherine Johnson" />;
```

But if your markup isn't all on the same line as the `return` keyword, you must wrap it in a pair of parentheses:

```js
return (
  <div>
    <img src="https://i.imgur.com/MK3eW3As.jpg" alt="Katherine Johnson" />
  </div>
);
```

#### 1.1.3 Using a component

Now that you've defined your `Profile` component, you can nest it inside other components. For example, you can export a `Gallery` component that uses multiple `Profile` components:

```js
function Profile() {
  return <img src="https://i.imgur.com/MK3eW3As.jpg" alt="Katherine Johnson" />;
}

export default function Gallery() {
  return (
    <section>
      <h1>Amazing scientists</h1>
      <Profile />
      <Profile />
      <Profile />
    </section>
  );
}
```

<span style="font-weight: bold;">What the browser sees</span>

Notice the difference in casing:

- `<section>` is lowercase, so React knows we refer to a HTML tag
- `<Profile />` starts with a capital `P`, so React knows that we want to use our component called `Profile`.

In the end, this is what the browser sees:

```js
<section>
  <h1>Amazing scientists</h1>
  <img src="https://i.imgur.com/MK3eW3As.jpg" alt="Katherine Johnson" />
  <img src="https://i.imgur.com/MK3eW3As.jpg" alt="Katherine Johnson" />
  <img src="https://i.imgur.com/MK3eW3As.jpg" alt="Katherine Johnson" />
</section>
```

<span style="font-weight: bold;">Nesting and organizing components</span>

Components are regular JS functions, so you can keep multiple components in the same file.
Becsuse the `Profile` components are rendered inside `Gallery`we can say that `Gallery` is a parent component, rendering each `Profile` as a `child`.

