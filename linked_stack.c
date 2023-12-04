#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
void menu();
struct node
     {
      int val;
      struct node *next;
     }*start;
void main()
{
 menu();
}

void menu()
{
 int ch;
 printf("\n MENU \n");
 printf("1.Push\n2.Pop\n3.Display\n4.exit\n");
 printf("Enter your choice:");
 scanf("%d",&ch);
 switch(ch)
       {
        case 1: 
               push();
               menu();
               break;
        case 2: 
               pop();
               menu();     
               break;   
        case 3:
               display();
               menu();
               break;           
        case 4:
               exit(0);
        default:
                printf("Wrong Choice!");
                menu();
                break;              
       }
 
}
void push()
{
 int val;
 struct node *ptr=(struct node*)malloc(sizeof(struct node));
 if(ptr== NULL)
    printf("Not able to push the element");
 else
   {
    printf("Enter the value:");
    scanf("%d",&val);
    if(start==NULL)
      {
       ptr->val=val;
       ptr->next=NULL;
       start=ptr;     
      }
    else
      {
       ptr->val=val;
       ptr->next=start;
       start=ptr; 
      }  
    printf("Item Pushed");  
   }   
}   
void pop()
{
 int item;
 struct node *ptr;
 if(start==NULL)
    printf("Underflow");
 else
   {
    item=start->val;
    ptr=start;
    start=start->next;
    free(ptr);
    printf("Item Popped");
   }
}
void display()
{
 struct node *ptr;
 ptr=start;
 if(ptr==NULL)
    printf("Stack is empty\n");
 else
   {
    printf("Stack Elements:\n");
    while(ptr!=NULL)
         {
          printf("%d\n",ptr->val);
          ptr=ptr->next;
         }   
   }   
}
  
