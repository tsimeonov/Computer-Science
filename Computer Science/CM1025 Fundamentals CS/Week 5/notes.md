### Lesson 3.1 Counting

#### `Counting`

<details>
  <summary>The product rule</summary>
  
- Suppose there is a job with two tasks
    - There are `n` ways of completing the first task
    - There are `m` ways of completing the second task
- Then there are `m*n` ways of completing this job 
- How many ways can you pick an outfit? If you have 5 pairs of trousers and 7 shirts

5 \* 7 = 35

</details>

<details>
  <summary>What if you have 5 shirts, 3 pairs of trousers and 2 pairs of shoes?</summary>

- We can first consider 5 shirts and 3 pairs of trousers
- Using the product rule, there are `5 * 3 = 15` ways to pick an outfit
- Now, consider these `15 ways` and `two pairs of shoes`
- Again, based on the product rule, there are ` `

</details>

<details>
  <summary>Product rule for more tasks</summary>

- Suppose there is a job with `k` tasks
- If there are $n_i$ ways to completing task `i`
- Then there are $n_i * n_2 ... n_k$ ways of completing this job
- What if you have `5` shirts, `3` pairs of trousers and `2` pairs of shoes?
- There are 5 _ 3 _ 2 = 30 ways of schoosing an outfit

</details>

<details>
  <summary>Example</summary>

- How many sequences of 5 letters can yuo make using the english alphabet?

$25^5$ = 11881376

</details>

<details>
  <summary>The Sum Rule</summary>

- If a job can be done either in `n` ways OR in `m` ways, then the job can be
  completed in `m+n` ways.

- So, if you have `5` pairs of trousers and `7` shirts, we have (5+7) = 12 ways of
  choosing an item from them.

</details>

<details>
  <summary>The Sum Rule Example</summary>

- A teacher can choose a student to be her assistant from `5 classes`
- The classes contain 28, 21, 24, 25 and 27 students
- `Eaxh student` belongs to `only one class`
- How many possible assistants are there to choose from?
- The sum rule : 28 + 21 + 24 + 25 + 27 = 125

</details>

#### `Complex counting`

<details>
  <summary>How many valid passwords are there </summary>

- It has to be `five to seven characters` drawn from uppercase letters or digits.
  Every password must contain at least one uppercase letter.

- The oppsote/complement of a password with `no letters`

Passwords of length `5` or `6` or `7`

</details>

<details>
  <summary>Passwords</summary>

|      Length five      |      Length six       |     Length seven      |
| :-------------------: | :-------------------: | :-------------------: |
| All Passwords: $36^5$ | All Passwords: $36^6$ | All Passwords: $36^7$ |
|  No letters: $10^5$   |  No letters: $10^6$   |  No letters: $10^7$   |
|   Valid passwords:    |   Valid passwords:    |   Valid passwords:    |
|    $36^5$ - $10^5$    |    $36^6$ - $10^6$    |    $36^7$ - $10^7$    |
|      60,366,176       |     2,175,782,336     |    78,354,164,096     |

Total number of valid passwords:
60,366,176 + 2,175,782,336 + 78,354,164,096 = 80,590,312,608

</details>

<details>
  <summary>The subtraction rule</summary>

- What happens when lists have `items in common`
- Otherwise known as the principle of `Inclusion-Exclusion`

- If a chooce can be made from two lists containing `n` and `m` items
- The number of ways to make this choice is
  `n + m - the number of items in common` in the two lists

</details>

<details>
  <summary>The subtraction rule example</summary>

- How many integers less than 100 are divisible by either 2 or 3?
- Divisible by 2: 99 / 2 = 49.5 = 49
- Divisible by 3: 99 / 3 = 33 = 33
- Divisible by 6: 99 / 6 = 16.5 = 16

- Divisible by either 2 or 3: 49 + 33 - 16 = 66

</details>

### Lesson 3.2 The Pigeonhole Principle
