#include <stdio.h>

int main() {
    int number, range;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter the range: ");
    scanf("%d", &range);

    printf("Multiplication Table for %d:\n", number);

    for (int i = 1; i <= range; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
