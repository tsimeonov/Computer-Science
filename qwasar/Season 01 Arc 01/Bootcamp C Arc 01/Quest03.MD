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

## ex04

Create a function that searches for the first occurrence of the character c (an unsigned char) in the string pointed to by the argument str. The terminating null character is considered to be part of the string. The function should return a pointer pointing to the last matching character, or null if no match was found.

<details>
  <summary>my_strchr.c</summary>

```c
// Include the standard I/O library for input/output functions
#include <stdio.h>

// Define a function named my_strchr that takes a pointer to a character (string) and a character as parameters
char* my_strchr(char* str, char c) {
    // Declare a pointer named lastMatch and initialize it to NULL
    char* lastMatch = NULL;

    // Start a loop that continues until the end of the string ('\0') is reached
    while (*str != '\0') {
        // Check if the current character is equal to the specified character
        if (*str == c) {
            // If there's a match, assign the current pointer to lastMatch
            lastMatch = str;
            // Exit the loop, as the first match has been found
            break;
        }
        // Move the pointer to the next character in the string
        str++;
    }

    // Return the pointer to the last matching character (or NULL if no match was found)
    return lastMatch;
}

// Define the main function
int main() {
    // Declare a character array named str and initialize it with "abc"
    char str[] = "abc";
    // Declare a character named c and initialize it with 'd'
    char c = 'd';
    // Declare a pointer to a character named result and call the my_strchr function with str and c as arguments
    char* result = my_strchr(str, c);

    // Print the provided input, expected outputs, and actual outputs
    printf("Input: \"%s\"\n", str);
    printf("Expected Output: \n");
    printf("Expected Return Value: NULL\n");
    printf("Output: \n");
    printf("Return Value: %p\n", (void*)result);

    // Return 0 to indicate successful completion of the program
    return 0;
}

```

</details>

## ex05

Searches for the last occurrence of the character c (an unsigned char) in the string pointed to by the argument str. The terminating null character is considered to be part of the string. Returns a pointer pointing to the last matching character, or null if no match was found.

<details>
  <summary>my_strrchr.c</summary>

```c
#include <stdio.h>

// Function to search for the last occurrence of a character in a string
char* my_strrchr(char* str, char c) {
    char* lastMatch = NULL;

    // Iterate through the string until the end is reached
    while (*str != '\0') {
        // Check if the current character matches the specified character
        if (*str == c) {
            lastMatch = str;
        }
        // Move to the next character in the string
        str++;
    }

    // Return the pointer to the last matching character (or NULL if no match was found)
    return lastMatch;
}

// Main function to test the my_strrchr function
int main() {
    char str[] = "abcabc";
    char c = 'b';
    char* result = my_strrchr(str, c);

    printf("Input: \"%s\"\n", str);
    printf("Character to find: '%c'\n", c);

    // Check if a matching character was found
    if (result != NULL) {
        printf("Last Matching Character: '%c'\n", *result);
    } else {
        printf("No Matching Character Found\n");
    }

    return 0;
}
```

</details>

## ex06

Implement `strStr()`.

It should return a pointer to the first occurrence of a needle in a haystack, or NULL if the needle is not part of the haystack.

<details>
  <summary>my_strstr.c</summary>

```c
#include <stdio.h>

// Function to implement strStr()
char* my_strstr(char* haystack, char* needle) {
    if (*needle == '\0') {
        return haystack;  // Return haystack if needle is an empty string
    }

    while (*haystack != '\0') {
        char* hayPtr = haystack;
        char* needlePtr = needle;

        // Compare characters in haystack and needle
        while (*needlePtr != '\0' && *hayPtr == *needlePtr) {
            hayPtr++;
            needlePtr++;
        }

        // Check if entire needle is found in haystack
        if (*needlePtr == '\0') {
            return haystack;  // Return pointer to the beginning of needle in haystack
        }

        haystack++;  // Move to the next character in haystack
    }

    return NULL;  // Return NULL if needle is not found in haystack
}

// Main function to test the my_strstr function
int main() {
    char haystack[] = "Hello, world!";
    char needle[] = "world";

    char* result = my_strstr(haystack, needle);

    printf("Haystack: \"%s\"\n", haystack);
    printf("Needle: \"%s\"\n", needle);

    if (result != NULL) {
        printf("Needle found at index: %ld\n", result - haystack);
    } else {
        printf("Needle not found in haystack\n");
    }

    return 0;
}
```

</details>
