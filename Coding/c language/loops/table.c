#include<stdio.h>
int main(){
    int n ;
    printf("Enter the Table you want : ");
    scanf("%d",&n);

    // int r;
    // printf("Enter the range : ");
    // scanf("%d",&r);

    for(int i=1;i<=11;i++){
        printf("%d * %d = %d\n", n , i , n * i );
        
    }
    return 0;
    
}