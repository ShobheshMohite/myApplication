#include<stdio.h> 
#include<stdlib.h>      // For Malloc And Free      

//////////////////////////////////////////////////
//
//  Application Name : Addition of n No. 
//  Input            : n Numbers
//  Output           : Addition
//  Author           : Shobhesh Mohite
//  Date             : 18/09/2022
//
//////////////////////////////////////////////////


int main()
{
    int *Arr = NULL; //pointer to hold adress
    int iSize = 0;    //variable to hold size of array  
    register int i = 0;     //loop counter
    int iSum = 0;       //

    printf("Please Enter How Many Elements You Want?\n");
    scanf("%d",&iSize);

    //allocate the memory

    Arr = (int *)malloc(iSize * sizeof(int));
    printf("Memory Allocation is Successful\n");

    printf("Please Enter The Elements \n");

    for(i = 0; i < iSize ; i++)
    {
      scanf("%d",&Arr[i]);
    }

    for(i = 0; i < iSize ; i++)
    {
        iSum  = iSum + Arr [i];
    }

    printf("Addtion is :%d\n",iSum);

    free(Arr);

    return 0;
}