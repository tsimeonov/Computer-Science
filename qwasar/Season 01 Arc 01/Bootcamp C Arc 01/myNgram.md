#include <stdio.h>
#include <string.h>

#define ASCII_RANGE 127

int array[ASCII_RANGE];  // Global variable to store character counts

// Function to count characters in a string and update the character count array
void countCharacters(const char *s) {
    for (int i = 0; i < strlen(s); i++) {
        array[(int)s[i]] += 1;  // Increment the count for the character
    }
}

// Function to print the character counts
void printNgram() {
    for (int i = 0; i < ASCII_RANGE; i++) {
        if (array[i] != 0) {
            printf("%c:%d\n", i, array[i]); // Print character and its count
        }
    }
}

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: %s <string1> <string2> ...\n", argv[0]);
        return 1; // Return an error code if no strings are provided
    }

    // Initialize the character count array with zeros
    for (int i = 0; i < ASCII_RANGE; i++) {
        array[i] = 0;
    }

    // Process command-line arguments (strings)
    for (int i = 1; i < argc; i++) {
        countCharacters(argv[i]); // Count characters in each string
    }

    // Print character counts
    printNgram();

    return 0; // Return 0 to indicate successful execution
}
