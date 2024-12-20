AIM:
To develop a C program that calculates the summation of command line arguments.
---
PROCEDURE:
Setp 1: Start the program
Setp 2: Pass the count of total number of command line arguments as first
argument to the main()
Step 3: Pass the program name and other argument values as the next to main()
Step 4: Use for loop to calculate the sum of command line arguments
Step 5: Print the values of arguments and sum
Step 6: Stop the execution.
---
CODING:
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
 int i, n, sum = 0;
 clrscr() ;
 if(argc == 1)
{
 printf("Please provide command line arguments!!!");
 return 0;
 }
 else
{
 printf("Total number of arguments are - %d and sum of those is ", argc);
 for(i=0; i<argc ; i++){
 n = atoi(argv[i]);
 sum += n;
 }
 printf("%d\n", sum);
 return 0;
 }
}
---
RESULT:
Thus the above program executed successfully and the results are verified.
