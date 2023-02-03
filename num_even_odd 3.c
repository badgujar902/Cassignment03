#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number\n");
    scanf("%d",&n);

    if(n%2==0)
        printf("Number is Even\n");
    else
        printf("Number is Odd\n");
    return 0;
}
