#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);

    if (n > 99 && n < 1000)
    {
        printf("its a 3 digit number");
    }
    else
    {
        printf("its not");
    }

    return 0;
}