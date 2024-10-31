// YUG PATEL (24CS083)
//PRACTICAL_2
// write a program in C to calculate the perimeter and area and display the results.:

#include<stdio.h>
void main()
{
    int a,b;    //let a be the lenght and b be the breadth:
    
    printf("Enter the lenght and breath\n ");
   
    scanf("%d",&a);
    
    scanf("%d",&b);

    
    printf ("%d\n",a*b);   // formula for area rectangular plot :
    
    printf ("%d\n", 2*(a+b));  // formula for perimeter of rectangular plot :
}