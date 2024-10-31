// YUG PATEL(24CS083)
//PRACTICAL_14.2
// write a C program to print the pattern.

#include <stdio.h>
int main() {
    int rows = 5;  // Number of rows for the pattern

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
