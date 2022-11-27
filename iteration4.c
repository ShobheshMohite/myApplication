#include<stdio.h>

int main()
{
	int arr[4] = {10,20,30,40};

    int iCnt = 0; //loop counter

	printf("elements of array = \n");

       //       1         2         3
        for(iCnt = 0 ;iCnt <= 3 ;iCnt++)
		    {
		    	printf("%d\n",arr[iCnt]); // 4
	    	}
	
		return 0;
}