#include<iostream>
using namespace std;

class Demo
{
    public:
        int A,B;

        Demo(int i = 0 , int j = 0)
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