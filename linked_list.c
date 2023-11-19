#include<stdio.h> 
#include<stdlib.h> 
void display(); 
int  in_b(); 
void in_e(); 
void in_bw(); 
void del_b(); 
void del_e(); 
void del_bw(); 
struct node *create(); 
struct node 
      {  
       int data; 
       struct node *link;
      };  
typedef struct node node1; 
node1 * start = NULL; 
void main() 
{ 
 int x; 
 printf("Singly Linked List\n MENU\n"); 
 printf("1.Display\n2.Insertion at begining\n3.Insertion at end \n4.Insertion in between");
 printf("\n5.Deletion at begning \n6.Deletion at end\n7.Deletion in between \n8.exit"); 
 while(1) 
     { 
      printf("\nEnter your choice:"); 
      scanf("%d",&x); 
      switch(x) 
            { 
             case 1:
                    display(); 
                    break; 
             case 2:
                    in_b(); 
                    break; 
             case 3:
                    in_e(); 
                    break; 
             case 4:
                    in_bw(); 
                    break; 
             case 5:
                    del_b(); 
                    break; 
             case 6:
                    del_e();
                    break; 
             case 7:
                    del_bw(); 
                    break; 
             case 8:
                    exit(0);
            }
      }
}             
struct node *create() 
{ 
 node1 *nptr=((node1*)malloc(sizeof(node1))); 
 if(nptr==NULL) 
   {
    printf("Memory Overflow"); 
    return 0; 
   } 
 else 
    return nptr; 
}  
  
void display() 
{ 
 node1 *ptr=start; 
 printf("\nElements in the linked list are:\n"); 
 while(ptr!=NULL) 
      { 
       printf("%d ",ptr-> data); 
       ptr=ptr->link; 
      } 
} 

int in_b()
{ 
 int val; 
 node1 *nptr; 
 printf("Enter the element to be inserted:"); 
 scanf("%d",&val);
 nptr=create();
 nptr->data=val;
 if(start==NULL) 
   { 
    start=nptr; 
    nptr->link=NULL; 
   } 
 else 
   { 
    nptr->link=start; 
    start=nptr; 
   } 
 printf("Element inserted");  
} 

void in_e() 
{ 
 node1 *nptr=create(),*temp;
 int val;
 printf("Enter the element to be inserted:");
 scanf("%d",&val); 
 nptr->data=val; 
 nptr->link=NULL; 
 temp=start; 
 while(temp->link!=NULL) 
       temp=temp->link; 
 temp->link=nptr;
 printf("Element inserted");
}  

void in_bw()
{
 node1 *temp,*nptr=create(); 
 int val,pos,i; 
 printf("Enter the position to be inserted:"); 
 scanf("%d",&pos); 
 printf("Enter the element to be inserted:"); 
 scanf("%d",&val); 
 nptr->data=val;
 nptr->link=NULL; 
 temp=start;
 if(pos==1)
   { 
    nptr->link=start; 
    start=nptr; 
   } 
 else 
   {
    for(i=1;i<pos-1;i++)
       {
        temp=temp->link;
       } 
   } 
 nptr->link=temp->link;
 temp->link=nptr;
 printf("Element inserted");
 
} 
void del_b()
{ 
 node1 *temp; 
 if(start==NULL) 
    printf("List is empty!"); 
 else 
    temp=start; 
 start=start->link;  
 free(temp); 
 printf("Element deleted");
} 
void del_e()
{ 
 node1 *temp,*prev;
 temp=start; 
 while(temp->link!=NULL) 
 { 
  prev=temp; 
  temp=temp->link; 
 } 
 prev->link=NULL; 
 free(temp); 
 printf("Element deleted");
} 
void del_bw() 
{ 
 node1 *temp,*pre; 
 int pos,i; 
 printf("Enter the position:"); 
 scanf("%d",&pos); 
 temp=start; 
 if(pos==1) 
    start=start->link; 
 else 
 {  
  for(i=1;i<pos;i++) 
     {
      pre=temp; 
      temp=temp->link; 
     }      
   pre->link=temp->link;    
 }
 printf("Element deleted");
} 
