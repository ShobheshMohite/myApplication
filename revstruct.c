#include<stdio.h>

union demo
{
    int no;
    float f;
}Arr[3];

int main()
{

    Arr[0].no = 11;
    Arr[1].f = 9.8;

    printf("SIZE = %d\n",sizeof(Arr[0]));


    return 0;
}