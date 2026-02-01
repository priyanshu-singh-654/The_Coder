#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter ram age : ");
    scanf("%d", &a);
    printf("Enter shyam age : ");
    scanf("%d", &b);
    printf("Enter ajay age : ");
    scanf("%d", &c);
    if (a < b && a < c)
    {
        printf("%d ram is youngest ", a);
    }
    if (b < a && b < c)
    {
        printf("%d shyam is youngest ", b);
    }
    if (c < a && c < b)
    {
        printf("%d ajay is youngest ", c);
    }

    return 0;
}