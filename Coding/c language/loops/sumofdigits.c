#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int sum = 0;
    int lastdigit = 0;
    while(n!=0){
        lastdigit = n%10;
        if (lastdigit % 2 == 0) {
            sum += lastdigit;  // Add the even digit to the sum
        }
      
        n = n/10;
    }
    printf("the number of digits are %d", sum);
    return 0;
}