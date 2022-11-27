#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 11;
    float f = 4.12;
    double d = 83.345;

    char *cp = &ch;
    int *ip = &i;
    float *fp = &f;
    double *dp = &d;

    void *vp = &ch;

    printf("value of ch : %c \n",ch);
    printf("adress of ch : %p \n",&ch);
    printf("value inside cp : %p \n",cp);
    printf("data refer by cp : %c \n",*cp);
    printf("SIZE OF Ch= %d\n",sizeof(ch));
    printf("SIZE OF Cp= %d\n",sizeof(cp));
    
    printf("data refer by cp : %c \n",*(char*)vp);

    vp = &i;
    printf("data refer by cp : %d \n",*(int*)vp);
    
    
    return 0;
}