# Table of Content

| Language   | Difficulty | Problem # |       Problem Name       |
| ---------- | :--------: | :-------: | :----------------------: |
| JavaScript |   8 kyu    |     1     | [Even or Odd](#problem1) |

---

### Problem #1 Even or Odd<a name="problem1"></a>

Create a function that takes an integer as an argument and returns "Even" for even numbers or "Odd" for odd numbers.

<details>
  <summary>Solution</summary>
  
  ```javascript
function evenOrOdd(number) {
  return (number % 2 === 0 ? 'Even' : 'Odd')
}
console.log(evenOrOdd(2)) // Output: Even
console.log(evenOrOdd(3)) // Output: Odd
  ```
</details>

---
