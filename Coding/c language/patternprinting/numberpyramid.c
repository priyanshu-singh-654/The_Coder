#include <stdio.h>

void printNumberPyramid(int height) {
    for (int i = 1; i <= height; ++i) {
        // Print leading spaces
        for (int space = 1; space <= height - i; ++space) {
            printf(" ");
        }

        // Print ascending numbers
        for (int j = 1; j <= i; ++j) {
            printf("%d ", j);
        }

        // Print descending numbers
       // for (int k = i - 1; k >= 1; --k) {
          //  printf("%d", k);
       // }

        // Move to the next line for the next row
        printf("\n");
    }
}

int main() {
    // Example: Print a number pyramid with height 5
    printNumberPyramid(6);

    return 0;
}
