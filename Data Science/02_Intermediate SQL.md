# 1. Selecting Data

## 1.1 Querying a database

<h6>COUNT()</h6>

- Counts the number of records with a value in a field.
- Use an alias for clarity.

```sql
SELECT COUNT (birthdate) AS count_birthdates
FROM people;
```

| count_birthdates |
| :--------------: |
|       6152       |

<h6>Using * with COUNT()</h6>

- `COUNT(field_name)` counts calues in a field.
- `COUNT(*)` counts records in a table.
- `*` represents all fields.

```sql
SELECT COUNT(*) AS totaql_records
FROM people;
```

| total_records |
| :-----------: |
|     8397      |

<h6>DISTINCT</h6>

- `DISTINCT` removes duplicates to return only unique values.

```sql
SELECT language
FROM films;
```

| language |
| :------: |
|  Danish  |
|  Danish  |
|  Greek   |
|  Greek   |
|  Greek   |

- Which languages are in our `films` table?

```sql
SELECT DISTINCT language
FROM films;
```

| language |
| :------: |
|  Danish  |
|  Greek   |

<h6>COUNT() with DISTINCT</h6>

- Combine `COUNT()` with `DISTINCT` to count unique values.

```sql
SELECT COUNT(DISTINCT birthdate) AS count_distinct_birthdates
FROM people;
```

| count_distinct_birthdates |
| :-----------------------: |
|           5398            |

- `COUNT()` includes duplicates.
- `DISTINCT` excludes duplicates.

## 1.2 Query execution

<h6>Order of execution</h6>

- SQL in not processed in its written order

```sql
-- Order of execution
SELECT name -- Secondexecution
FROM people -- First execution
LIMIT 10; -- Third execution
```

- `LIMIT` limits how many rewults we return
- Good to know processing order for debuggign and aliasing
- Aliases are declared in the `SELECT` statement

## 1.3 SQL style

<h6>SQL Formatting</h6>

- Formatting is not required

```sql
select title, release_year, country from filmls limit 3;
```

|   title    | release_year | country |
| :--------: | :----------: | :-----: |
|  Avengers  |     2012     |   USA   |
| Avengers 2 |     2014     |   USA   |
| Avengers 3 |     2018     |   USA   |

<h6>Best practices</h6>

```sql
SELECT title, release_year, country
FROM filmls
LIMIT 3;
```

|   title    | release_year | country |
| :--------: | :----------: | :-----: |
|  Avengers  |     2012     |   USA   |
| Avengers 2 |     2014     |   USA   |
| Avengers 3 |     2018     |   USA   |

<h6>Dealing with non-standard field names</h6>

- `release year` instead of `release_year`
- Put non-standard field names in double-quotes

```sql
SELECT title, "release year", country
FROM films
LIMIT 3;
```

# 2. Filtering Records

## 2.1 Filtering numbers

<h6>Comparison aperators</h6>

- `>` Greater than or after
- `<` Less than or before
- `=` Equal to
- `>=` Greater than or equal to
- `<=` Less than or equal to
- `<>` Not equal to

<h6>Order of execution</h6>

```sql
-- Written code:
SELECT item
FROM coats
WHERE color = 'green'
LIMIT 5;
```

## 2.2 Multiple criteria

<h6>Multiple criteria</h6>

- `OR`, `AND` and `BETWEEN`

```sql
SELECT *
FROM coats
WHERE color = 'yellow' OR length = 'short';
```

```sql
SELECT *
FROM coats
WHERE color = 'yellow' AND length = 'short';
```

```sql
SELECT *
FROM coats
WHERE buttons BETWEEN 1 AND 5;
```

<h6>AND, OR</h6>

- Silter films released in 1995 or 1995, and certified PF or R
- Enclose individual clauses in parentheses

```sql
SELECT title
FROM films
WHERE (release_year = 199 OR release_year = 1995)
    AND (certification = 'PG' OR certification = 'R')
```

## 2.3 Filtering text

- Filter a pattern rather than specific text
- `LIKE`
- `NOT LIKE`
- `IN`

<h6>LIKE</h6>

Used to search for a pattern in a field

`%` match zero, one or many characters

```sql
SELECT name
FROM people
WHERE name LIKE 'Ade%';
```

