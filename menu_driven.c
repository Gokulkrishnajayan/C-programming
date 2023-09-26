#include<stdio.h>
#include<stdlib.h>
void menu();
void insert();
void delete();
void sort();
void search();
void display();
int choice,j,i=0,a[10],b[10],s;
void main()
{
 printf("\nEnter the size of array:");
 scanf("%d",&s);
 printf("Enter the elements of array:");
 for(i=0;i<s;i++)
     scanf("%d",&a[i]);
 menu();  
}
void menu()
{
 printf("\n\n#### MENU ####");
 printf("\n1.Insert");
 printf("\n2.Delete");
 printf("\n3.Sort");
 printf("\n4.Search");
 printf("\n5.Display");
 printf("\n6.Exit");
 printf("\nEnter the your choice:");
 scanf("%d",&choice);
 switch(choice)
       {
        case 1:insert();
               break; 
        case 2:delete();
               break;
        case 3:sort();
               break;
        case 4:search();
               break;
        case 5:display();
               break;
        case 6:exit(1);
               break;  
        default:
                printf("\nChoice invalid\n");
                menu();
                break;              
       }
  
}

void search()
{
 int ele;
 printf("\nEnter the element to be searched:");
 scanf("%d",&ele);
 printf("Elements found at position:");
 for(i=0;i<s;i++)
    {
     if(ele==a[i])
     printf("%d",i++);
    }

 menu();
}
void sort()
{
 printf("\n\tCurrent array:\n");
 for(i=0;i<s;i++)
    printf("%d\t",a[i]);
 for(i=0;i<s;i++) 
    {
     for(j=i+1;j<s;j++)
        
         if(a[i]>a[j])
           {
            a[i]=a[i]+a[j];
            a[j]=a[i]-a[j];
            a[i]=a[i]-a[j];
           }
          
    }  
  printf("\n\tSorted array:\n");
  for(i=0;i<s;i++)
      printf("%d\t",a[i]);
 
menu();       
}
void insert()
{
 int loc,ele;
 printf("\nEnter the location:");
 scanf("%d",&loc);
 printf("Enter the element to be inserted:");
 scanf("%d",&ele);
 for(i=s;i>loc-1;i--)
     a[i]=a[i-1];
 a[loc-1]=ele;
 printf("\n\tElement inserted\n");    
 printf("\nNew array after insertion\n");
 s++;
 for(i=0;i<s;i++)
     printf("%d\t",a[i]);
 
 menu();    
}
void delete()
{
 int loc;
 printf("\nEnter the location to be deleted:");
 scanf("%d",&loc);
 for(i=loc-1;i<s-1;i++)
    {
     a[i]=a[i+1];
    } 
 printf("\n\tElement Deleted");
 printf("\nNew Array after deletion:\n");
 s--;
 for(i=0;i<s;i++)
     printf("%d\t",a[i]);
 menu();        
}
void display()
{
 int i;
 if(s==0)
   {
    printf("Array is empty!");
    return;
   }
 printf("Array Elements:\n");
 for(i=0;i<s;i++)
     printf("%d\t",a[i]);

 menu();       
}
