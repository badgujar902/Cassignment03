#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number\n");
    scanf("%d",&n);
    if(n>=0)
        printf("Number is Positive\n");
    if(n<0)
        printf("Number is Non-Positive\n");

    return 0;
}
