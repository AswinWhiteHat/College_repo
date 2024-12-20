INPUT AND OUTPUT:
---
#include<stdio.h>
 #include<conio.h>
int main()
 {
char name[50]; int age; float height;
clrscr();
printf("Enter your name: ");
fgets(name, sizeof(name), stdin);
printf("Enter your age: ");
scanf("%d", &age);
printf("Enter your height (in meters): ");
scanf("%f", &height);
printf("\n=== Personal Information ===\n");
printf("Name: %s", name);
printf("Age: %d years\n", age);
printf("Height: %.2f meters\n", height);
printf("=============================");
getch();
return 0;
} 
---
CONDITIONAL STRUCTURE:
#include <stdio.h>
#include<conio.h>
#include<math.h>
int main (){
int m1,m2,m3,tot;
float avg=0;
char g;
clrscr();
printf("Enter the input values of 3 marks:\n");
scanf("%d%d%d",&m1,&m2,&m3);
tot=m1+m2+m3;
avg=tot/3;
printf("Total mark obtained=%d\n",tot);
printf("Average obtained=%f\n",avg);
if(avg>=90){
 g='O';
}
else if(avg>=80 &&avg<90){
 g='A';
}
else if(avg>=70 &&avg<80){
 g='B';
}
else if(avg>=60 &&avg<70){
 g='C';
}
else if(avg>=50 &&avg<60){
 g='D';
}
else
{
 g='E';
}
printf("Grade of a student= %c",g);
getch();
return 0;
}
---
ARRAY:
#include <stdio.h>
#include<conio.h>
int main()
{
int size,i,large,array[100];
clrscr();
printf("\n Enter the size of the array: ");
scanf("%d",&size);
printf("\n Enter %d elements of the array: \n", size);
for(i=0;i< size;i++)
{
scanf(" %d",&array[i]);
}
large= array[0];
for(i=1;i< size;i++)
{
if(large < array[i])
large= array[i];
}
printf("\n largest element present in the given array is : %d", large);
getch();
return 0;
}
---
STRING:
#include<stdio.h>
#include <string.h>
#include<conio.h>
int main()
{
char str[20]={'p', 'r', 'o', 'g', 'r', 'a', 'm', 'i', 'n', 'c', '\0'};
char str1[20],dest[50]="This is an";
clrscr( );
printf("Length of string is:%d\n",strlen(str));
strcpy(str1,str);
printf("Value of Copied string is: %s\n",str1);
printf("Before concatenation:%s\n", dest);
strcat(dest, str);
printf("After concatenation:%s\n", dest);
printf("Enter 1st string: ");
scanf("%s",str);
printf("Enter 2nd string: ");
scanf("%s",str1);
if(strcmp(str,str1)==0)
printf("\n Strings are equal");
else
printf("\nStrings are not equal");
printf("\nEntered string %s",str);
printf("\nReverse String is:%s",strrev(str));
printf("\nLower String is:%s",strlwr(str));
printf("\nUpper String is:%s",strupr(str));
getch();
return 0;
}
---
FUNCTION:
#include<stdio.h>
#include<conio.h>
void fibo(int n);
void main()
{
int n;
clrscr();
printf("Enter a number:");
scanf("%d",&n);
fibo(n);
getch();
}
void fibo(int n)
{
int i, a=0,b=1,c;
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
RECURSION:
#include <stdio.h>
#include<conio.h>
int factorial(int i)
{
if(i<=1)
return 1;
else
return i*factorial(i-1);
}
void main()
{
int n,fact;
clrscr();
printf("Enter the number to find factorial:");
scanf("%ld",&n);
printf("\nFactorial of %d=%d",n,factorial(n));
getch();
}
---
POINTERS:
#include <stdio.h>
#include<conio.h>
int main()
{
int num1,num2,sum=0;
int *ptr1,*ptr2;
clrscr();
ptr1 = &num1;
ptr2 = &num2;
printf("Enter any two numbers: ");
scanf("%d%d", ptr1, ptr2);
sum = *ptr1 + *ptr2;
printf("The address of %d=%p\n",num1,ptr1);
printf("The address of %d=%p\n",num2,ptr2);
printf("Sum of %d and %d=%d",num1,num2, sum);
getch();
return 0;
}
---
FILES:
#include<stdio.h>
#include<conio.h>
int main()
{
char name[50];
int marks, i, num;
FILE*fptr;
clrscr();
printf("Enter number of students: ");
scanf("%d",&num);
fptr=fopen("c:\\student.txt","a");
if(fptr==NULL)
{
printf("Error!");
exit(1);
}
for(i=1;i<=num;i++)
{
printf("For student %d\nEnter name:", i);
scanf("%s", name);
printf("Enter marks: ");
scanf("%d", &marks);
fprintf(fptr,"\nName: %s \nMarks=%d \n", name, marks);
}
fclose(fptr);
getch();
return 0;
}
---
STRUCTURE AND UNION:
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
printf("Enter name and rollno:");
scanf("%s %d",stud.name,stud.rollno);
printf("Enter mark 1\n");
scanf("%d",&stud.m.m1);
x=stud.m.m1;
printf("Enter mark 2\n");
scanf("%d",&stud.m.m2);
y=stud.m.m2;
printf("Enter mark 3\n");
scanf("%d",&stud.m.m3);
z=stud.m.m3;
stud.tot=x+y+z;
printf("Total marks= %d",stud.tot);
getch();
}
----
