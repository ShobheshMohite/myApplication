#include<iostream>
using namespace std;

class demo
{
    public:
        int i;
        int j;
        const int k ;
        const int l ;

        demo() : k(11),l(21)
        {
            i = 51;
            j = 212;
        }

        demo(int a,int b,int c ,int d) : k(c),l(d)
        {
            i = a;
            j = b;

        }
    



};

int main()
{
    demo dobj;
    demo dobj2(10,20,30,40);
    
    //dobj.k++; NA
    //dobj2.k++;    NA

    dobj.i++;
    dobj2.i++;    


    return 0;
}