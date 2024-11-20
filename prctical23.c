#include <stdio.h>
void fibo(int , int , int);
void main()
{
    int n , m1 , m2;
    x:
    printf("Enter number of months: ");
     scanf("%d" , &n);
    printf("Enter the saving of month 1: ");
    scanf("%d" , &m1);
     printf("Enter the saving of month 2: ");
    scanf("%d" , &m2);
    if(n<=0)
    {
        printf("Invalid input\n");
        goto x;
    }
    else if(n==1)
    {
        printf("0");
    }
    else
    {
        fibo(n , m1 , m2);
    }
}
void fibo(int n , int m1 , int m2)
{
    int frist=m1 , sceond=m2 , next;
    printf("%d %d" , frist , sceond);

    for( int i=2 ; i<=n ; i++)
    {
        next = frist + sceond;
        printf(" %d \n" , next);
        frist = sceond;
        sceond = next;
    }
    printf("programmer : Yug Patel\n");
    printf("ID : 24CS083");
}