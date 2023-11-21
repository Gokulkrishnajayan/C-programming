#include<stdio.h> 
#include<stdlib.h> 


struct btnode
       {
        int value; 
        struct btnode *l; 
        struct btnode *r; 
       }*root=NULL,*temp=NULL,*t2,*t1; 
 
int smallest(struct btnode *t); 
void search1(struct btnode *t,int data);        
void delete1(); 
void delete();
void inorder(struct btnode *t);        
void search(struct btnode *t); 
void insert();       
void create(); 
void main() 
{ 
 int choice; 
 printf("\n----BST OPERATIONS ---\n"); 
 printf("1.Insert an element into tree\n"); 
 printf("2.Delete an element from the tree\n"); 
 printf("3.Inorder Traversal\n"); 
 printf("4.Exit\n"); 
 while(1) 
      { 
       printf("\nEnter your choice: "); 
       scanf("%d", &choice); 
       switch (choice) 
              {
               case 1: 
                      insert(); 
                      break; 
               case 2: 
                      delete(); 
                      break;
               case 3: 
                      inorder(root); 
                      break;
               case 4: 
                      exit(0); 
              default: 
                      printf("Wrong choice, Please enter correct choice "); 
                      break;  
             } 
     } 
}  
void insert() 
{ 
 create();  
 if(root==NULL) 
    root=temp; 
 else 
    search(root); 
}
 
void create() 
{ 
 int data; 
 printf("Enter data of node to be inserted : "); 
 scanf("%d",&data); 
 temp =(struct btnode *)malloc(1*sizeof(struct btnode)); 
 temp->value=data; 
 temp->l=temp->r= NULL; 
}

void search(struct btnode *t) 
{ 
 if((temp->value > t->value)&&(t->r!=NULL)) 
    search(t->r); 
 else if((temp->value > t->value)&&(t->r==NULL)) 
    t->r=temp; 
 else if((temp->value > t->value)&&(t->l!=NULL)) 
    search(t->l); 
 else if((temp->value < t->value)&&(t->l==NULL)) 
    t->l=temp; 
} 

void inorder(struct btnode *t) 
{ 
 if(root==NULL) 
   { 
    printf("No elements in a tree to display"); 
    return; 
   }  
 if(t->l!= NULL) 
   {
    inorder(t->l); 
   } 
 printf("%d-> ",t->value);  
 if(t->r!= NULL) 
   inorder(t->r); 
} 
  
void delete() 
{ 
 int data; 
 if(root == NULL) 
   { 
    printf("No elements in a tree to delete"); 
    return; 
   } 
 printf("Enter the data to be deleted: ");
 scanf("%d", &data); 
 search1(root, data); 
}
 
void search1(struct btnode *t,int data) 
{ 
 if(data > t->value) 
   { 
    t1=t; 
    search1(t->r,data); 
   } 
 else if(data<t->value) 
   {  
    t1 = t; 
    search1(t->l,data);//Move towards left subtree 
   }
 else if(data==t->value) 
   delete1(t);  
} 
void delete1(struct btnode *t) 
{ 
 int k; 
 if((t->l==NULL)&&(t->r==NULL)) 
   { 
    if(t1->l=t) 
       t1->l=NULL; 
    else 
       t1->r=NULL;  
    t=NULL; 
    free(t); 
    return; 
   } 
 else if((t->r==NULL)) 
   { 
    if(t1==t) 
      { 
       root=t->l; 
       t1=root; 
      } 
    else if(t1->l==t)  
       t1->l=t->l; 
    else  
       t1->r=t->l;  
    t=NULL; 
    free(t);
    return;
   }  
 else if(t->l== NULL) 
   { 
    if(t1 == t) 
      { 
       root = t->r; 
       t1 = root; 
      } 
    else if (t1->r == t) 
       t1->r=t->r; 
    else
       t1->l=t->r; 
    t==NULL; 
    free(t); 
    return;
   }  
 else if((t->l != NULL) && (t->r != NULL)) 
   {
    k=smallest(t->r); 
    search1(root,k); 
    t->value=k; 
   }  
}  
int smallest(struct btnode *t) 
{ 
 if(t->l!= NULL) 
    return(smallest(t->l));  
 else 
    return (t->value); 
}
