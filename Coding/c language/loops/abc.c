    #include<stdio.h>
    int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int on = n;
    int r = 0;

    while(n>0){
        r = r*10;
        r = r + (n%10);
        n = n/10;
    }
    printf("the reverse of given number is : %d\n",r);
    int revn = r;
     printf("the sum is : %d",on+revn);
    return 0;
}