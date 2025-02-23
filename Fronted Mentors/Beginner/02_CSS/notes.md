### CSS

---

##### CSS Overview & Rules

CSS Rule:

```css
h1 {
  color: red;
}
```

h1 -> Selector
color -> property
red -> value

##### CSS Cascade

---

##### ID's & !important

---

##### Pseudo-classes

<details>
  <summary>Example</summary>

```css
.hover-example {
  width: 100px;
  height: 100px;
  background-color: limegreen;
  color: white;
}
.hover-example:hover {
  background-color: blue;
  width: 150px;
  height: 150px;
}
```

```html
<div class="hover-example">Hover your mouse over me</div>
```

  </br>

</details>

</br>

<details>
  <summary>Example</summary>

```css
.first-child-example {
  color: crimson;
}
.first-child-example:first-child {
  color: limegreen;
}
```

```html
<ol>
  <li class="first-child-example">First</li>
  <li class="first-child-example">Second</li>
  <li class="first-child-example">Third</li>
</ol>
```

  </br>

</details>

---
