#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[5]; // static Memory Allocation
    
    int *p = NULL;

    p = (int *)malloc(sizeof(int) *5);

    // Use The Memory

    free (p);

    //code

    return 0;   // memory for Arr gets deallocated at this point
}

