#include<stdio.h>
void add(int *);
int main()
{
 int num=2;
 printf("\nThe value of the number before calling the fuction =%d",num);
 add(&num);
 printf("The value of the number after calling the funtion =%d \n",num);
 return 0;
 }
 void add(int *n)
 {
  *n=*n+10;
  printf("\nThe value of the number in the called funtion=%d \n",*n);
 }
