// YUG PATEL(24CS083)
// PRACTICAL_13
// Write a C program to generate and display a multiplication table

#include <stdio.h>
void main() {
    int rows, cols;
    
    // Ask the user for the size of the table
    printf("Enter the size of the table vertically: ");
    scanf("%d", &rows);
    printf("Enter the size of the table horizontally: ");
    scanf("%d", &cols);

    // Display the multiplication table
    printf("\nMultiplication Table (%d x %d):\n", rows, cols);
    
    // Generate and display the table
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            printf("%d\t", i * j);
        }
        printf("\n");
    }

    
}

