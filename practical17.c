//YUG PATEL
//PRACTICAL_17
//write a C  program to reserve seats .

#include <stdio.h>
#define ROW 5
#define COL 10

void main() {
    int seats[ROW][COL] = {0}, reserved, r, s;

    printf("Enter the number of reserved seats: ");
    scanf("%d", &reserved);

    for (int i = 0; i < reserved; i++) {
        printf("Enter row and seat number of reserved seat %d: ", i + 1);
        scanf("%d %d", &r, &s);
        if (r > 0 && r <= ROW && s > 0 && s <= COL) {
            seats[r - 1][s - 1] = 1;
        } else {
            printf("Invalid seat position.\n");
            i--; // Repeat this iteration for valid input.
        }
    }

    for (int i = 0; i < ROW; i++) {
        printf("ROW %d: ", i + 1);
        for (int j = 0; j < COL; j++) {
            printf("%d ", seats[i][j]);
        }
        printf("\n");
    }
}
