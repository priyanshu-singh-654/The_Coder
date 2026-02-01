#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of lines : ");
    scanf("%d",&n);
    int nsp = n-1;
    for(int i=1;i<=n;i++){
         
        for(int q=1;q<=nsp;q++){ // spaces ke liye ek loop
            printf(" ");
        }
        nsp--;
        for(int j=1;j<=i;j++){ // number triangle
            char ch = (char)(j+64);
            printf("%c",ch);
        } 
        int a = i-1;   // extra cheez
    for(int k=1;k<=i-1;k++){
         char ch = (char)(a+64);
            printf("%c",ch);
        a--;
    }     
    printf("\n");
    }  
     
    return 0;
}