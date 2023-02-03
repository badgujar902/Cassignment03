#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number\n");
    scanf("%d",&n);
    if(n%5==0)
        printf("Number is Divisible by 5\n");
    else
        printf("Number is Not-Divisible by 5\n");

    return 0;
}
