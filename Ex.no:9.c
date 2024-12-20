AIM:
To develop a C Program to create a new file and write student name and marks .
---
ALGORITHM:
STEP 1: Start the Program
STEP 2: Declare a file pointer fptr and also the required variables for student name and
marks
STEP 3: Open a file student.txt in Append mode
 STEP 4: Get the input values for name and marks of the students
 STEP 5: write the content into the file using fprintf()
 STEP 6: Close the file pointer fptr
 STEP 7: Stop the execution
---
CODING:
#include <stdio.h>
int main()
{
 char name[50];
 int marks, i, num;
 printf("Enter number of students: ");
 scanf("%d", &num);
 FILE *fptr;
 fptr = fopen("C:\\student.txt", "a");
 if(fptr == NULL)
 {
 printf("Error!");
 exit(1);
 }
 for(i = 1; i <= num; i++)
 {
 printf("For student %d\nEnter name: ", i);
 scanf("%s", name);
 printf("Enter marks: ");
 scanf("%d", &marks);
 fprintf(fptr,"\nName: %s \nMarks=%d \n", name, marks);
 }
 fclose(fptr);
 return 0;
}
---
RESULT:
Thus the above program created a file and the contents are written into the file
successfull
