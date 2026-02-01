#include <stdio.h>

int main() {
    int rows = 4;
    int cols = 6;

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop for columns
        for (int j = 1; j <= cols; j++) {
            // Check if it's the first or last row, or the first or last column
            if (i == 1 || i == rows || j == 1 || j == cols) {
                // Print '*' for the border
                printf("* ");
            } else {
                // Print a space for the hollow part
                printf("  ");
            }
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
