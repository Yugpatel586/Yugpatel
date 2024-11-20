//YUG PATEL(24CS083)
//PRACTICAL_22
//write a c program to analyse the marks of students in CCP 

#include <stdio.h>
int totalmarks(int a[] , int);
float avg(int[] , int);
int max(int [] , int);
int min(int[] , int);
void main()
{
    int marks[10] , n ;
    printf("Enter the number of students: ");
    scanf("%d" , &n);
    printf("Enter the marks of ccp of students:\n");
    for(int i =0 ; i<n ; i++)
    {
        printf("Student %d: " , i+1);
        scanf("%d" , &marks[i]);
    }
    printf("\n1.Total Marks : %d\n" , totalmarks(marks , n));
    printf("2.Average marks: %0.2f\n" , avg(marks , n));
    printf("3.Maximum marks: %d\n" , max(marks , n));
     printf("4.Minimum marks: %d\n" ,min(marks , n));
}
int totalmarks(int m[] , int j)
{
    int i , sum=0 ;
    for(i=0 ; i<j ; i++)
    {
        sum = sum + m[i];
    }
    return sum;
}
float avg(int m[] , int j)
{
    int i , sum=0 ;
    float average;
    for(i=0 ; i<j ; i++)
    {
        sum = sum + m[i];
    }
    average = ((float)sum/j);
    return average;
}
int max(int m[] , int j)
{
    int i , maximum=0;
    for(i=0 ; i<j ; i++)
    {
        if(m[i]>maximum)
        {
            maximum = m[i];
        }
    }
    return maximum;
}
int min(int m[] , int j)
{
    int i , minimum = m[0];
    for(i=0 ; i<j ; i++)
    {
        if(m[i]<minimum)
        {
            minimum = m[i];
        }
    }
    
    return minimum;
    
}