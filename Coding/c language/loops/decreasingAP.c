#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int a = 100; // The first term of the GP
    int r = 2;    // The common ratio

    printf("Geometric Progression up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        a *= r;
    }

    return 0;
}

