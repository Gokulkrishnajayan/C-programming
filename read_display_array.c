#include<stdio.h>
int main()
{
 int i,n,num[20];
 printf("Enter the number of elements:");
 scanf("%d",&n);
 printf("Enter the element:\n");
 for(i=0;i<n;++i)
 {
  scanf("%d",&num[i]);
 }
 printf("The elements of the array are:\n");
 for(i=0;i<n;++i)
  printf("%d\n",num[i]);
 return 0;
}
