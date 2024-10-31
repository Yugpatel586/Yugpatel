// YUG PATEL (24CS083)
//PRACTICAL_6
//write a c program to perform mathematical operation like (+,-,*,/)

#include <stdio.h>
void main() 
{
    float num1, num2, result;  // declaration of variable for fixed numbers :
    char operator;  // deceleration of mathematical operators :

    printf("Enter two numbers: ");  // take input form the user :
    scanf("%f %f", &num1, &num2);

    
    printf("Enter an operator (+, -, *, /): ");   // mathematical operator :
    scanf("\n%c", &operator);  

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");  
            }
            break;
        }
}
