#include<stdio.h>
int main()
{
    int year;
    printf("Enter a Year\n");
    scanf("%d",&year);

    if(year%400==0)
    {
        if(year%4==0)
        {
            printf("Year is Leap Year\n");
        }
    }
    else if(year % 4==0)
    {
        printf("Year is Leap Year\n");
    }
    else
        printf("Year is Not Leap Year\n");

    return 0;

}
