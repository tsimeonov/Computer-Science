### The Nullish Coalescing Operator (??)

```js
// restaurant.numGuests = 0;
const guests = restaurant.numGuests || 10;
console.log(guests); // 10

// NullishL null and undefined (NOT 0 or "")
const guestCorrect = restaurant.numGuests ?? 10;
console.log(guestCorrect); // 10
```
