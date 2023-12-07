#include<stdio.h> 
#include<stdlib.h>
int size,x,items[50],i,n,choice;
int front=-1;
int rear=-1;
void enqueue(); 
void dequeue();
void display(); 
int isempty(); 
int isfull(); 
void menu();
 
void main()
{
 printf("Enter the size of the queue:");
 scanf("%d",&n);
 menu();
}

void menu()
{
 printf("\n Menu\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
 printf("\nEnter your choice:");
 scanf("%d",&choice);
 switch(choice)
       {
        case 1:enqueue();
               break;
        case 2:dequeue();
               break;
        case 3:display();
               break;
        case 4:exit(1);
               break;
        default:printf("Enter a valid choice");
                menu();
       }
}
void enqueue() 
{ 
 if(isfull())
   {
    printf("\nQueue is full"); 
    menu(); 
   } 
 else
   { 
    if(front==-1) 
       front=0;
    rear=(rear+1)%n;
    printf("\nEnter element:"); 
    scanf("%d",&x); 
    items[rear]=x; 
    printf("\nInserted element is %d",x); 
   }
 menu();  
}  
  
void dequeue() 
{ 
 if(isempty()) 
   {
    printf("\nQueue is empty"); 
    menu();
   }
 else
   {
    x=items[front];
    if(front==rear) 
      { 
       front=-1; 
       rear=-1; 
      } 
    else 
       front=(front+1)%n;   
    printf("\n Deleted element is %d",x); 
   } 
 menu();  
}

void display() 
{ 
 if(isempty()) 
    printf("\n Empty Queue\n"); 
 else
   { 
    for(i=front; i!= rear;i=(i+1)%n)
       { 
        printf("%d",items[i]); 
       } 
    printf("%d\t",items[i]);  
   } 
 menu();  
} 

int isfull() 
{ 
 if((front==rear+1)||(front==0&&rear==n-1)) 
  return 1;  
 else  
  return 0;  
} 

int isempty() 
{
 if(front==-1) 
    return 1; 
 else   
    return 0; 
} 

