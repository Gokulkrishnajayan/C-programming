#include<stdio.h>
void add(int *,int *,int *);
int main()
{
 int a,b,c,total;
 printf("\nEnter the 1st numbers:");
 scanf("%d",&a);
 printf("\nEnter the 2nd numbers:");
 scanf("%d",&b);
 add(&a,&b,&total);
 printf("\nTotal=%d",total);
 return 0;
}
void add(int *a,int *b,int *c)
{
 *c=*a+*b;
}
