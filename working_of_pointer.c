#include<stdio.h>
int main()
{
 int num,*pnum;
 pnum=&num;
 printf("\nEnter the number:");
 scanf("%d",&num);
 printf("\nThe number that was entered is %d\n",*pnum);
 return 0; 
}
