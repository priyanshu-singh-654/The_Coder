#include <stdio.h>

int main() {
    int sideLength;

    // Input the side length of the square
    printf("Enter the side length of the square: ");
    scanf("%d", &sideLength);

    // Nested loops to print the square pattern
    for (int i = 0; i < sideLength; i++) {
        for (int j = 0; j < sideLength; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}