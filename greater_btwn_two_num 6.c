#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number\n");
    scanf("%d %d",&a,&b);

    if(a>=b)
        printf("Greater Number is %d\n",a);
    else
        printf("Greater Number is %d\n",b);

    return 0;
}
