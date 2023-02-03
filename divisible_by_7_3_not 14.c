#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);

    if((num%7==0) && (num%3==0))
        printf("Number is divisible by 7 and 3\n");
    else
        printf("Number is not divisible");

    return 0;
}
