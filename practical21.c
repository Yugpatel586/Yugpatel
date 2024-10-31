//YUG PATEL(24CS083)
//PRACTICAL_21
//write 

#include <stdio.h>
#include <math.h>
void triangle(int , int  ,int);
void area(int , int , int);
void main()
{
    int a , b , c ;
    printf("Enter lenghts of sides of triangle (in cm)\n");
    printf("=========================================\n");
    printf("Enter lenght of 1st side: ");
    scanf("%d" , &a);
    printf("Enter lenght of 2st side: ");
    scanf("%d" , &b);
    printf("Enter lenght of 3st side: ");
    scanf("%d" , &c);
    triangle(a , b , c);
}
void triangle(int x , int y , int z)
{
    if( (x+y)>z && (y+z)>x && (z+x)>y )
    {
        printf("\nThe given lenghts will form a triangle\n");
        area(x , y , z);
    }
    else
    {
        printf("The given lenghts cannot form a triangle");
    }
}
void area(int x , int y , int z)
{
    float s , A ;
    s = ((x+y+z)/2.0);
    A = sqrt( s*(s-x)*(s-y)*(s-z) );
    printf("The area of triangle formed is %0.3fcm^2" , A);
}