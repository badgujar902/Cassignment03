#include<stdio.h>
int main()
{
    int digit,count=0;
    printf("Enter an Digit\n");
    scanf("%d",&digit);
    while(digit!=0)
    {
        count++;
        digit=digit/10;
    }
    if(count==3)
        printf("Number is Three Digit\n");

    else if(count>3)
            printf("Number is More than Three Digit\n");

    else
        printf("Number is Not Three Digit\n");

    return 0;
}
