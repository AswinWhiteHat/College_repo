AIM:
To develop a C Program to add the sum of two integers using Pointers
---
ALGORITHM:
STEP 1: Start the Program
STEP 2: Declare two integer variables num, num2 and pointer variables ptr1, ptr2
STEP 3: Assign the address of num1 and num2 to ptr1 and ptr2
 STEP 4: Add the content of pointer variables ptr1 and ptr2
 STEP 5: Print the value of variable sum
 STEP 6: Stop the execution
---
CODING:
/*
 * C program to add two number using pointers
 */
#include <stdio.h>
#include<conio.h>
int main()
{
 int num1, num2, sum;
 int *ptr1, *ptr2;
 clrscr();
 ptr1 = &num1; // ptr1 stores the address of num1
 ptr2 = &num2; // ptr2 stores the address of num2
 printf("Enter any two numbers: ");
 scanf("%d%d", ptr1, ptr2);
 sum = *ptr1 + *ptr2;
printf(“The address of %d = %p\n”,num1,ptr1);
printf(“The address of %d = %p\n”,num2,ptr2);
 printf("Sum of %d and %d = %d",num1,num2, sum);
 getch();
 return 0;
}
---
RESULT:
Thus the program executed successfully and results are verified
