#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5;

    printf("Enter five subject marks\n");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);

    if(m1>=33 && m2>=33 && m3>=33 && m4>=33 && m5>=33)
        printf("Candidate is passed\n");
    else
        printf("Candidate is not passed\n");

    return 0;
}
