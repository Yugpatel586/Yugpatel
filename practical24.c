#include <stdio.h>
struct book
{
    char title[20];
    char author[20];
    float amount;
};
void main()
{
    struct book b[3];
    int i ;
    float m=0;
    printf("Enter book title , author , price\n");
    for(i=0 ; i<3 ; i++)
    {
        printf("Enter details of book %d\n" , i+1);
        printf("Title: ");
        gets(b[i].title);
        printf("Author: ");
        gets(b[i].author);
        printf("Amount: ");
        scanf("%f" , &b[i].amount);
        printf("\n");
        fflush(stdin);
    }
    for(i=0 ; i<3 ; i++)
    {
        printf("Details of book %d\n" , i+1);
        printf("Title: ");
        puts(b[i].title);
        printf("Author: ");
        puts(b[i].author);
        printf("Amount: %0.2f\n" , b[i].amount);
        printf("\n");
    }
    for( i=0 ; i<3 ; i++)
    {
        if(m < b[i].amount)
        {
            m = b[i].amount;
        }
    }
    for(i=0 ; i<3 ; i++)
    {
        if(m == b[i].amount)
        {
            printf("The costlest book is: ");
            puts(b[i].title);
            break;
        }
    }
    printf("Amount: %0.2f\n" , m);
    printf("programmer : Yug Patel\n");
    printf("ID : 24CS083");
}
