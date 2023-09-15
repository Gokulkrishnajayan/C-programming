#include<stdio.h>
int main()
{
 struct dob
 {
  int day,month,year;
 };
 struct student
 {
  int rollno;
  char name[10];
  float fees;
  struct dob date;
 }stud1;
 printf("Enter the Roll number :");
 scanf("%d",&stud1.rollno);
 printf("Enter the name:");
 scanf("%s",stud1.name);
 printf("Enter the Fees:");
 scanf("%f",&stud1.fees);
 printf("Enter the date of birth:");
 scanf("%d%d%d",&stud1.date.day,&stud1.date.month,&stud1.date.year);
 printf("Roll number:%d\nName:%s\nFees:%f\nDOB:%d/%d/%d\n",stud1.rollno,stud1.name,stud1.fees,stud1.date.day,stud1.date.month,stud1.date.year);
 return 0;
}
