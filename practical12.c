//YUG PATEL(24CS083)
//PRACTICAL_12
//Case study based question.

#include <stdio.h>

int main() {
    int day;
    int total_budget = 0; // Variable to hold the total budget
    int cost_per_event = 200; // Cost for each event on an even day

    // Loop through even days from 2 to 100
    for (day = 2; day <= 100; day += 2) {
        total_budget += cost_per_event; // Add cost for each even day
    }

    // Display the total budget
    printf("Total budget for all even-day events: %d Rs\n", total_budget);
    
    return 0; // Return statement indicating successful execution
}
