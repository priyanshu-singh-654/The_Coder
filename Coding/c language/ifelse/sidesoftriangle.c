#include <stdio.h>
int main()
{

    int a;
    printf("Enter 1st Side : ");
    scanf("%d", &a);
    int b;
    printf("Enter 2nd Side : ");
    scanf("%d", &b);
    int c;
    printf("Enter 3rd Side : ");
    scanf("%d", &c);
    if(a+b>c && a+c>b && c+b>a){
        printf("valid trinagle");
    }
    else{
        printf("invalid triangle");
    }
    return 0 ;
}