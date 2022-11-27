#include<stdio.h>

int main()
 {
    int arr[5]={10,20,30,40,50};

    printf("Base Adress of Array : %p \n",arr);
    printf("Base Adress of Array : %p \n",&arr);
    printf("Size of Array : %d \n",sizeof(arr));
        
    return 0;
  }