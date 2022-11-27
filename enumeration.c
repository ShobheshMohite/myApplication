#include<stdio.h>

enum days {monday = 1,tuesday,thursday,wednesday,friday,saturday,sunday};

int main()
{
    enum days obj;

    //'int salary[] = {200,400,500};
    
    printf("Size Of Enum = %d\n",sizeof(obj));
    
    printf("Monday = %d\n",monday);    
    printf("tuesday = %d\n",tuesday);
    printf("thursday = %d\n",thursday);
     printf("wednesday = %d\n",wednesday);    
    printf("friday = %d\n",friday);
    printf("sunday = %d\n",sunday);
    printf("saturday = %d\n",saturday);
    //printf("Salary On Monday = %d\n",salary[1]);
    //printf("Salary On Monday = %d\n",salary[monday]);

    return 0;
}