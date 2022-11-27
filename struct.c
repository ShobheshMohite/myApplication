#include<stdio.h>

struct Demo     //structure declaration
{
    int i;
    float f;
    int j;
    char c;
    double d;
};

int main()
 {
 
    struct Demo obj1;
    struct Demo obj2;
    struct Demo obj3;

    // member initialization
    obj1.d = 11.00;
    obj2.i = 21;    
    obj3.j = 51;

    printf("size of obj1 = %d \n",sizeof(obj1));
    printf("size of obj2 = %d \n",sizeof(obj2));
    printf("size of obj2.i = %d \n",obj2.i);
    
    return 0;
 }