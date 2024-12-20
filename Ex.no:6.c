AIM:
To develop a C Program to print Fibonacci series using functions
---
ALGORITHM:
STEP 1 : Start the Program
STEP 2 : Declare a function to print Fibonacci series
STEP 3: Get the input value for the variable n
 STEP 4: Call the fibo(n), passing n as argument
 STEP 5: Within fibo(), print the Fibonacci series by assigning the a=0,b=1.
 STEP 6: Print the Fibonacci series by adding the previous 2 values
 STEP 7: Stop the execution
CODING:
---
#include<stdio.h>
void fibo(int);
void main()
{
 int n;
 printf("Enter a number: \n");
 scanf("%d",&n);
 fibo(n);
}
void fibo(int n)
{
 int i, a=0,b=1;
 printf("%d %d ", a,b);
 for(i=3;i<=n;i++)
 {
 c=a+b;
 printf("%d ",c);
 a=b;
 b=c;
 }
}
---
RESULT:
 Thus the above program using function in C has been developed and executed
successfully.
