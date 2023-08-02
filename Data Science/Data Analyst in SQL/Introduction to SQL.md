# 1. Relational databases

## 1.1 Databases

Relational databes - defines relationships between tables of data inside the database.

## 1.2 Tables

Table rows and columns are reffered to as `records` and `fields`.
Fields ar set at database creation. There is no limit to the number of records.

<h4>Good table manners</h4>

Table names should...

- be lowercase
- have no spaces-use underscores insteaad.
- refer to a collective group or be plural.

<h4>Records</h4>

A record is a row that holds data on on individual observation.

<img src="./record.png" width="650px">

<h4>Fields</h4>

A field is a column that holds one piece of information aboout all records.

Field names should...

- be lowercase
- have no spaces
- be singular
- be different from other field names
- be different from the table name

<img src="./fields.png" width="650px">

<h4>Unique identifiers</h4>

- Unique identifiers are used to identify records in a table.
- They are unique and often numbers

<img src="./unique identifiers.png" width="650px">

## 1.3 Data

<h4>Strings</h4>
Strings - A string is a sequence of characters such as letters or punctuation.
`varchar` is a flexible and popular string data type is SQL.

<h4>Integers</h4>
Integers store whole numbers.

`INT` is a flexible and popular integer data type in SQL.

<h4>Floats</h4>
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

<h4>Selecting multiple fields</h4>

```sql
SELECT card_name, name
FROM patrons;
```

<h4>Selecting all fields</h4>

```sql
SELECT *
FROM patrons;
```
