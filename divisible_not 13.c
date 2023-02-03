#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);

    if((num%3==0) && (num%2==0))
        printf("Number is divisible by 3 and 2");
    else
        printf("Not divisible\n");

    return 0;
}
