## ex00

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
