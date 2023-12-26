#include<stdio.h>
#include<stdlib.h>
int queue[20],a,n,choice;
int rear=-1,front=-1;
void enqueue(int a);
void dequeue();
void display();
void peek();
void menu();
void main()
{
 printf("Enter the size of the queue:");
 scanf("%d",&n);
 menu();
}

void menu()
{
 printf("\n  Menu\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit\n");
 printf("\nEnter your choice:");
 scanf("%d",&choice);
 switch(choice)
       {
        case 1:enqueue(a);
               break;
        case 2:dequeue();
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

void enqueue(int a)
{
 printf("\nEnter the element to be inserted:");
 scanf("%d",&a);
 if(rear==n)
    printf("Queue become overflow");
 else
   {
    front=0;
    rear=rear+1;
    queue[rear]=a;
   }  
 menu();  
}
void dequeue()
{
 if(front==-1||front>rear)
    printf("Queue is underflow");
 else
   {
    printf("Dequeue element is %d",queue[front]);
    front=front+1;
   } 
 menu();      
}

void peek()
{
 printf("Peek element is %d",queue[front]);
 menu(); 
}

void display()
{
 if(front==-1)
    printf("Queue is empty");
 else   
   {
    printf("Queue is:\n");
    for(int i=front;i<=rear;++i)
       {
        printf("%d\t",queue[i]);
        printf("\n");
       }
   }
 menu();    
}

