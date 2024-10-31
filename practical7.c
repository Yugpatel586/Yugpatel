 // YUG PATEL(24CS083)
// PRACTICAL_7
// write a program to compare two things :
 
#include <stdio.h>
void main ()
{   // declaratin of variables :
    int RB =12000000;   /*let RB be raman bunglow , RP be raman plot , RC be raman raman car */
    int RP =6000000;
    int RC =3000000;

    int SB =11000000;  /* let SB be suman bunglow , SH be suman hotel , SC be suman car */
    int SH =8000000;
    int SC =8000000;
     
    int RT = RB+RC+RP;  // here let RT be the total wealth of raman :
    int ST = SB+SH+SC;  // here let ST be the total wealth of suman :
    
    printf ("R's total wealth :- %d\n" , RT);  // let R be Raman
    printf ("S's total wealth :- %d\n", ST);   // let S be Suman
   
   // determination of who is more wealthier :
  
    if (RT>ST)  // if the wealth of ramaan is more than suman :
    {
        printf (" R is more wealthier\n");
    } 
    else if (ST>RT)  // if the wealth of suman is more than raman :
    {
        printf("S is more wealthier\n");

    }
}