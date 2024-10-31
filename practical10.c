//YUG PATEL (24CS083)
// PRACTICAL_10
// write a C program to develop a countdown timer  

#include <stdio.h>
#include <unistd.h>  // For sleep function

void  main() {
    int seconds;

    // Ask the user to input the starting number of seconds
    printf("Enter the number of seconds for the countdown: ");
    scanf("%d", &seconds);

    // Countdown loop
    while (seconds > 0) {
        printf("%d seconds remaining...\n", seconds);
        sleep(1);  // Wait for 1 second
        seconds--; // Decrement the seconds
    }
      printf("Countdown completed!\n");  // When countdown is complete

}
