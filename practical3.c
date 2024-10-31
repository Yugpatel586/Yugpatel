// YUG PATEL (24CS083)
//PRACTICAL_3
// write a program in C to calculate the simple interest :

#include <stdio.h>
void main ()
{
    float a,b,c ;   // let a be the principle amount , b be the rate if interest , c be the tenture of the loan :
   
    printf ("Enter the priciple amount , rate , tenture of the loan \n");

    scanf("%f",&a);
   
    scanf("%f",&b);
   
    scanf("%f",&c);
     
    printf("%f", (a*b*c)/100);   // formula to calculate the simple interest :

}