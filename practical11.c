// YUG PATEL (24CS083)
// PRACTICAL_11
// develop a C program that stimulates a matchstick game between the user and the computer .

#include<stdio.h>
void main()
{
    int matchstick=21;
    int userpick , computerpick;

    printf ("the game starts with 21 matchsticks.\n");                       // instruction of the game 
    printf("the user is asked to pick 1,2,3,or 4 matchstick.\n");
    printf("after the user picks , the computer makes its pick.\n");
    printf("the player who is forced to pick the last matchstick loses the game.\n");
while(matchstick>=1)
{   // user's turn 
    printf("the user has to pick the matchstick (1 to 4):");
    scanf ("%d", &userpick );
    if (userpick>4)  // statement 
    {printf("invalid choice");
    }
    // computer's turn
    computerpick=5-userpick ;
    printf("the computer picks the matchstick %d", computerpick);
    matchstick = matchstick-userpick-computerpick;  // formula 
    if(matchstick==1)  // if statement
    {printf("\nyou have lost\n");
    break;
    }}
}