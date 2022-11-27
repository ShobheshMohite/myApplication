#include<iostream>
//using namespace std;

namespace   
{
    class Demo
    {
        public:
            int i,j;
            void fun()
            {
                std::cout<<"Inside Fun From Marvellous\n";
            }
    };

    class Hello
    {
        public:
            int x,y;
    };
    
}

int main()
{
    Demo obj1;
    obj1.fun();    

    return 0;
}