## ex00

Create a function my_range which returns a malloc'd array of `integers`. This `integer` array should contain all values between `min` and `max`.

Min included - max excluded.

If `min` value is greater or equal to `max`'s value, a null pointer should be returned.

Don't worry about "free", it will be done in our main().

<details>
  <summary>my_range.c</summary>

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

// Example 00
// Input: 1 && 4
// Output:
// Return Value: [1, 2, 3]

// Example 01
// Input: 7 && 10
// Output:
// Return Value: [7, 8, 9]

// Example 02
// Input: 10 && 11
// Output:
// Return Value: [10]

```

</details>
