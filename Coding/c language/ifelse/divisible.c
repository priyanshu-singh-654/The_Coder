#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);

    if (n % 5 == 0 || n % 3 == 0)
    {
        if (n % 15 != 0)
        {

            printf("its divisible by 5 and 3 but not 15 ");
        }
        else
        {
            printf("the number is divisible by 15");
        }
    }

    else
    {
        printf("its not divisible by 5 and 3");
    }

    return 0;
}