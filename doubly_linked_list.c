#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head;
void insertb();
void inserte();
void insertp();
void deleteb();
void deletee();
void deletep();
void display();
void menu();

int choice,n,loc,i;

int main()
{
	printf("\n1.Insert in beginning\n2.Insert in end\n3.Insert at any position\n4.Delete in beginning\n5.Delete in end\n6.Delete at any position\n7.Display\n8.Exit");
	menu();
}

void menu(){
	printf("\nEnter your choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:insertb();
		break;
	case 2:inserte();
		break;
	case 3:insertp();
		break;
	case 4:deleteb();
		break;
	case 5:deletee();
		break;
	case 6:deletep();
		break;	
	case 7:display();
		break;
	case 8:
		exit(1);
	default:
		printf("WRONG CHOICE,PLEASE ENTER CORRECT CHOICE");
		break;
	}
}

void insertb()
{
	struct node *ptr;
	ptr=(struct node *)malloc(sizeof(struct node*));
	if(ptr==NULL){
		printf("Overflow");
	}
	else
	{
		printf("\nEnter your number: ");
		scanf("%d",&n);
	}
	if(head==NULL)
	{
		ptr->data=n;
		ptr->next=NULL;
		ptr->prev=NULL;
		head=ptr;
	}
	else
	{
		ptr->data=n;
		ptr->prev=NULL;
		ptr->next=head;
		head=ptr->prev;
		head=ptr;
	}	
	printf("node inserted successfully\n");
	menu();
}

void display()  
{  
	struct node *ptr;  
	printf("\nprinting values...\n");  
	ptr=head;  
	while(ptr!=NULL)  
	{  
		printf("%d->",ptr->data);  
		ptr=ptr->next;  
	}  
	menu();
}

void deleteb()
{
	struct node *ptr;  
	if(head==NULL)  
	{  
		printf("\nUNDERFLOW");  
	}  
	else if(head->next==NULL)  
	{  
		head=NULL;   
		free(head);  
		printf("\nnode deleted\n");  
	}  
	else  
	{  
		ptr=head;  
		head=head->next;  
		head->prev=NULL;  
		free(ptr);  
		printf("\nnode deleted\n");  
	}  
	menu();	      
} 


void inserte()
{
	struct node *ptr,*temp;  
	ptr = (struct node *) malloc(sizeof(struct node));  
	if(ptr == NULL)  
	{  
		printf("\nOVERFLOW");  
	}  
	else  
	{  
		printf("\nEnter value : ");  
		scanf("%d",&n);  
		ptr->data=n;  
		if(head==NULL)  
		{  
			ptr->next=NULL;  
			ptr->prev=NULL;  
			head=ptr;  
		}  
		else  
		{  
			temp=head;  
			while(temp->next!=NULL)  
			{  
				temp=temp->next;  
			}  
			temp->next = ptr;  
			ptr->prev=temp;  
			ptr->next = NULL;  
		}  
		         
	}  
	printf("Node inserted\n");  
	menu();
}

void deletee()
{
	struct node *temp,*temp1;  
	if(head==NULL)  
	{  
		printf("\nUNDERFLOW");  
	}  
	else if(head->next==NULL)  
	{  
		head=NULL;   
		free(head);  
		printf("\nnode deleted\n");  
	}    
	else
	{
		temp=head;
		while(temp->next!=NULL)  
			{  
				temp1=temp;  
				temp=temp->next;
				
			}  
		temp1->next=NULL;
		temp1->prev=temp->prev;
		free(temp);
		printf("\nDeleted Node from the last\n");  
	}     
	menu();   
} 

void insertp()
{

       struct node *ptr,*temp;   
       ptr=(struct node *)malloc(sizeof(struct node));  
       if(ptr==NULL)  
       {  
           printf("\n OVERFLOW");  
       }  
       else  
       {  
           temp=head;  
           printf("Enter the location: ");  
           scanf("%d",&loc);  
           for(i=1;i<loc;i++)  
           {  
               temp=temp->next;  
               if(temp==NULL)  
               {  
                   printf("Cannot insert");  
                   return;  
               }  
           }  
           printf("Enter value: ");  
           scanf("%d",&n);  
           ptr->data=n;  
           ptr->next=temp->next;  
           ptr->prev=temp;  
           temp->next=ptr;  
           temp->next->prev=ptr;  
           printf("\nnode inserted\n");  
       }  
       menu();
}

void deletep()
{
	struct node *ptr,*ptr1;      
	printf("\nEnter the location of the node you want to delete\n");  
	scanf("%d",&loc);  
	ptr=head;  
	for(i=0;i<loc;i++)  
	{  
		ptr1=ptr;       
		ptr=ptr->next;  	      
		if(ptr==NULL)  
		{  
		    printf("\nCan't delete");  
		    return;  
		}  
	 }  
	    ptr1->next=ptr->next;
	    ptr1->prev=ptr->prev;  
	    free(ptr);  
	    printf("\nDeleted node");  
	    printf("\n");
	    menu(); 
} 
