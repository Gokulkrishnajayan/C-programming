#include<stdio.h>  // Merge sort
#define size 5
void merge(int arr[],int,int,int);
void mergesort(int arr[],int,int);
void main()
{ 
 int arr[size],i,n;
 printf("Enter the number of elements in the array:");
 scanf("%d",&n);
 printf("Enter the elements:\n");
 for(i=0;i<n;++i)
    {
     scanf("%d",&arr[i]);
    } 
 mergesort(arr,0,n-1);
 printf("Sorted array:\n");
 for(i=0;i<n;++i)
    {
     printf("%d\t",arr[i]);
    }   
}
void merge(int arr[],int beg,int mid,int end)
{
 int i=beg,j=mid+1,index=beg,temp[size],k;
 while((i<=mid)&&(j<=end))
      {
       if(arr[i]<arr[j])
         {
          temp[index]=arr[i];
          ++i;
         }
       else
         {
          temp[index]=arr[j];
          ++j;
         }
       index++;  
      }
 if(i>mid)     
   {
    while(j<=end)
         {
          temp[index]=arr[j];
          ++j;
          index++;
         }
   }
 else 
   {
    while(i<=mid)
         {
          temp[index]=arr[i];
          ++i;
          index++;
         }
   }
 for(k=beg;k<index;k++)
    {
     arr[k]=temp[k];
    }   
}
void mergesort(int arr[],int beg,int end)
{
 int mid;
 if(beg<end)
   {
    mid=(beg+end)/2;
    mergesort(arr,beg,mid);
    mergesort(arr,mid+1,end);
    merge(arr,beg,mid,end);
   }
}
