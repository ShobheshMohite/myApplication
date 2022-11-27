#include<stdio.h>

int main()
 {
    int arr[5]={10,20,30};
    int brr[4];

    printf("Member initilisation== \n" );
    printf("%d \n",arr[0]);
    printf("%d \n",arr[1]);
    printf("%d \n",arr[2]);
    printf("%d \n",arr[3]);
    printf("%d \n\n\n",arr[4]);

    
    
    brr[0]=10;
    brr[1]=20;
    printf("Member by Member initilisation=\n" );
    printf("%d \n",brr[0]);
    printf("%d \n",brr[1]);
    printf("%d \n",brr[2]);
    printf("%d \n",brr[3]);
    


    return 0;
  }