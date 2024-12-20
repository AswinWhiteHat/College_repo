AIM:
To develop a C Program to perform the string handling functions
---
ALGORITHM:
STEP 1 : Start the Program
STEP 2 : Declare the character arrays str, str1 to give the input value for strings
STEP 3: Perform the string handling functions
(i) strlen()
(ii) strcpy()
(iii) strcat()
(iv) strcmp()
(v) strrev()
(vi) strlwr()
(vii) strupr()
STEP 4: Print the output strings
STEP 5: Stop the execution
---
CODING:
#include<stdio.h>
#include<conio.h>
#include <string.h>
int main()
{
char str[20]={'p', 'r', 'o', 'g', 'r', 'a', 'm', 'i', 'n', 'c', '\0'};
char str1[20];
clrscr( );
 printf("Length of string is: %zu",strlen(str));
 strcpy(str1,str);
 printf("Value of Copied string is: %s",str1);
 char dest[50] = "This is an";
 printf(" Before concatenation: %s\n", dest);
 strcat(dest, str);
 printf("After concatenation: %s", dest);
 printf("Enter 1st string: ");
 scanf("%s",str);//reads string from console
 printf("Enter 2nd string: ");
 scanf("%s",str1);
if(strcmp(str,str1)==0)
 printf("Strings are equal");
 else
 printf("Strings are not equal"); 
printf("\n Entered string %s",str);
printf("\nReverse String is: %s",strrev(str));
printf("\nLower String is: %s",strlwr(str));
printf("\nUpper String is: %s",strupr(str));
getch();
return 0;
}
---
RESULT:
Thus the program executed successfully and the results are verified.
