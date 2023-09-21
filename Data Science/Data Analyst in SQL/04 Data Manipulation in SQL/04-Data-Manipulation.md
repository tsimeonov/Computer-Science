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

---

## 2. Short and Simple subqueries

### 2.1 Where are subquery?

<h6>What is a subquery?</h6>

- A query nested inside another query

```sql
SELECT column
FROM (SELECT column
      FROM table) AS subquery;
```

- Useful for intermediary transformations

---

<h6>What do you do with subqueries?</h6>

- Can be in any part of a query
  - `SELECT`, `FROM`, `WHERE`, `GROUP BY`
- Can return a variety of information
  - Scalar quantities (`3.14158`, `-2`, `0.001`)
  - A list (`id = (12, 25, 392, 401, 939)`)
  - A table

---

<h6>Why subqueries?</h6>

- Comparing groups to summarized values
  - How did Liverpool compare to the English Premier League's average performance for that year?
- Reshaping data
  - What is the highest montly average of goals scored in the Bundesliga?
- Combining data that connot be joined
  - How do you get both the home and away team names into a table of match results?

---

<h6>Simple subqueries</h6>

- Can be evaluated independently from the outer query

```sql
SELECT home_goal
FROM match
WHERE home_goal > (
    SELECT AVG(home_goal)
    FROM match);
SELECT AVG(home_goal) FROM match;
```

```sql
1.560124214
```

---

<h6>Subqueries in the WHERE clause</h6>

- Whish matches in the 2012/2013 season scored home goals higher than overall average?

```sql
SELECT data, hometeam_id, awayteam_id, home_goal, away_goal
FROM match
WHERE season = '2012/2013'
    AND home_goal > (SELECT AVG(home_goal)
                     FROM match);
```

|    date    | hometeam_id | awayteam_id | home_goal | away_goal |
| :--------: | :---------: | :---------: | :-------: | :-------: |
| 2012-07-28 |    9998     |    1773     |     5     |     2     |
| 2012-07-28 |    9987     |    9984     |     3     |     3     |

---

<h6>Subquery filtering list with IN</h6>

- Which teams are part of Poland's league?

```sql
SELECT
    team_long_name,
    team_short_name AS abbr
FROM team
WHERE
    team_api_id IN
    (SELECT hometeam_id
    FROM match
    WHERE country_id = 15722);
```

| team_long_name | abbr |
| :------------: | :--: |
|  Rucg Chorzow  | CHO  |
|  Jagiellonia   | BIA  |

---

<h6>Subqueries in the FROM statement</h6>

- Restructuring and transforming your data
  - Transforming data from long to wide before selecting
  - Prefiltering data
- Calculating aggregates of aggregates
  - Which 3 teams has the highest average of home goals scored?
    1. Calcilate the `AVG` for each team
    2. Get the 3 highest of the `AVG` values

---
