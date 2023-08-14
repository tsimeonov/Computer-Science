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

## ex02

["Hello", "World", "."]

Create a function that displays the content of an array of strings.
One word per line.

Each word will be followed by a newline, including the last one.

(You can't use printf, time to reuse your my_putstr function ;-))

<details>
  <summary>Solution for my_print_words_array.c</summary>

```c
#include <unistd.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

// Function to print a string using the write system call
void my_putstr(char* str) {
    while (*str != '\0') {
        write(1, str, 1);
        str++;
    }
}

// Function to print the content of an array of strings
void my_print_words_array(string_array* arr) {
    for (int i = 0; i < arr->size; i++) {
        my_putstr(arr->array[i]);  // Print each word followed by a newline
        my_putstr("\n");
    }
}

int main() {
    string_array arr = {
        .size = 3,
        .array = {"Hello", "World", "."}
    };

    my_print_words_array(&arr);

    return 0;
}

```

</details>

---

Example 00

```c
Input: ["abc", "def", "gh"]
Output: abc
def
gh

Return Value: nil
```

Example 01

```c
Input: ["123"]
Output: 123

Return Value: nil
```

Example 02

```c
Input: ["", "", "hello"]
Output:

hello

Return Value: nil
```

## ex03

Count the size of each elements in an array.

Create a function `my_count_on_it` that receives a string array as a parameter and returns an array with the length of each string.

<details>
  <summary>Solution for my_count_on_it.c</summary>

```c
#include <stdlib.h>  // Include necessary headers

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif

// Function to count the length of each string in the string array
integer_array* my_count_on_it(string_array* arr) {
    if (arr == NULL) {
        return NULL;  // Return NULL if input array is NULL
    }

    // Allocate memory for the result array
    integer_array* result = (integer_array*)malloc(sizeof(integer_array));
    if (result == NULL) {
        return NULL;  // Memory allocation failed
    }

    // Set the size of the result array
    result->size = arr->size;

    // Allocate memory for the result array's integer values
    result->array = (int*)malloc(arr->size * sizeof(int));
    if (result->array == NULL) {
        free(result);  // Free memory if array allocation failed
        return NULL;
    }

    // Loop through each string in the input array and calculate its length
    for (int i = 0; i < arr->size; i++) {
        int length = 0;
        while (arr->array[i][length] != '\0') {
            length++;
        }
        result->array[i] = length;  // Store the length in the result array
    }

    return result;  // Return the integer_array containing lengths
}

int main() {
    // Create a string_array example
    string_array arr = {
        .size = 3,
        .array = {"Hello", "World", "."}
    };

    // Use the my_count_on_it function to get lengths of strings
    integer_array* lengths = my_count_on_it(&arr);
    if (lengths != NULL) {
        // Print the lengths of each string
        for (int i = 0; i < lengths->size; i++) {
            printf("%d\n", lengths->array[i]);
        }
        free(lengths->array);  // Free memory for the integer array
        free(lengths);  // Free memory for the integer_array
    }

    return 0;  // Return 0 to indicate successful execution
}

```

</details>

---

Example 00

```c
Input: ["This", "is", "the", "way"]
Output:
Return Value: [4, 2, 3, 3]
```

Example 01

```c
Input: ["aBc", "AbcE Fgef1"]
Output:
Return Value: [3, 10]
```

Example 02

```c
Input: ["aBc"]
Output:
Return Value: [3]
```
