#include<iostream>
using namespace std;

class Demo
{
    public:
        int A,B;

        Demo()
        {
            A = 0;
            B = 0;
        }

        Demo(int i)
        {
            A = i;
            B = 0;
        }

        Demo(int i , int j)
        {
            A = i;
            B = j;
        }


};

int main()
{
    Demo obj1;
    Demo obj2(23);    
    Demo obj3(23,22);    

    return 0;
}