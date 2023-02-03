#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three sides of triangle\n");
    scanf("%d %d %d",&a,&b,&c);

    if(a==b || a==c || b==c)
        printf("Triangle is valid\n");
    else
        printf("Triangle is not valid\n");

    return 0;
}
