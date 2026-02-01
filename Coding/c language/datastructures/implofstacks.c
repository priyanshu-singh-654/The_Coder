#include <stdio.h>
#include <conio.h>
#define MAXSIZE 10
int stack[MAXSIZE],top=-1;
void main()
{
    int choice;
    clrscr();
  do
  {
    printf("------------stacks-------------------");
    printf("\n 1.Push \n 2.Pop \n 3.Display \n 4.exit ");
    printf("\nenter your choices");
    scanf("%d",choice);
    switch(choice)
    {
        case 1: Push();
        break;
        case 2: Pop();
        break;
        case 3: Display();
        break;
        default:printf("Invalid Choice");
    }
   }while(choice!=4);
   getch();
}
push()
{
    int n;
   if(top==MAXSIZE-1)
   printf("\nstack is overflow");
   else
   {
    printf("nenter an element");
    scanf("%d",&n);
    top++;
    stack[top]=n;
   } 
}
display()
{
    int i;
  if(top==-1)
printf("stack is empty");
else
 {
    printf("elements of stack");
    for(i=top;i>=0;i++);
    printf("\n%d",& stack [i]);
 }

}
 pop()
{
    int n;
    if (top==-1)
    printf("stack is empty");
    else
    {
        n=stack[top];
           top--;
        printf("poped elements %d",n);
    }   

}
 