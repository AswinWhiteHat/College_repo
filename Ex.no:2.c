AIM:
To develop a C program that calculates a grade obtained by a student using if..else if
structure.
---
PROCEDURE:
Setp 1: Start the program
Setp 2: Get the input values of three subject marks using scanf.
Step 3: Calculate total and average.
Step 4: Assign the grade based on the average value.
Step 5: Print the value of total, average and grade.
Step 6: Stop the execution.
---
CODING:
#include <stdio.h>
int main (){
int m1,m2,m3,tot;float avg;
char g;
tot=0;
printf("Enter the input values of 3 marks\n");
scanf("%d%d%d",&m1,&m2,&m3);
tot=m1+m2+m3;
printf("Total mark obtained=%d\n",tot);
avg=tot/3;
printf("Average obtained=%f\n",avg);
if(avg>=90)
{
 g='O';
}
else if(avg>=80 && avg<90)
{
 g='A';
}
else if(avg>=70 && avg<80)
{
 g='B';
}
else if(avg>=60 && avg<70)
{
 g='C';
}
else if(avg>=50 && avg<60)
{
 g='D';
}
else
{
 g='E';
}
printf("Grade of a student= %c",g);
 return 0;
}
---
RESULT:
Thus the above program executed successfully and the results are verified
