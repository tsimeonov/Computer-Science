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
