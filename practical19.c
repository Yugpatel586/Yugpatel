//YUG PATEL(24CS083)
//PRACTICAL_19
//write a c program to do various string operation without usinf <string.h> headeer file.

#include <stdio.h>
void main()
{
    int   lenght1=0 ,lenght2=0, i , x , j ;
    char str1[50] , str2[50] , str3[50] , t ;

    printf("Enter your note 1\n");
    scanf("%s" , str1);

    printf("Enter your note 2\n");
    scanf("%s" , str2);

    printf("1. Enter 1 lenght string 1\n2. Enter 2 lenght string 2\n3. Enter 3 to compare both notes\n4. Enter 4 to concanate note 2 in note 1\n5. Enter 5 to reverse note 1\n6. Enter 6 to copy note 1\n");
    scanf("%d" , &x);

    for(i=0 ; str1[i] != '\0' ; i++)
    {
        lenght1++;
    }
    
    for(i=0 ; str2[i] != '\0' ; i++)
    {
        lenght2++;
    }
   
    switch(x)
    {
        case 1 :
             printf("Lenght of note 1 is %d\n"  , lenght1);
             break;

        case 2 :
             printf("Lenght of note 2 is %d"  , lenght2);
             break;

        case 3 :
             if(lenght1==lenght2)
             {
                for(i=0 , j=0 ; i<lenght1 ; i++ , j++)
                {
                    if(str1[i] != str2[j])
                    {
                        printf("The notes are not identical");
                    }
                    if(str1[i] == '\0')
                    {
                        printf("The notes are identical");
                    }
                }   
             }
             else
             {
                printf("The notes are not identical");
             }
             break;

        case 4 :
             for(i=0 , j=lenght1 ; i<lenght2 ; i++ , j++)
             {
                str1[j] = str2[i];
             }
             str1[j] = '\0';
             printf("%s" , str1);
             break;

        case 5 :
              for(i=0 , j=(lenght1-1) ; i<(lenght1/2) ; i++ , j--)
              {
                  t = str1[i];
                  str1[i] = str1[j];
                  str1[j] = t;
              }
              printf("%s" , str1);
              break;

        case 6 :
             for(i=0 ; str1[i] != '\0' ; i++)
             {
                str3[i] = str1[i];
             }
             str3[i] = '\0';
             printf("%s" , str3);
             break;

        default :
             printf("Invalid input");
             break;
    }
}