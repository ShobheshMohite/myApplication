#include<stdio.h>

int main()
{
    int iToken = 0 ;

    printf("Enter Your tkn No = \n");
    scanf("%d",&iToken);

    switch (iToken)
    {
    case 11:
        printf("Boy's Chappal");
        break;
    case 21:
        printf("Girls's Chappal");
        break;
    case 51:
        printf("Mom's Chappal");
        break;
    case 101:
        printf("Dad's Chappal");
        break;    
    default:
        printf("Sorryyy\n");
        break;
    }


    return 0;
}