#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Three Number\n");
    scanf("%d %d %d",&a,&b,&c);

    if(a>=b)
    {
        if(a>=c)
            printf("Greater Number is %d",a);
    }
    else if(b>=c)
        printf("Greater number is %d",b);
    else
        printf("Greater number is %d",c);

    return 0;
}
