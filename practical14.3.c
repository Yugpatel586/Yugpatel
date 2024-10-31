//YUG PATEL(24CS083)
//PRACTICAL_14.3
//write a C program to print the pattern

#include <stdio.h>
int main() {
    int rows = 5;  // Number of rows for the pattern

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int space = rows - i; space > 0; space--) {
            printf("  ");
        }
        
        // Print increasing characters
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }

        // Print decreasing characters
        ch -= 2;  // Step back to the last printed character
        for (int j = 1; j < i; j++) {
            printf("%c ", ch);
            ch--;
        }
        
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}

