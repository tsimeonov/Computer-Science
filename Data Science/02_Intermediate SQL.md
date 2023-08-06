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
