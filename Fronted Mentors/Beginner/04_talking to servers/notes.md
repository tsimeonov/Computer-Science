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

##### API
