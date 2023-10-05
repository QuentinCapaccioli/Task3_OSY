#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    char c; // space of single character
            // later replace with buffer

    int read_bytes;

    // read from STDIN and save single character to c
    // read_bytes will be 1, if there is some input
    // read_bytes will be 0, if there is no input
    // read_bytes will be -1, in case of error
    while ((read_bytes = read(STDIN_FILENO, &c, sizeof(char)) > 0)){
        write(STDOUT_FILENO, &c, sizeof(char));
    }
    if (read_bytes < 0) {
        perror("Error :");
    }
}