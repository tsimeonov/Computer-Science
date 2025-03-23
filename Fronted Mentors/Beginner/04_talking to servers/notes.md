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

fetch is a function (builtin for the browser) that allows you to give it a URL like https://dog.ceo/api/breeds/image/random and it will try to get information from that API. In this case we're asking for a random image of a dog.

fetch gives you back a promise. Then we need to tell it what we think the API is going to send us back. In our case we're saying it's going to be text() from the API. There are others (and I'll show you one in a sec.)

You can do what's called promise chaining. This allows you to do one async action after another. In our case, we don't know how long it will take to transform our response into text (it's basically instant and usually is but it could not be). In any case, by returning the promise at the end of the first then, we then can use its data in the second then. That's why that's weird that way.

---

##### Async await

```html
<button id="dog-btn">Gimme Doggo</button>
<div id="dog-target"></div>
```

```js
const DOG_URL = "https://dog.ceo/api/breeds/image/random";

const doggos = document.getElementById("dog-target3");

async function addNewDoggo() {
  const promise = await fetch(DOG_URL);
  const processedResponse = await promise.json();
  const img = document.createElement("img");
  img.src = processedResponse.message;
  img.alt = "Cute doggo";
  doggos.appendChild(img);
}

document.getElementById("dog-btn3").addEventListener("click", addNewDoggo);
```

All await does is tell your code "pause execution on this function until this promise resolves." So on the line const `promise = await fetch(DOG_URL);` the function stops executing until your API call finishes and you have a response back. It then picks back up where it was. It makes the code read very linearly which is great.

---

##### GET & POST API Data

---

##### isLetter Function

---

##### isLetter Function

---
