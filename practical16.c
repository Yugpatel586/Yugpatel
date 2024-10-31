//YUG PATEL (24CS083)
//PRACTICAL_16
// write a c program to sort the price of items in inventory .

#include <stdio.h>
void main() {
    int num_items;
    
    
    printf("Enter the number of items in inventory: "); // to ask the no.of item in inventory
    scanf("%d", &num_items);
    
    
    float prices[num_items];   // Declaration of an array to store item prices
    
     // loop to ask the price of each items in inventory  
    for (int i = 0; i < num_items; i++) {
        printf("Enter the price of item %d: ", i + 1);
        scanf("%f", &prices[i]);
    }
    
    // Sort the prices in ascending order
    for (int i = 0; i < num_items - 1; i++) {
        for (int j = 0; j < num_items - i - 1; j++) {
            if (prices[j] > prices[j + 1]) {
                // Swap prices[j] and prices[j + 1]
                float temp = prices[j];
                prices[j] = prices[j + 1];
                prices[j + 1] = temp;
            }
        }
    }
    
    // Display the sorted prices
    printf("\nSorted prices in ascending order:\n");
    for (int i = 0; i < num_items; i++) {
        printf("%.2f\n", prices[i]);
    }
}
    
