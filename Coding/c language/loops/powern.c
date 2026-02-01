#include <stdio.h>

int main() {
    int n;
    for (n = 1; n <= 6; n++) {
        int result = 1;
        for (int i = 1; i <= n; i++) {
            result *= 2;
        }
        printf("2^%d = %d\n", n, result);
    }
    return 0;
}
