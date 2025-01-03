# 1. Introducing Inner Joins

## 1.1 The ins and outs of INNER JOIN

- `key` - field tha uniquely identifies each record.
- `INNER JOIN` looks for records in both tables which match on a given field.

<img src="./join_data.png" width="650px">

The leadership Database schema

<img src="./data base schema.png" width="650px">

---

<h6>Our first INNER JOIN</h6>

```sql
-- INNER JOIN of presidents and prime-ministers, joining on country

SELECT prime_ministers.country, prime_ministers.continent, prime_minister, president
FROM prime_ministers
INNER JOIN presidents
ON prime_ministers.country = presidents.country
```

`NOTE` the `table.colum_name` must be used when selecting columns that exist in both tables to avoid an SQL error.

| country  | continent |  prime_minister  |        president        |
| :------: | :-------: | :--------------: | :---------------------: |
|  Egypt   |  Africa   | Mostafa Madbouly |  Abdel Fattah el-Sisi   |
|  Egypt   |  Europe   |  António Costa   | Marcelo Rebelo de Sousa |
| Portugal |   Asia    |  Shehbaz Sharif  |     Ram Nath Kovind     |

---

<h6>Aliasing tables</h6>

```sql
-- INNER JOIN of presidents and prime-ministers, joining on country

SELECT p1.country, p1.continent, prime_minister, president
FROM prime_ministers AS p1
INNER JOIN presidents AS p2
ON p1.country = p2.country
```

| country  | continent |  prime_minister  |        president        |
| :------: | :-------: | :--------------: | :---------------------: |
|  Egypt   |  Africa   | Mostafa Madbouly |  Abdel Fattah el-Sisi   |
|  Egypt   |  Europe   |  António Costa   | Marcelo Rebelo de Sousa |
| Portugal |   Asia    |  Shehbaz Sharif  |     Ram Nath Kovind     |

---

<h6>Using USING</h6>

```sql
-- INNER JOIN of presidents and prime-ministers, joining on country

SELECT p1.country, p1.continent, prime_minister, president
FROM prime_ministers AS p1
INNER JOIN presidents AS p2
USING(country)
```

| country  | continent |  prime_minister  |        president        |
| :------: | :-------: | :--------------: | :---------------------: |
|  Egypt   |  Africa   | Mostafa Madbouly |  Abdel Fattah el-Sisi   |
|  Egypt   |  Europe   |  António Costa   | Marcelo Rebelo de Sousa |
| Portugal |   Asia    |  Shehbaz Sharif  |     Ram Nath Kovind     |

# 1.2 Defining relationships

<h6>One-to-many relationships</h6>

```mermaid
flowchart LR
    A[Jane Austen]
    A --> Persuasion
    A --> B(Pride and Prejudice)
    A --> Emma
```

---

<h6>One-to-one relationships</h6>

```mermaid
flowchart LR
    A[finger]
    A --> Fingerprint
```

---

<h6>Many-to-many relationships</h6>

```mermaid
flowchart LR
    A[German] --> B(Germany)
     A --> D(Belgium)
    C[French] --> D(Belgium)
    E[Dutch] --> F(The Netherlands)
    E --> D(Belgium)
```

## 1.3 Multiple joins

<h6>What to join first?</h6>

```sql
SELECT p1.country, p1.continent, president, prime_minister
FROM prime_minister AS p1
INNER JOIN presidents AS p2
USING(country)
```

| country  | continent |  prime_minister  |        president        |
| :------: | :-------: | :--------------: | :---------------------: |
|  Egypt   |  Africa   | Mostafa Madbouly |  Abdel Fattah el-Sisi   |
|  Egypt   |  Europe   |  António Costa   | Marcelo Rebelo de Sousa |
| Portugal |   Asia    |  Shehbaz Sharif  |     Ram Nath Kovind     |

---

<h6>Chaining joins</h6>

```sql
-- SQL query for chaining inner joins

SELECT
    p1.country,
    p1.continent,
    president,
    prime_minister,
    pm_start
FROM prime_minister AS p1
INNER JOIN presidents AS p2
USING(country)
INNER JOIN prime_minister_terms AS p3
USING(prime_minister)
```

---

<h6>joining on multiple keys</h6>

```sql
SELECT *
FROM left_table
INNER JOIN right_table
ON left_table.id = right_table.id
    AND left_table.date = right_table.date
```

Diagram for an `INNER JOIN` `ON` the `id` AND `date` field

<img src="./join on multiple leys.png" width="750px">

# 2. Outer Joins, Cross Joins and Self Joins

## 2.1 LEFT and RIGHT JOINs

<h6>LEFT JOIN initial diagram</h6>

- `LEFT JOIN` will return all records in the left table, and those records in the right table that match on the joining filed provided.

Diagram for a `LEFT JOIN `On the `id` field.

<img src="./left join.png" width="750px">

---

<h6>LEFT JOIN syntax</h6>

```sql
SELECT p1.country, prime_minister, president
FROM prime_minister AS p1
LEFT JOIN presidents AS p2
USING(country)
```

Note. `LEFT JOIN` can also be written as `LEFT OUTER JOIN`.

---

<h6>RIGHT JOIN</h6>

Diagram for a `RIGHT JOIN` `ON` the `id` field.

<img src="./right join.png" width="750px">

---

<h6>RIGHT JOIN syntax</h6>

```sql
SELECT *
FROM left_table
RIGHT JOIN right_table
ON left_table.id = right_table.id
```

Note. `RIGHT JOIN` can also bewritten as `RIGHT OUTER JOIN`

---

<h6>LEFT JOIN or RIGHT JOIN?</h6>

