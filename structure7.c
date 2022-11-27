#include<stdio.h>

#pragma pack(1)

struct demo
{
    int i;
    char ch;
    float f;
    float fl;
//    char dh;

}dobj;


int main()
 {
    printf("size = %d\n",sizeof(dobj));
 
    return 0 ;
 }