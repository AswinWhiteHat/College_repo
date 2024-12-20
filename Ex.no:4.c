AIM:
To develop a C program that finds the largest of array elements.
---
PROCEDURE:
Setp 1: Start the program
Setp 2: Get the input value for size of an array
Step 3: Use a for loop to get the values of array elements
Step 4: Assign the first element array[0] to the variable large
 Step 5: Check if any other element is greater than array[0]. If yes, then assign
that element to the variable large
Step 6: Print the largest value of array
Step 7: Stop the execution.
---
CODING:
#include <stdio.h>
#include<conio.h>
int main()
{
 int size, i, large;
clrscr();
 printf("\n Enter the size of the array: ");
 scanf("%d", &size);
 int array[size]; //Declaring array
 //Input array elements
 printf("\n Enter %d elements of the array: \n", size);
 for (i = 0; i < size; i++)
 {
 scanf(" %d", &array[i]);
 }
 //Declaring Largest element as the first element
 large = array[0];
 for (i = 1; i < size; i++)
 {
 if (large < array[i])
 large = array[i];
 }
 printf("\n largest element present in the given array is : %d", largest);
getch();
 return 0;
 }
---
RESULT:
Thus the above program executed successfully and the results are verified.
