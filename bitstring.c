
#include <stdio.h> 
void input(); 
void output(); 
void setunion(); 
void intersection(); 
void difference(); 
int a[]={0,0,0,0,0,0,0,0,0},b[]={0,0,0,0,0,0,0,0,0}; 
int main() 
{ 
	int ch,wish; 
	do 
	{ 
		printf("\n MENU \n"); 
		printf("1.Input\n2.Union\n3.Intersection\n4.Difference\n"); 
		printf("Enter choice:"); 
		scanf("%d",&ch); 
		switch(ch) 
		{ 
			case 1:input(); 
				break; 
			case 2:setunion(); 
				break; 
			case 3:intersection(); 
				break; 
			case 4:difference(); 
				break; 
		} 
		printf("\nDo you wish to continue ?(1/0)\n"); scanf("%d",&wish); 
	} while(wish==1);
}
void input() 
{ 
	int n,x,i; 
	printf("enter size of the 1st set:"); 
	scanf("%d",&n); 
	printf("enter elements:\n"); 
	for(i=0;i<n;i++) 
	{ 
		scanf("%d",&x); 
		a[x-1]=1; 
	} 
	printf("enter size of the 2nd set:"); 
	scanf("%d",&n); 
	printf("enter elements:\n"); 
	for(i=0;i<n;i++) 
	{ 
		scanf("%d",&x); 
		b[x-1]=1; 
	} 
	printf("\n1st set:\n"); 
	for(i=0;i<8;i++) 
	{ 
		printf("%d",a[i]);
	} 
	printf("\n2nd set:\n"); 
	for(i=0;i<8;i++) 
	{ 
		printf("%d",b[i]); 
	} 
} 

void output(int c[]) 
{ 
	int i; 
	printf("\n Set is :"); 
	for(i=0;i<9;i++) 
	{ 
		if (c[i]!=0) 
			printf("%d ",i+1); 
	} 
} 
void setunion() 
{ 
	int i,c[10]; 
	for(i=0;i<9;i++) 
	{
		if (a[i]!=b[i]) 
			c[i]=1;
		else 
			c[i]=a[i]; 
	} 
	for(i=0;i<9;i++) 
	{ 
		printf("%d",c[i]); 
	}
	output(c);  
} 
void intersection() 
{ 
	int i,c[10]; 
	for(i=0;i<9;i++) 
	{ 
		if (a[i]==b[i]) 
			c[i]=a[i]; 
		else 
			c[i]=0; 
	} 
	for(i=0;i<9;i++) 
	{ 
		printf("%d",c[i]); 
	} 
	output(c); 
} 
void difference() 
{
	int i,c[10]; 
	for(i=0;i<9;i++) 
	{ 
	if (a[i]==1 && b[i]==0) 
		c[i]=1; 
	else 
		c[i]=0; 
	} 

	for(i=0;i<9;i++) 
	{ 
		printf("%d",c[i]); 
	} 
	output(c); 
} 

