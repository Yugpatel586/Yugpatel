// YUG PATEL (24CS083)
// PRACTICAL_8
// write a program in c to create menu card for restaurant

#include<stdio.h>
void main()
{ 
    int choice , total=0;   //Decleration of variables:    // before placing order the initial bill is 0 :

// start ordering :
Menu:

scanf("%d",&choice);

switch(choice)    // using switch case :
{
case 1: 
 printf("Burger");
total= total+150;
goto Menu;

case 2: 
printf("pizza");
total= total+200;
goto Menu;

case 3: 
printf("pasta") ;
total = total+120;
goto Menu;

case 4:
printf ("sandwich");
total = total+100;
goto Menu;

case 5:
printf ("french fries");
total = total+80;
goto Menu;

case 6: 
printf("%d", total);
goto Menu;

default:
printf(" enter valid case");    // if the customer input is wrong , it will show "Enter valid case" :
goto Menu;
}
}