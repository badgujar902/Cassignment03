#include<stdio.h>
int main()
{
    char alpha;
    printf("Enter a alphabet\n");
    scanf("%c",&alpha);

    if(alpha>='a' && alpha<='z')
        printf("Alphabet is lower case\n");

    else if(alpha>='A' && alpha<='Z')
        printf("Alphabet is Uppercase\n");



    return 0;
}
