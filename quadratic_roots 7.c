#include<stdio.h>
int main()
{
    int a,b,c,D;
    printf("Enter Cofficient Of x^2\n");
    scanf("%d %d %d",&a,&b,&c);

    D = b*b - 4*a*c;
    if(D<0)
        printf("Roots are Imaginary Roots\n");
    if(D>0)
        printf("Roots are real and distinct\n");
    if(D==0)
        printf("Roots are equal\n");

    return 0;
}
