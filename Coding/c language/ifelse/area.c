#include <stdio.h>
int main()
{
    int l;
    printf("Enter length : ");
    scanf("%d", &l);
    int b;
    printf("Enter breadth : ");
    scanf("%d", &b);
    int a = l * b;
    int p = 2 * (l + b);
    if (a > p)
    {
        printf("area is greater than perimeter");
    }
    else
    {
        printf("area is not greater than perimeter");
    }
    return 0;
}