## ex00

Create a function my_range which returns a malloc'd array of `integers`. This `integer` array should contain all values between `min` and `max`.

Min included - max excluded.

If `min` value is greater or equal to `max`'s value, a null pointer should be returned.

Don't worry about "free", it will be done in our main().

<details>
  <summary>Solution for my_range.c</summary>

```c
#include <stdlib.h>

// Function to create an array of integers between min (inclusive) and max (exclusive)
int* my_range(int min, int max) {
    if (min >= max) {
        return NULL;  // Return null if min is greater than or equal to max
    }

    int size = max - min;
    int* array = (int*)malloc(size * sizeof(int));  // Allocate memory for the array

    if (array != NULL) {
        for (int i = 0; i < size; i++) {
            array[i] = min + i;  // Populate the array with values from min to max - 1
        }
    }

    return array;
}

// Example usage
int main() {
    int* range = my_range(5, 10);  // Get array with values from 5 to 9
    if (range != NULL) {
        for (int i = 0; i < 5; i++) {
            printf("%d ", range[i]);  // Print the values in the range
        }
        free(range);  // Free the allocated memory
    }

    return 0;
}
```

</details>

---

Example 00

```c
Input: 1 && 4
Output:
Return Value: [1, 2, 3]
```

Example 01

```c
Input: 7 && 10
Output:
Return Value: [7, 8, 9]
```

Example 0

```c
Input: 10 && 11
Output:
Return Value: [10]
```

---

## ex01

Let's allocate a string (or array of characters).

We have the string: "abc" and we want a copy in a new part of memory that you will have to `malloc`.

(Reproduce the behavior of strdup from `man strdup`)

<details>
  <summary>Solution for my_strdup.c</summary>

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Replicates the behavior of the strdup function.
// Creates a copy of the input string in a new memory location.
// Returns a pointer to the new copied string.
char* my_strdup(char* str) {
    if (str == NULL) {
        return NULL;  // Return null if the input string is null
    }

    // Allocate memory for the new string, including space for the null terminator
    char* new_str = (char*)malloc(strlen(str) + 1);

    if (new_str != NULL) {
        strcpy(new_str, str);  // Copy the input string to the new memory location
    }

    return new_str;
}

int main() {
    char* original_str = "abc";
    char* copied_str = my_strdup(original_str);

    if (copied_str != NULL) {
        printf("Original String: %s\n", original_str);
        printf("Copied String: %s\n", copied_str);
        free(copied_str);  // Free the allocated memory
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}

```

</details>

---

Example 00

```c
Input: "abc"
Output:
Return Value: "abc"
```

Example 01

```c
Input: "RaInB0"
Output:
Return Value: "RaInB0"
```

Example 02

```c
Input: ""
Output:
Return Value: ""
```
