### Short Circuiting (&& and ||)

Short Circuiting the OR operator

```js
// Logical operators can use ANY data type, return ANY data type,
// short-circuiting
console.log(3 || "Todor"); //3
console.log("" || "Todor"); // Todor
console.log(true || 0); // 0
console.log(undefined || null); // null

console.log(undefined || 0 || "" || "Hello" || 23 || null);

// restaurant.numGuests = 23;
const guest1 = restaurant.numGuests ? restaurant.numGuests : 10;
console.log(guest1);

const guest2 = restaurant.numGuests || 10;
console.log(guest2);
```
