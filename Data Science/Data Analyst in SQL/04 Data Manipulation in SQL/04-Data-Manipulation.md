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

<h6>...to main queries!</h6>

```sql
SELECT team, home_avg
FROM (SELECT
        t.team_long_name AS team,
        AVG(m.home_goal) AS home_avg
      FROM match AS m
      LEFT JOIN team AS t
      ON m.hometeam_id = t.team_api_id
      WHERE season = '2011/2012'
      GROUP BY team) AS subquery
ORDER BY home_avg DESC
LIMIT 3;
```

|     team     | home_avg |
| :----------: | :------: |
| FC Barcelona |  3.9321  |
| Real Madrid  |  3.6543  |
|     PSV      |  3.3434  |

---

<h6>Things to remember</h6>

- You can create multiple subqueries in one `FROM` statement
- Alias them!
- Join them!
- You can join a sunquery to a table in `FROM`
  - Include a joining columns in both tables!

---

### 2.2 Subqueries in SELECT

<h6>SELECTing what?</h6>

- Returns a single value
  - Include aggregate values to compare to individual values
- Used in mathematical calculations
  - Deviation from the average

---

<h6>Subqueries in SELECT</h6>

```sql
SELECT
  season,
  COUNT(id) AS matches,
  (SELECT COUNT(id) FROM match) AS total_matches
FROM match
GROUP BY season;
```

|  season   | matches | total_matches |
| :-------: | :-----: | :-----------: |
| 2011/2012 |  3200   |     12837     |
| 2011/2012 |  3260   |     12837     |

---

<h6>SELECT subqueries for mathematical calculations</h6>

```sql
SELECT AVG(home_goal + away_goal)
FROM match
WHERE season = '2011/2012'
```

```sql
2.73
```

```sql
SELECT
  date,
  (home_goal + away_goal) AS goals,
  (home_goal + away_goal) - 2.72 AS diff
FROM match
WHERE season = '2011/2012';
```

---

<h6>SELECT subqueries -- things to keep in mind</h6>

- Need to rerurn a SINGLE value
  - Will generate an error otherwise
- Make sure you have all filters in the right place
  - Properly filter both the main and the subquery!

---

### 2.3 Subqueries everywhere! And best practices!

<h6>As many subqueries as you want...</h6>

- Can include multiple subqueries in `SELECT`, `FROM`, `WHERE`

---

<h6>Format your queries</h6>

- Line up `SELECT`, `FROM`, `WHERE` and `GROUP BY`

```sql
SELECT
  col1,
  col2,
  col3
FROM table1
WHERE col1 = 2;
```

---

<h6>Annotate your queries</h6>

```sql
-- This query filters fro col1 = 2
-- and only selects data from tabel1
SELECT
  col1,
  col2,
  col3
FROM table1
WHERE col1 = 2;
```

---

<h6>Is that subquery necessary?</h6>

- Subqueries require computing power
  - How big is your database?
  - How big is the table you're querying from?
- Is the subquery actually necessary?

---

## 3. Correlated queries, nested queries and common table expression

### 3.1 Correlated subqueries

- Uses values from the `outer` query to generate a result.
- Re-run for every row generated in the final data set
- Used for advanced joining, filtering and evaluating data

A correlated example

```sql
SELECT
  s.stage,
  ROUND (s.avg_goals, 2) AS avg_goal,
  (SELECT AVG(home_goal + away_goal)
  FROM match
  WHERE season = '2012/2013') AS overall_avg
FROM
  (SELECT
    stage,
    AVG(home_goal + away_goal) AS avg_goals
  FROM match
  WHERE season = '2012/2013'
  GROUP BY stage) AS s
WHERE s.avg_goals > (SELECT AVG(home_goal + away_goal)
                    FROM match AS m
                    WHERE s.stage > m.stage);
```
