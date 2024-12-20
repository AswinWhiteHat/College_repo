AIM:
To develop a C Program to print Factorial of a given number using recursion
---
ALGORITHM:
STEP 1: Start the Program
STEP 2: Define a function factorial to print factorial value of a given parameter using the
concept of recursion
STEP 3: Define a main() function
 STEP 4: Get the input value for the variable n
 STEP 5: Call the function factorial with n and assign the return value to a variable fact.
 STEP 6: Print the value of factorial value
 STEP 7: Stop the execution
---
CODING:
#include <stdio.h>
#include<conio.h>
int factorial(int i)
{
 if(i <= 1)
 return 1;
else
 return i * factorial(i - 1);
}
void main()
{
 int n,fact;
clrscr();
printf(“Enter the number to find factorial\n”);
scanf(“%d”,&n);
fact= factorial(n);
printf("Factorial of %d = %d",n, fact);
getch();
}
---
RESULT:
Thus the program executed successfully and the factorial value is verifi