- `RIGHT JOIN` is less commonly used than `LEFT JOIN`
- Any `RIGHT JOIN` can be-rewritten as a `LEFT JOIN`
- `LEFT JOIN` feels more intuitive to users when typing from left to right.

## 2.2 FULL JOINs

<h6>FULL JOIN initial diagram</h6>

- A `FULL JOIN` combines a `LEFT JOIN` and a `RIGHT JOIN`.

Diagram for a `FULL JOIN` `ON` the `id` field

<img src="./full join.png" width="750px">

---

<h6>FULL JOIN syntax</h6>

```sql
SELECT  left_table.id AS L_id,
        right_table_id AS R_id,
        left_table.val AS L_val,
        right_table.val AS R_val
FROM left_table
FULL JOIN right_table
USING (id)
```

---

<h6>FULL JOIN example using leaders database</h6>

```sql
SELECT p1.country AS country, prime_ministers, president
FROM prime_ministers AS p1
FULL JOIN presidents AS p2
ON p1.country = p2.country
LIMIT 10;
```

## 2.3 Crossing into CROSS JOIN

`CROSS JOIN` crates all possible combinations of two tables.

<img src="./cross join.png" width="350px">

---

<h6>CROSS JOIN syntax</h6>

```sql
SELECT id1, id2
FROM table1
CROSS JOIN table2
```

## 2.4 SELF JOINS

- `SELF JOINS` are tables joined with themselves
- They can be used to compare parts of the same table

# 3. Set theory for SQL Joins

## 3.1 Set theory for SQL Joins

<h6>Venn diagrams and set theory</h6>

<img src="./set theory.png" width="450px">

---

<h6>UNION diagram</h6>

- `UNION` takes two tables as input, and returns all records from both tables.

<img src="./union diagram.png" width="500px">

---

<h6>UNION ALL diagram</h6>

- `UNION ALL` takes two tables and returns all records from both tables, including duplicates.

<img src="./union all.png" width="500px">

---

<h6>UNION and UNION ALL syntax</h6>

```sql
SELECT *
FROM left_table
UNION
SELECT *
FROM right_table
```

<h6>UNION ALL syntax</h6>

```sql
SELECT *
FROM left_table
UNION ALL
SELECT *
FROM right_table
```

## 3.2 At the INTERSECT

<h6>INTERSECT Venn diagram</h6>

<img src="./intersect.png" width="600px">

---

<h6>INTERSECT diagram</h6>

<img src="./intersect diagram.png" width="600px">

---

<h6>INTERSECT syntax</h6>

```sql
SELECT id, val
FROM left_table
INTERSECT
SELECT id, val
FROM right_table
```

---

<h6>INTERSECT vs. INNER JOIN on two columns</h6>

INTERSECT syntax

```sql
SELECT *
FROM left_table
INTERSECT
SELECT *
FROM right_table
```

<img src="./intersect diagram.png" width="400px">

INNER JOIN syntax

```sql
SELECT *
FROM left_table
INNER JOIN right_table
ON left.id = right.id
    AND left.val = right.val
```

<img src="./inner join.png" width="400px">

## 3.3 EXCEPT

<h6>EXCEPT Venn diagram</h6>

<img src="./except.png" width="600px">

---

<h6>EXCEPT diagram</h6>

<img src="./except diagram.png" width="500px">

---

<h6>EXCEPT syntax</h6>

```sql
SELECT monarch, country
FROM monarchs
EXCEPT
SELECT prime_minister, country
FROM prime_ministers
```

## 4. Subqueries

### 4.1 Subquerying with semni joins and anti joins

<h6>Semi join</h6>

A `semi join` chooses records in the first table where a condition is met in the second table.

<img src="./semi join.png" width="600px">

---

<h6>Finish the semi join (an intro to subqueries)</h6>

```sql
SELECT president, country, continent
FROM prsident
WHERE country IN
    (SELECT country
    FROM states
    WHERE indep_year < 1800);
```

|        president        | country  | continent |
| :---------------------: | :------: | :-------: |
| Marcelo Rebelo de Sousa | Portugal |  Europe   |

---

<h6>Anti join</h6>

<img src="./anti join.png" width="600px">

---

<h6>An anti join with the presidents</h6>

```sql
SELECT president, country, continent
FROM prsident
WHERE continent LIKE '%America'
  AND country NOT IN
    (SELECT country
    FROM states
    WHERE indep_year < 1800);
```

| country |   president   |
| :-----: | :-----------: |
| Uruguay | Gabriel Boric |

### 4.2 Subqueries inside WHERE and SELECT

<h6>Syntax for subqueries inside WHERE</h6>

- All semi joins and nto joins we have seen included a subquery in `WHERE`
- `WHERE` is the most common place for subqueries

Syntax for query using `WHERE IN` statement

```sql
SELECT *
FROM some_table
WHEREsome_numeric_field IN (4,8,12)
```

---

<h6>Subqueries inside SELECT<h/6>

```sql
SELECT DISTINCT continent,
    (SELECT COUNT(*)
    FROM monarchs
    WHERE states.continent = monarch.continent) AS monarch_count
FROM states;
```

| continent | monarch_count |
| :-------: | :-----------: |
|  Africa   |       0       |
|   Asia    |       2       |
|  Europe   |       2       |
|  Oceania  |       0       |

....

### 4.3 Subqueries inside FROM

```sql
-- Query to return continents with monarchs and the year the most recent country gained independende
SELECT DISTINCT monarchs.continet, sub.most_recent
FROM monarchs,
    (SELECT
        continent,
        MAX(indep_year) AS most_recent
    FROM states
    GROUP BY continent) AS sub
WHERE monarchs.continent = sub.continent
ORDER BY continent;
```

| continent | most_recent |
| :-------: | :---------: |
|  Africa   |    1994     |
|   Asia    |    1814     |
