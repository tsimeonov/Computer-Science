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

---

### 1.1 In CASE things get more complex

<h6>CASE WHEN ... AND then some</h6>

- Add multiple logical conditions to your `WHEN` clause!

```sql
SELECT date, hometeam_id, awayteam_id,
    CASE WHEN hometeam_id = 8455 AND home_goal > away_goal
            THEN 'Chelsea home win!'
         WHEN awayteam_id = 8455 AND home_goal > away_goal
            THEN 'Chelsea away win!'
         ELSE 'LOSS or tie :(' END AS outcome
FROM match
WHERE hometeam_id = 8455 OR awayteam_id = 8455;
```

|    date    | hometeam_id | awayteam_id |      outcome      |
| :--------: | :---------: | :---------: | :---------------: |
| 2011-08-14 |    10194    |    8455     |  Loss or tie :(   |
| 2011-08-14 |    8455     |    8659     | Chelsea home win! |
| 2011-08-14 |    8455     |    9850     | Chelsea home win! |
| 2011-08-14 |    8472     |    8455     | Chelsea home win! |

---

<h6>What ELSE is being excluded?</h6>

- What's in your `ELSE` clause

```sql
SELECT date, hometeam_id, awayteam_id,
    CASE WHEN hometeam_id = 8455 AND home_goal > away_goal
            THEN 'Chelsea home win!'
         WHEN awayteam_id = 8455 AND home_goal > away_goal
            THEN 'Chelsea away win!'
         ELSE 'LOSS or tie :(' END AS outcome
FROM match
```

|    date    | hometeam_id | awayteam_id |    outcome     |
| :--------: | :---------: | :---------: | :------------: |
| 2011-08-14 |    10194    |    8455     | Loss or tie :( |
| 2011-08-14 |    8455     |    8659     | Loss or tie :( |
| 2011-08-14 |    8455     |    9850     | Loss or tie :( |
| 2011-08-14 |    8472     |    8455     | Loss or tie :( |

---

<h6>Correctly categorize your data with CASE</h6>

```sql
SELECT date, hometeam_id, awayteam_id,
    CASE WHEN hometeam_id = 8455 AND home_goal > away_goal
            THEN 'Chelsea home win!'
         WHEN awayteam_id = 8455 AND home_goal > away_goal
            THEN 'Chelsea away win!'
         ELSE 'LOSS or tie :(' END AS outcome
FROM match
WHERE hometeam_id = 8455 OR awayteam_id = 8455;
```

|    date    | hometeam_id | awayteam_id |      outcome      |
| :--------: | :---------: | :---------: | :---------------: |
| 2011-08-14 |    10194    |  **8455**   |  Loss or tie :(   |
| 2011-08-14 |  **8455**   |    8659     | Chelsea home win! |
| 2011-08-14 |  **8455**   |    9850     | Chelsea home win! |
| 2011-08-14 |    8472     |  **8455**   | Chelsea home win! |

---

<h6>Where to place your CASE?</h6>

```sql
SELECT date, season,
    CASE WHEN hometeam_id = 8455 AND home_goal > away_goal
            THEN 'Chelsea home win!'
         WHEN awayteam_id = 8455 AND home_goal > away_goal
            THEN 'Chelsea away win!' END AS outcome
FROM match
WHERE CASE WHEN hometeam_id = 8455 AND home_goal > away_goal
            THEN 'Chelsea away win!'
           WHEN hometeam_id = 8455 AND home_goal < away_goal
            THEN 'Chelsea away win!' END IS NOT NULL;
```

|    date    |  season   |      outcome      |
| :--------: | :-------: | :---------------: |
| 2011-08-14 | 2011/2012 | Chelsea home win! |
| 2011-08-14 | 2011/2012 | Chelsea home win! |
| 2011-08-14 | 2011/2012 | Chelsea home win! |
