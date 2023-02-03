#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character \n ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
        printf("Yes it is alphabet\nCharacter is  Lowercase\n");
    else if(ch>='A'  && ch<='Z')
         printf("Yes it is alphabet\nCharacter is  Uppercase\n");
    else if(ch>='0' && ch<='9')
        printf("it is digit\n");
   // else if(ch=='@' || ch=='&' || ch=='$' || ch=='#' || ch=='*')
       else
             printf("It is special Character\n");

    return 0;
}
