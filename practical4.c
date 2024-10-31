// YUG PATEL (24CS083)
//PRACTICAL_4 
//home ministry 

#include<stdio.h>
void main()
{ long LP,IM,IF,LM,LF,P,M,F;   /*let LP be litterate people ,IM be illiterate male , IF be illeterate female ,LM be litterate male ,   LF be litterate female , 
  P be people , 
  M be male ,
  F be female */
 
  P=1441981744;
   
  LP=(P*85.95)/100;
  
  F=(P*48.4)/100;
  
  M=(P-F);
  
  LM=(M*80.95)/100;
  
  LF=(F*62.84)/100;
  
  IM=(M-LM);
  
  IF=(F-LF);
  
  printf("illiterate men = %1d\n",IM);
  printf("illiterate women = %1d\n",IF);
}