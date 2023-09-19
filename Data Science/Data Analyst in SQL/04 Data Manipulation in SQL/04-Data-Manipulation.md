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

---

### 1.3 CASE WHEN with aggregate functions

<h6>In CASE you need to aggregate</h6>

- `CASE` statements are great for
  - Categorizing data
  - Filtering data
  - Aggregating data

---

<h6>CASE WHEN with COUNT</h6>

```sql
SELECT
    season,
    COUNT(CASE WHEN hometeam_id = 8650 AND home_goal > away_goal
          THEN id END) AS home_wins,
    COUNT (CASE WHEN awayteam_id = 8650 AND away_goal > home_goal
           THEN id END) AS away_wins
FROM match
GROUP BY season;
```

|  season   | home_wins | away_wins |
| :-------: | :-------: | :-------: |
| 2011/2012 |     6     |     8     |
| 2011/2012 |     9     |     7     |
| 2011/2012 |    16     |    10     |

---

<h6>Percentages with CASE and AVG</h6>

```sql
SELECT
    season,
    ROUND(AVG(CASE WHEN hometeam_id = 8455 AND home_goal > away_goal THEN 1
              WHEN hometeam_id = 8455 AND home_goal < away_goal THEN 0
              END), 2) AS pct_homewins,
    ROUND(AVG(CASE WHEN awayteam_id = 8455 AND away_goal > home_goal THEN 1
              WHEN awayteam_id = 8455 AND away_goal < home_goal THEN 0
              END), 2) AS pct_awaywins
FROM match
GROUP BY season;
```

|  season   | pct_homewins | pct_awaywins |
| :-------: | :----------: | :----------: |
| 2011/2012 |     0.75     |     0.5      |
| 2011/2012 |     0.86     |     0.67     |
| 2011/2012 |     0.94     |     0.67     |
