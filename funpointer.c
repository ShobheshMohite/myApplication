#include<stdio.h>

void fun()      //function defination
{
    printf("Inside Fun \n");
}

int main()
{

    fun();  // function call

    void (*fptr)();

    fptr = fun;

    fptr();


    return 0;

}