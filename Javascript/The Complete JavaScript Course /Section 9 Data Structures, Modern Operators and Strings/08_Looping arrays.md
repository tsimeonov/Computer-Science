## Looping arrays: The for-of Loop

---

##### Looping over with the for of loop

<details>
  <summary>Solution</summary>

```javascript
const menu = [...restaurant.starterMenu, ...restaurant.mainMenu];

for (const item of menu) console.log(item);

// OUTPUT

// Focaccia
// Bruschetta
// Garlic Bread
// Caprese Salad
// Pizza
// Pasta
// Risotto
```

</details>

---
