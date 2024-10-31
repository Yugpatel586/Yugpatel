// YUG PATEL(24CS083)
//PRACTICAL_5
// write a c program to convert celsius to ferenhite and display the result :

#include<stdio.h>
void main()
{ 
    float ferenhite;
  
    printf ("Enter the temp. in degree celsius\n");
  
    float C ;  // where C is temp. in celsius:
  
    scanf("%f", &C);
  
    float F =(C*9/5)+32;   // formula  for calculating temp. in ferenhite:
  
    printf("%f", F);

}