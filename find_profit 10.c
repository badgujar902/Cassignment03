#include<stdio.h>
int main()
{
    int sp,cp,profit,loss;
    printf("Enter Cost Price\n");
    scanf("%d",&cp);
    printf("Enter Selling Price\n");
    scanf("%d",&sp);

    if(sp>cp)
    {
        profit = sp - cp;

        printf("Profit = %d",profit);
    }
    else
    {
        loss = cp - sp;
        printf("Loss = %d",loss);
    }
    return 0;
}
