# 1. Relational databases

## 1.1 Databases

Relational databes - defines relationships between tables of data inside the database.

## 1.2 Tables

Table rows and columns are reffered to as `records` and `fields`.
Fields ar set at database creation. There is no limit to the number of records.

<h5>Good table manners</h5>

Table names should...

- be lowercase
- have no spaces-use underscores insteaad.
- refer to a collective group or be plural.

<h5>Records</h5>

A record is a row that holds data on on individual observation.

<img src="./01 Introduction to SQL/record.png" width="650px">

<h5>Fields</h5>

A field is a column that holds one piece of information aboout all records.

Field names should...

- be lowercase
- have no spaces
- be singular
- be different from other field names
- be different from the table name

<img src="./01 Introduction to SQL/fields.png" width="650px">

<h5>Unique identifiers</h5>

- Unique identifiers are used to identify records in a table.
- They are unique and often numbers

<img src="./01 Introduction to SQL/unique identifiers.png" width="650px">

## 1.3 Data

<h5>Strings</h5>
Strings - A string is a sequence of characters such as letters or punctuation.
`varchar` is a flexible and popular string data type is SQL.

<h5>Integers</h5>
Integers store whole numbers.

`INT` is a flexible and popular integer data type in SQL.

<h5>Floats</h5>
Floats store numbers that include a fractional part.

`NUMERIC` is a flexible and popular float datat type in SQL.

# 2. Querying

## 2.1 Introduction to queries

Common keywords: `SELECT`, `FROM`

```sql
SELECT name
FROM patrons;
```

Query results often called `result` set.

<h5>Selecting multiple fields</h5>

```sql
SELECT card_name, name
FROM patrons;
```

<h5>Selecting all fields</h5>

```sql
SELECT *
FROM patrons;
```

## 2.2 Writing queries

<h5>Aliasing</h5>

Use `aliasing` to rename columns.

```sql
SELECT name AS first_name, year_hired
FROM employees;
```

| first_name | year_hired |
| ---------- | ---------- |
| Darius     | 2000       |
| Raven      | 2017       |
| Maggie     | 2022       |

<h5>Selecting distinct records</h5>

```sql
SELECT DISTINCT year_hired
FROM employees;
```

| year_hired |
| ---------- |
| 2020       |
| 2017       |
| 2022       |

<h5>Views</h5>

- A `view` is a virtual table that is the result of a saved `SELECT` statement.
- When accessed, views automatically update in response to updates in the underlying data.

```sql
CREATE VIEW employee_hire_years AS
SELECT id, name, year_hired
FROM employees;
```

<h5>Using views</h5>

```sql
SELECT id, name
FROM employee_hire_years
```

| id    | name   |
| ----- | ------ |
| 54378 | Darius |
| 94722 | Raven  |
| 45783 | Amy    |

## 2.3 SQL flavors

<h5>SQL flavors</h5>

- Both free and paid
- All used with relational databases
- Vast majority of leywords are the same
- All must follow universal standards
- Only the additions on top of these standards make flavors different

<h5>Two popular SQL flavors</h5>

PostgreSQL

- Free and open-source relational database system
- Created at the University of California, Berkeley
- `PostgreSQL` refers to both the PostgreSQL database system and its associated SQL flavor.

SQL Server

- Has free and paid versions
- Created by Microsoft
- T-SQL is Microsoft's SQL flavor, used with SQL Server databases.
