//YUG PATEL(24CS083)
//PRACTICAL_15
//basic concept of array .

#include <stdio.h>
void main() {
    int numbers[25];  // Array to store 25 numbers
    int positiveCount = 0, negativeCount = 0;
    int evenCount = 0, oddCount = 0;

    // Input 25 numbers
    printf("Enter 25 numbers:\n");
    for (int i = 0; i < 25; i++) {
        scanf("%d", &numbers[i]);

        // Check if the number is positive or negative
        if (numbers[i] > 0) {
            positiveCount++;
        } else if (numbers[i] < 0) {
            negativeCount++;
        }

        // Check if the number is even or odd
        if (numbers[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Output the results
    printf("\nResults:\n");
    printf("Positive numbers: %d\n", positiveCount);
    printf("Negative numbers: %d\n", negativeCount);
    printf("Even numbers: %d\n", evenCount);
    printf("Odd numbers: %d\n", oddCount);

}
