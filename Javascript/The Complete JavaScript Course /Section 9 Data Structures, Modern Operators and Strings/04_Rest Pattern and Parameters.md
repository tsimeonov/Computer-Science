### Rest patterns and parameters

---

<details>
  <summary>1. Spread vs. Rest – Key Difference</summary>

Spread syntax (...) unpacks values from arrays/objects.

Rest syntax (...) collects values into arrays/objects or parameters.

They look the same but behave oppositely, depending on where they are used.

</details>

---

<details>
  <summary>2. Rest Pattern in Destructuring</summary>

Used to collect remaining elements of an array or object into a new array/object.

```js
// Array Destructing

const [a, b, ...others] = [1, 2, 3, 4, 5];
console.log(a); // 1
console.log(b); // 2
console.log(others); // [3, 4, 5]

// Object Destructing

const { sat, ...weekdays } = restaurant.openingHours;
console.log(sat); // Saturday's hours
console.log(weekdays); // { thu: ..., fri: ... }
```

</details>

---

<details>
  <summary>3. Rest Parameters in Functions</summary>

Used in function definitions to gather all remaining arguments into an array.

```js
// Summing Numbers
const add = function (...numbers) {
	let sum = 0;
	for (let i = 0; i < numbers.length; i++) sum += numbers[i];
	console.log(sum);
};

add(2, 3); // 5
add(5, 3, 7, 2); // 17

const x = [23, 5, 7];
add(...x); // 35 (spread passed to rest)
```

</details>

---
