## 1. We'll take the case

<h6>CASE Statements</h6>

- Contains a `WHEN`, `THEN`, and `ELSE` statement, finishes with `END`.

```sql
CASE WHEN x = 1 THEN 'a'
     WHEN x = 2 THEN 'b'
     ELSE 'c' END AS new_column
```

---

<h6>CASE WHEN</h6>

```sql
SELECT
    id,
    home_goal,
    away_goal,
    CASE WHEN home_goal > away_goal THEN 'Home Team Win'
         WHEN home_goal > away_goal THEN 'Home Team Win'
         ELSE 'Tie' END AS OUTCOME
FROM match
WHERE season = '2013/2014';
```

|  id  | home_goal | away_goal |    outcome    |
| :--: | :-------: | :-------: | :-----------: |
| 1237 |     2     |     0     | Home Team Win |
| 1238 |     0     |     0     | Home Team Win |
| 1239 |     1     |     0     | Home Team Win |
| 1240 |     0     |     0     | Home Team Win |
