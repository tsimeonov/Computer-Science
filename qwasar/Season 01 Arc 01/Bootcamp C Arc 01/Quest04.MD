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

## ex04

Create a function that combines an array of strings from separator characters.

```c
["Hello", "World", "!"] && ' '
=> "Hello World !"
```

You will receive two parameters, an array with all the strings and a separator.

The function should return a string where all the strings from the array are joined with the separator.

<details>
  <summary>Solution for my_join.c</summary>

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

// Function to join strings in a string array with a separator
char* my_join(string_array* arr, char* separator) {
    if (arr == NULL || arr->array == NULL || separator == NULL) {
        return NULL;  // Return NULL if any input is invalid
    }

    int total_length = 0;

    // Calculate the total length required for the joined string
    for (int i = 0; i < arr->size; i++) {
        total_length += strlen(arr->array[i]);
    }

    // Account for separator lengths and null terminator
    total_length += (arr->size - 1) * strlen(separator) + 1;

    // Allocate memory for the result string
    char* result = (char*)malloc(total_length * sizeof(char));
    if (result == NULL) {
        return NULL;  // Memory allocation failed
    }

    // Initialize the result string
    result[0] = '\0';

    // Append each string with separator to the result
    for (int i = 0; i < arr->size; i++) {
        strcat(result, arr->array[i]);
        if (i < arr->size - 1) {
            strcat(result, separator);
        }
    }

    return result;  // Return the joined string
}

int main() {
    // Create a string_array example
    string_array arr = {
        .size = 3,
        .array = {"Hello", "World", "!"}
    };

    // Separator
    char separator[] = " ";

    // Use the my_join function to join strings
    char* joined = my_join(&arr, separator);
    if (joined != NULL) {
        printf("%s\n", joined);  // Print the joined string
        free(joined);  // Free memory for the joined string
    }

    return 0;  // Return 0 to indicate successful execution
}

```

</details>

---

Example 00

```c
Input: ["abc", "def", "gh", "!"] && "-"
Output:
Return Value: "abc-def-gh-!"
```

Example 01

```c
Input: ["abc", "def", "gh", "!"] && "blah"
Output:
Return Value: "abcblahdefblahghblah!"
```

Example 02

```c
Input: ["abc", "def", "gh", "!"] && ""
Output:
Return Value: "abcdefgh!"
```

Example 03

```c
Input: [] && " "
Output:
Return Value: nil
```

## ex05

`Instructions`
Your ship simulator must take in a string of letters that represent a planned flight path for a given rocket ship.

In a ship’s flight path there are only 3 valid options for movement; R for turning right, L for turning left and A for advancing.

If, for example, you receive “RRALAA” as your flight path, you should interpret it as the following:
Turn right, turn right, advance, turn left, advance, advance
Once given this initial flight path, your program must return the x,y coordinates of a ship’s final destination as well as it’s orientation relative to the starting point.

Orientation is represented as left, right, up or down.

Space is infinite, so the x,y coordinates you return could be placed on a seemingly infinite grid and can be negative or positive values.

So let's say an upward-facing rocket ship leaves its starting point of 0,0 and is given the flight path of “RRALAA”, its final location will be 2,-1 and it will be facing right.

Your Job
You must create a function that takes in a flight path of a rocket ship as a string of letters and returns the following format:
"{x: X, y: Y, direction: 'DIRECTION'}"
X,Y represent the ending coordinates of your ship and direction represents its final direction.

`Notes`
Function my_spaceship returns a STRING.

<details>
  <summary>Solution for my_spaceship.c</summary>

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to represent spaceship coordinates and direction
typedef struct {
    int x;
    int y;
    const char *direction;
} Spaceship;

// Function to simulate spaceship movement and orientation
Spaceship* my_spaceship(const char* flight_path) {
    int x = 0;
    int y = 0;
    const char* direction = "up";

    // Iterate through the flight path string
    for (int i = 0; flight_path[i]; i++) {
        switch (flight_path[i]) {
            case 'R':
                if (strcmp(direction, "up") == 0) direction = "right";
                else if (strcmp(direction, "right") == 0) direction = "down";
                else if (strcmp(direction, "down") == 0) direction = "left";
                else if (strcmp(direction, "left") == 0) direction = "up";
                break;
            case 'L':
                if (strcmp(direction, "up") == 0) direction = "left";
                else if (strcmp(direction, "right") == 0) direction = "up";
                else if (strcmp(direction, "down") == 0) direction = "right";
                else if (strcmp(direction, "left") == 0) direction = "down";
                break;
            case 'A':
                if (strcmp(direction, "up") == 0) y--;
                else if (strcmp(direction, "right") == 0) x++;
                else if (strcmp(direction, "down") == 0) y++;
                else if (strcmp(direction, "left") == 0) x--;
                break;
        }
    }

    // Allocate memory for the result and populate it
    Spaceship* result = (Spaceship*)malloc(sizeof(Spaceship));
    result->x = x;
    result->y = y;
    result->direction = direction;

    return result;
}

// Example usage
int main() {
    const char* input = "RAALALL";
    Spaceship* result = my_spaceship(input);

    // Print the result
    printf("{x: %d, y: %d, direction: '%s'}\n", result->x, result->y, result->direction);

    // Free allocated memory
    free(result);

    return 0;
}

```

</details>

---

Example 00

```c
Input: "RAALALL"
Output:
Return Value: "{x: 2, y: -1, direction: 'down'}"
```

Example 01

```c
Input: "AAAA"
Output:
Return Value: "{x: 0, y: -4, direction: 'up'}"
```

Example 2

```c
Input: ""
Output:
Return Value: "{x: 0, y: 0, direction: 'up'}"
```

Example 3

```c
Input: "RAARA"
Output:
Return Value: "{x: 2, y: 1, direction: 'down'}"
```
