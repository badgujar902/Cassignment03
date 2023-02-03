#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);

    if((n&1)==0)
    {
        printf("Number is Even\n");
    }
    else
        printf("Number is Odd\n");

    return 0;
}
