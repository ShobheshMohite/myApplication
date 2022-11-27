#include<stdio.h>

int main()
{
    int No1 = 10;
    const int No2 = 10;

    printf("%d\n",No1);
    printf("%d\n",No2);

    No1++;
    No2++;

    No1 = 20;
    No2 = 20;

    No1--;
    No2--;  

    return 0;
}