# 7.1 Accessing forms and form fields

## 7.1.1 Accessing Forms

There are several options to access forms on a web page.

- Via the methods for selecting elements `getElementById()`, `hetElementByClassName()`,
  `getElementsByTagName()`, `getElementsByName()`, `querySelector()` and `querySelectorAll()`
- Via the `forms` property of the `document` object
- Via a property of the `document` object that corresponds to the name of the corresponding form

## 7.1.2 Accessing form elements

For accessing individual form elements within a form, there are a few options:

- Using the methods for selecting elemenst `getElementById()`, `hetElementByClassName()`,
  `getElementsByTagName()`, `getElementsByName()`, `querySelector()` and `querySelectorAll()`
- Using the `elements` property of the respective `form` object

<details>
  <summary>Listing 7.4 Access to Form Elements</summary>

```js
function init() {
  const fieldUserNameById = document.getElementById("username");
  const fieldPasswordById = document.getElementById("password");
  const fieldRememberById = document.getElementById("remember");
  const buttonSubmitById = document.getElementById("submit");
  console.log(fieldUserNameById.id); // "username"
  console.log(fieldPasswordById.id); // "password"
  console.log(fieldRememberById.id); // "remember"
  console.log(buttonSubmitById.id); // "submit"

  const form = document.getElementById("login");
  const formElements = form.elements;
  console.log(formElements.length); // 4
  const fieldUserName = formElements[0];
  const fieldPassword = formElements[1];
  const fieldRemember = formElements[2];
  const buttonSubmit = formElements[3];
  console.log(fieldUserName.id); // "username"
  console.log(fieldPassword.id); // "password"
  console.log(fieldRemember.id); // "remember"
  console.log(buttonSubmit.id); // "submit"
}

document.addEventListener("DOMContentLoaded", init);
```

</details>

## 7.1.3 Reading the value of text fields and password fields

<details>
  <summary>Listing 7.4 Access to the values of text and password fields</summary>

```js
const inputUsername = document.getElementById("username");
const inputPassword = document.getElementById("password");
inputUsername.addEventListener("change", function (e) {
  console.log(this.value); // entered value
});
inputPassword.addEventListener("change", function (e) {
  console.log(this.value); // entered value
});
```

</details>
