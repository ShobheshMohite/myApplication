#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 11;
    float f = 3.14;
    double d = 9.675;

    printf("Values from variables are = \n");
    printf("%c \n",ch);
    printf("%d \n",i);
    printf("%f \n",f);
    printf("%lf \n \n \n",d);

    printf("Size of Each Varible:\n");
    printf("Size of char =%d \n",sizeof(ch));
    printf("Size of int =%d \n",sizeof(i));
    printf("Size of float =%d \n",sizeof(f));
    printf("Size of double =%d \n\n\n",sizeof(d));


    printf("Adress of Each Varible:\n");
    printf("adress of char =%p \n",&ch);
    printf("adress of int =%p \n",&i);
    printf("adress of float =%p \n",&f);
    printf("adress of double =%u \n",&d);


    return 0;
}