#include<stdio.h>
#include<stdbool.h>

// == Equality
bool CheckEven(int iNo)
{
    if ((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    int bRet = false;

    printf("Enter One No = ");
    scanf("%d",&iValue);    

    bRet = CheckEven(iValue);
    if (bRet==true)
    {
        printf("Entered No Is Even");
    }
    else
    {
        printf("Entered No Is Odd");
    }


    return 0;            
}
