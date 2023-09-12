#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    int file_descriptor, ch;

    // Loop through each command-line argument (file names)
    for (int i = 1; i < argc; i++) {
        // Attempt to open the file in read-only mode
        file_descriptor = open(argv[i], O_RDONLY); // Supported by fcntl.h

        // Check if the file opened successfully
        if (file_descriptor < 0) {
            // If not, print an error message and continue with the next file
            perror(argv[i]);
            continue;
        }

        // Read each character from the file and write it to standard output (stdout)
        while (read(file_descriptor, &ch, 1) == 1) {
            write(STDOUT_FILENO, &ch, 1); // Write supported by unistd.h
        }

        // Close the file
        close(file_descriptor);
    }

    return 0;
}

