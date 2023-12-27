#include<stdio.h>
#include<stdlib.h>
void makeset();
void displayset();
int find(int x);
void Union(int x,int y);
void menu();
struct disjset
     {
      int parent[10];
      int rank[10];
      int n;
     }dis;
     
     
void main()
{
 int n,x,y;
 printf("How many elements:");
 scanf("%d",&dis.n);
 makeset();
 menu();
}    
 
void makeset()
{
 for(int i=0;i<dis.n;++i)
    {
     dis.parent[i]=i;
     dis.rank[i]=0;
    }
}     
void displayset()
{
 printf("\nParent Array:\n");
 for(int i=0;i<dis.n;++i)
    {
     printf("%d ",dis.parent[i]);
    }
 printf("\nRank Array:\n");
 for(int i=0;i<dis.n;++i)
    printf("%d ",dis.rank[i]);
 printf("\n");    
}
int find(int x)
{
 if(dis.parent[x]!=x)
   dis.parent[x]=find(dis.parent[x]);
 return dis.parent[x];  
}
void Union(int x,int y)
{
 int xset=find(x);
 int yset=find(y);
 if(xset==yset)
    return;
 if(dis.rank[xset]<dis.rank[yset])
   {
    dis.parent[xset]=yset;
    dis.rank[xset]=-1;
   }   
 else if(dis.rank[xset]>dis.rank[yset])
   {
    dis.parent[yset]=xset;
    dis.rank[yset]=-1;
   }  
 else
   {
    dis.parent[yset]=xset;
    dis.rank[xset]=dis.rank[xset]+1;
    dis.rank[yset]=-1;
   }  
}
void menu()
{
 int ch,x,y;
 printf("\n MENU \n");
 printf("1.Union\n2.Find\n3.Display\n4.exit\n");
 printf("Enter your choice:");
 scanf("%d",&ch);
 switch(ch)
       {
        case 1: 
               printf("Enter the first set:");
               scanf("%d",&x);
               printf("Enter the second set:");
               scanf("%d",&y);
               Union(x,y);
               menu();
               break;
        case 2: 
               printf("Enter the first set:");
               scanf("%d",&x);
               printf("Enter the second set:");
               scanf("%d",&y);
               if(find(x)==find(y))
                  printf("connected components\n");
               else
                  printf("Not connected components\n"); 
               menu();     
               break;   
        case 3:
               displayset();
               menu();
               break;           
        case 4:
               exit(0);
        default:
                printf("Wrong Choice!");
                menu();
                break;              
       }
 
}

