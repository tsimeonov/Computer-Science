### Talking to Servers

#### 1. JSON

Requesting data from the server after the page has loaded is called AJAX (asynchronous Javascript and XML).

<details>
  <summary>Code Example</summary>

```javascript
// pretend this came from a server instead of me just declaring it here.
const responseFromServer = `{"name": "Luna","age": 10,"breed": "Havanese","location": {"city":"Seattle","state": "WA"}}`;

console.log(responseFromServer); // a string

const responseObject = JSON.parse(responseFromServer);

console.log(responseObject.name); // just the name
console.log(responseObject.location.city); // just the city
console.log(responseObject); // the whole object
```

```
<!-- Result -->
"{\"name\": \"Luna\",\"age\": 10,\"breed\": \"Havanese\",\"location\": {\"city\":\"Seattle\",\"state\": \"WA\"}}"
"Luna"
"Seattle"
Object {
  "age": 10,
  "breed": "Havanese",
  "location": Object {
    "city": "Seattle",
    "state": "WA",
  },
  "name": "Luna",
}
```

</details>

##### 1.1 JSON.stringify

<details>
  <summary>Code Example</summary>

```js
const dog = {
  name: "Luna",
  age: 10,
  breed: "Havanese",
  location: {
    city: "Seattle",
    state: "WA",
  },
};

const objString = JSON.stringify(dog);
console.log(objString);
```

```
<!-- Result -->
"{\"name\":\"Luna\",\"age\":10,\"breed\":\"Havanese\",\"location\":{\"city\":\"Seattle\",\"state\":\"WA\"}}"
```

</details>

---

##### Making an API request

```html
<button id="dog-btn">Gimme Doggo</button>
<div id="dog-target"></div>
```

```js
const DOG_URL = "https://dog.ceo/api/breeds/image/random";

const doggos = document.getElementById("dog-target");

function addNewDoggo() {
  const promise = fetch(DOG_URL);
  promise
    .then(function (response) {
    const processingPromise = response.text();
    return processingPromise;
  })
    .then(function (processedResponse) {
    const dogObject = JSON.parse(processedResponse);
    const img = document.createElement("img");
    img.src = dogObject.message;
    img.alt = "Cute doggo";
    doggos.appendChild(img);
  });
}

document.getElementById("dog-btn").addEventListener("click", addNewDoggo);
```

The process of calling out to the internet, reaching the server, the server processing, responding and comming back takes time.
It could be very fast, it could take a minute. You need to have the ability to wait in your code. This is called async code, the A in AJAX.

---

##### Async await

---

##### GET & POST API Data

---

##### isLetter Function

---

##### isLetter Function

---
