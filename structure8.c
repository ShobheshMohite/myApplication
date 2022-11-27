#include<stdio.h>


struct demo
{
    int i;
    float f;
    double d;
//    char dh;

};

union hello
{
    int i;
    double d;
    
}hobj;


int main()
 {
    struct demo dobj;
    union hello hobj;
    
    printf("size = %d\n",sizeof(dobj));
    printf("size = %d\n",sizeof(hobj));

    dobj.i = 11;
    dobj.f = 10.00;
    dobj.d = 30.400;

    return 0 ;
 }