#include<stdio.h>
void merge(int a[],int b[],int c[],int m,int n);
void main()
{
 int m,n,i,a[20],b[20],c[20];
 printf("\nEnter the size of first array:");
 scanf("%d",&m);
 printf("Enter the elements of array:");
 for(i=0;i<m;i++)
     scanf("%d",&a[i]);
 printf("\nEnter the size of second array:");
 scanf("%d",&n);
 printf("Enter the elements of array:");
 for(i=0;i<n;i++)
     scanf("%d",&b[i]);  
 merge(a,b,c,m,n);
}
void merge(int a[],int b[],int c[],int m,int n)
{
 int i,j,k;
 i=j=k=0;
 while(i<m&&j<n)
      {
       if(a[i]<b[j])
         {
          c[k]=a[i];
          k++;
          i++;
         }
       else
         {
          c[k]=b[j];
          j++;
          k++;
         }  
      }
 while(i<m)
      {
       c[k]=a[j];
       k++;
       i++;
      }    
 while(j<n)
      {
       c[k]=b[j];
       k++;
       j++;
      } 
 printf("Merged array is:\n");
 for(i=0;i<k;i++)
     printf("%d",c[i]);             
}

