#include<iostream>
//using namespace std;

namespace Marvellous
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
namespace Info
{
    class Demo
    {
        public:
            int a,b;
            void fun()
            {
                std::cout<<"Inside Fun From Info\n";
            }
    };
}

int main()
{
    Marvellous::Demo obj1;
    obj1.fun();

    Info::Demo obj2;
    obj2.fun();

    using namespace std;

    

    return 0;
}