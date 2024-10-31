// YUG PATEL (24CS083)
// PRACTICAL_9
// write a C program to determine the grade of student based on their marks using conditional operators

#include<stdio.h>

void main() { 
    printf("Enter The Marks Of Student");
    int marks;
    scanf("%d", &marks);

    (marks >= 90) ? printf("Grade A") :   // if marks is greater than or equal to 90 ,it prints "grade A " . if not , then proceeds to the next condition .
    (marks >= 80) ? printf("Grade B") :  // if marks is greater then or equal to 80 , it prints "grade B " . if not , then proceeds to the next condition .
    (marks >= 70) ? printf("Grade C") : // if marks is greater then or eqaul to 70 , it prints " grade C " . if not , then proceeds to the next condition . 
    (marks >= 60) ? printf("Grade D") : // if marks is greater then or equal to 60 , it prints " grade D " . it not , then proceeds to the next condition . 
    printf("Grade E");                  // if marks is less then 60 , it prints " grade E " . 

    
}