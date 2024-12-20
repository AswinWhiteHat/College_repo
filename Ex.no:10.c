AIM:
To develop a C Program that uses structure and union to maintain student data
---
ALGORITHM:
STEP 1: Start the Program
STEP 2: Declare a structure called student contains name and rollno of a student
STEP 3: Declare a union called marks within student to maintain 3 subject marks of the
student
 STEP 4: Get the input values for structure and union variables and calculate total
 STEP 5: Display the total marks obtained by the student
 STEP 6: Stop the execution
---
CODING:
#include <stdio.h>
#include<conio.h>
struct student
{
 int rollno;
char name[25];
union marks
{
int m1,m2,m3;
}m;
int tot;
}stud;
void main()
{
int x,y,z;
clrscr();
printf(“Enter name and rollno\n”);
scanf(“%s%d”,stud.name,stud.rollno);
printf(“Enter mark 1\n”);
scanf(“%d”,&stud.m.m1);
x=stud.m.m1;
printf(“Enter mark 2\n”);
scanf(“%d”,&stud.m.m2);
y=stud.m.m2;
printf(“Enter mark 3\n”);
scanf(“%d”,&stud.m.m3);
z=stud.m.m3;
stud.tot=x+y+z;
printf(“Total marks= %d”,stud.tot);
getch();
}
---
RESULT:
Thus the program executed successfully and results are verified.
