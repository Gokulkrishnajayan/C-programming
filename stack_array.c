#include<stdio.h>
#include <stdlib.h>
int i,n,ele,choice,stack[50],top=-1;
void display();
void menu();
void peek();
void push();
void pop();
void main()
{
 printf("Enter the stack size:");
 scanf("%d",&n);
 menu();
}

void menu()
{
 printf("\n  Menu\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
 printf("\nEnter your choice:");
 scanf("%d",&choice);
 switch(choice)
       {
        case 1:push(ele);
               break;
        case 2:pop();
               break;
        case 3:peek();
               break;
        case 4:display();
               break;
        case 5:exit(1);
        default:printf("Enter a valid choice");
                menu();
       }
}

void push()
{
 printf("Enter the element:");
 scanf("%d",&ele);
 if(top!=n-1)
   {
    top=top+1;
    stack[top]=ele;
    printf("Insertion successfull");
   }
 else
    printf("cant insert stack full"); 
 menu();   
}

void peek()
{
 printf("The top most element of the stack is :%d",stack[top]);
 menu();
}

void pop()
{
 
 if(top==-1)
   printf("coudnt retrieve,stack empty\n");
 else
   {
    ele=stack[top];
    printf("Deleted: %d",ele);
    top=top-1;
   }  
 menu();  
}

void display()
{
 i=0;
 if(top==-1)
    printf("stack is empty");
 else
   {
    printf("The stack elements are:");
    for(i=top;i>=0;--i)
        printf("\t%d",stack[i]);
   }  
 menu();  
}