|    name    |
| :--------: |
|  Avengers  |
| Avengers 2 |
| Avengers 3 |

`_` match a singe character

```sql
SELECT name
FROM people
WHERE name LIKE 'Ev_';
```

| name |
| :--: |
| Eve  |

<h6>Wildcard position</h6>

```sql
SELECT name
FROM people
-- Find results that end on r
WHERE name LIKE '%r';
```

|     name      |
| :-----------: |
|  A.J Langer   |
| Aaron Seltzer |
| Aaron Seltzer |

```sql
SELECT name
FROM people
-- Find results which the third character is t
WHERE name LIKE '__t%';
```

|  name   |
| :-----: |
| Aitana  |
| Anthony |

<h6>WHERE, In</h6>

```sql
SELECT title
FROM films
WHERE release_year IN (1920, 1930, 1940);
```

|     title     |
| :-----------: |
| Over the Hill |
| Hell's angels |

## 2.4 NULL values

<h6>Missing values</h6>

- `COUNT(field_name)` includes only mom-missing values
- `COUNT(*)` includes missing values

`NULL`

- Missing values:
- Human error
- Information not available
- Unknown

<h6>IS NULL</h6>

```sql
SELECT name
FROM people
WHERE birthdate IS NULL;
```

|     name      |
| :-----------: |
| A. Raven Cruz |
| A.J. DeLucia  |

# 3. Aggregate Functions

## 3.1 Summarizing data

Aggregate functions return a single value

- `AVG()`
- `SUM()`
- `MIN()`
- `MAX()`
- `COUNT()`

## 3.2 Summarizing subsets

<h6>Using WHERE with aggregate functions</h6>

```sql
SELECT AVG(budget) AS abg_budget
FROM films
WHERE release_year >= 2010;
```

|    avg_budget    |
| :--------------: |
| 4123213.2311.... |

<h6>ROUND()</h6>

```sql
-- ROUND() to a whole number
SELECT ROUND (AVG(budget), 0) AS avg_budget
FROM films
WHERE release_year >= 2010;
```

| avg_budget |
| :--------: |
|  4123213   |

## 3.3 Aliasing and arithmetic

<h6>Order of execution</h6>

- Step 1: `FROM`
- Step 2: `WHERE`
- Step 3: `SELECT` (aliases are defined here)
- Step 4: `LIMIT`

# 4. Sorting and Grouping

## 4.1 Sorting results

<h6>ORDER BY</h6>

```sql
SELECT title, budget
FROM films
ORDER BY budget;
```

|      title      | budget |
| :-------------: | :----: |
|    Tarnation    |  218   |
| The mongol king |  3250  |

---

<h6>ASCending</h6>

```sql
SELECT title, budget
FROM films
ORDER BY budget ASC;
```

|      title      | budget |
| :-------------: | :----: |
|    Tarnation    |  218   |
| The mongol king |  3250  |

---

<h6>DESCending</h6>

```sql
SELECT title, budget
FROM films
ORDER BY budget DESC;
```

|      title      | budget |
| :-------------: | :----: |
|    Tarnation    |  null  |
| The mongol king |  null  |

```sql
SELECT title, budget
FROM films
WHERE budget IS NOT NULL
ORDER BY budget DESC;
```

|     title      |  budget   |
| :------------: | :-------: |
|    The host    | 123131231 |
| Lady Vengeance | 323423423 |

---

<h6>ORDER BY multiple fields</h6>

- ORDER BY field_one, field_two

```sql
SELECT title, wins
FROM best_movies
ORDER BY wins DESC;
```

|  title  | wins |
| :-----: | :--: |
|  LOTR   |  11  |
| Titanic |  11  |

- Think of `field_two` as a tie-breaker

```sql
SELECT title, wins, imdb_score
FROM best_movies
ORDER BY wins DESC, imdb_score DESC;
```

|  title  | wins | imdb_score |
| :-----: | :--: | :--------: |
|  LOTR   |  11  |     9      |
| Titanic |  11  |    7.9     |

---

<h6>Different orders</h6>

```sql
SELECT birthdate, name
FROM people
ORDER BY birthdate, name DESC;
```

| birthdate  |     name     |
| :--------: | :----------: |
| 1990-01-01 | Robert Brown |
| 1990-02-02 |  Anne Smith  |
