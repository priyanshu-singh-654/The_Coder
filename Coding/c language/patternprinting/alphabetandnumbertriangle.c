#include <stdio.h>

int main() {
    int rows = 5;
    int cols[] = {1, 2, 3, 4, 5};

    // Outer loop for rows
    for (int i = 0; i < rows; i++) {
        // Inner loop for columns
        for (int j = 0; j < cols[i]; j++) {
            // Check if the current position should have a letter or a number
            if (i % 2 == 0) {
                // Print numbers (1, 3, 5, ...)
                printf("%d ",  j + 1);
            } else {
                // Print letters (A, B, C, ...)
                printf("%c ", 'A' + j);
            }

            // Print a space between characters
            printf(" ");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
