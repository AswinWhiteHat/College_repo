AIM
To write the C programs using Input / Output functions
---
ALGORITHM
Step 1: Start the process
Step 2: Initialize the necessary variables with valid data types
Step 3: Get the proper input by using input function
Step 4: To print the output by using output function
Step 5: Stop the process
---
  CODING
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
 char name[50]; int age; float height;
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
return 0;
}
