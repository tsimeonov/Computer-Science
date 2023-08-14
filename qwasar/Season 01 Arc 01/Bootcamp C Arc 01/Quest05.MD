## ex00

Write a command line that counts and displays the number of regular files and directories in the current directory and all its sub-directories. It should include ".", the starting directory.

<details>
  <summary>Solution for my_count_files</summary>

```bash
find . -type f -o -type d | grep -v './\.' | wc -l
```

find .: Starts the search from the current directory.
-type f -o -type d: Filters the search to find either regular files (-type f) or directories (-type d).
| grep -v './\.': Pipes the output of find to grep to filter out entries that match the pattern ./. (which refers to the current directory).
| wc -l: Pipes the filtered output to wc (word count) with the -l flag, which counts the number of lines.

</details>

---

Example 00

```c
$>./my_count_files | cat -e
13$
$>
```
