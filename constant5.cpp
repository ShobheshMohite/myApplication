#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        const int j;

        Demo(int x = 10 ,int y = 20) : j(y) //Parameterised Constructor with Default Value
        {
            i = x;
            
        }

        void fun()
        {
            int a = 10;
            const int b = 20;
            i++;
            j++;
            a++;
            b++;
    
        }
        
        void gun() const
        {
            int a = 10;
            const int b = 20;
            i++;
            j++;
            a++;
            b++;
    
        }
     

};

int main()
{
    Demo obj1(11,21);
    const Demo obj2(11,21)
    
    obj1.fun();
    obj2.gun();
    obj1.fun();
    obj2.gun();

    
    return 0;
}   