#include<stdio.h>
int main()
{
int x=10;
char c='A';
void *gp;
gp=&x;
printf("\nGeneric Pointer points to the interger value =%d",*(int*)gp);
gp=&c;
printf("\nGeneric Pointer points to the charater value =%c",*(int*)gp);
return 0;
}
