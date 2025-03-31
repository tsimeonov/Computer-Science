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

##### Show the current index not just the current element

<details>
  <summary>Solution</summary>

```javascript
for (const item of menu.entries()) {
  console.log(item);
}

// OUTPUT

// [ 0, 'Focaccia' ]
// [ 1, 'Bruschetta' ]
// [ 2, 'Garlic Bread' ]
// [ 3, 'Caprese Salad' ]
// [ 4, 'Pizza' ]
// [ 5, 'Pasta' ]
// [ 6, 'Risotto' ]
```

</details>

---

##### Rename element 0 to element 1

<details>
  <summary>Solution</summary>

```javascript
for (const [i, el] of menu.entries()) {
  console.log(`${i + 1}: ${el}`);
}

// OUTPUT

// 1: Focaccia
// 2: Bruschetta
// 3: Garlic Bread
// 4: Caprese Salad
// 5: Pizza
// 6: Pasta
// 7: Risotto
```

</details>

---
