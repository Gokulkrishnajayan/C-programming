#include<stdio.h>
int main()
{
 int i,n,arr[20],sum=0;
 float mean=0;
 printf("Enter the number of the elements in the array:");
 scanf("%d",&n);
 for(i=0;i<n;++i)
 {
  printf("\narr[%d]=",i);
  scanf("%d",&arr[i]);
 }
 for(i=0;i<n;++i)
  sum +=arr[i];
 mean=(float)sum/ n;
 printf("Sum of the elements in the array=%d\n",sum);
 printf("Mean of the elements in the array=%f\n",mean);
 return 0;
}
