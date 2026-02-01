#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of lines : ");
    scanf("%d",&n);
    int nst = 1;
    int nsp = 3;
    for(int i=1;i<=4;i++){ 
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        nsp = nsp - 1;
    for(int k = 1;k<=nst;k++){
        printf("*");
    }     
    nst = nst + 2;
    printf("\n");
    }  
    return 0;
}