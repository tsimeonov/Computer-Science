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
