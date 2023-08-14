## ex00

Write a program that takes a string as an argument and returns it reversed.

<details>
  <summary>reverse_string.c</summary>

```c
#include <stdio.h>
#include <string.h>

// Function to reverse a string in-place
char* reverse_string(char* str) {
    int length = strlen(str);
    int start = 0;          // Index of the first character
    int end = length - 1;   // Index of the last character

    // Iterate until the start index crosses the end index
    while (start < end) {
        // Swap characters at start and end indices
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move indices towards each other for the next iteration
        start++;
        end--;
    }

    // Return the reversed string
    return str;
}
```

</details>

## ex01

Reproduce the behavior of the function strcmp.
The strcmp() function compares string1 with string2 to see if there are equals.

<details>

  <summary>my_strcmp.c</summary>

```c

#include <stdio.h>

// Define a function called my_strcmp that takes two char pointers as parameters.
int my_strcmp(char* str1, char* str2) {
    // Iterate through the strings while both are not at the end ('\0').
    while (*str1 != '\0' && *str2 != '\0') {
        // Compare the characters at the current positions in both strings.
        if (*str1 != *str2) {
            // If the characters are different, return the difference between their ASCII values.
            // This will indicate whether str1 comes before or after str2 in lexicographic order.
            return (*str1 - *str2);
        }
        // Move to the next character in each string.
        str1++;
        str2++;
    }

    // If both strings are completely equal, they have the same characters in the same order.
    if (*str1 == *str2) {
        // Return 0 to indicate equality.
        return 0;
    }

    // If one string is longer than the other, return the difference in lengths.
    return (*str1 - *str2);
}

int main()
```

</details>

## ex02

Reproduce the behavior of the function strcpy.
The strcpy() and strncpy() functions copy the string source (src) to destination (dst).

<details>
  <summary>my_strcpy.c</summary>

```c
#include <stdio.h>

char* my_strcpy(char* dst, const char* src) {
    // Copy each character from src to dst until the null terminator is reached.
    while (*src != '\0') {
        *dst = *src; // Copy the character
        dst++;      // Move to the next position in dst
        src++;      // Move to the next character in src
    }

    // Add the null terminator to the end of the copied string.
    *dst = '\0';

    // Return the destination string.
    return dst;
}

int main() {
    char dst[100] = {0};
    char *src = "Hello";

    printf("my_strcpy -> %s\n", my_strcpy(dst, src));

    return 0;
}

```

</details>

## ex03

Reproduce the behavior of the function strncpy.

<details>
  <summary>my_strncpy.c</summary>

```c
#include <stdio.h>

char* my_strncpy(char* dst, const char* src, int n) {
    int i;
    // Copy each character from src to dst up to n characters or until the null terminator is reached.
    for (i = 0; i < n && *src != '\0'; i++) {
        *dst = *src; // Copy the character
        dst++;      // Move to the next position in dst
        src++;      // Move to the next character in src
    }

    // Fill any remaining positions in dst with null characters if n is not reached.
    for (; i < n; i++) {
        *dst = '\0';
        dst++;
    }

    // Return the destination string.
    return dst;
}

int main() {
    char dst[10] = {0};
    char *src = "Hello";
    int n = 3;

    printf("my_strncpy -> %s\n", my_strncpy(dst, src, n));

    return 0;
}


```

</details>
