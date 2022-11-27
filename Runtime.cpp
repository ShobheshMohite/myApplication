#include<iostream>
using namespace std;

class Base
{
    public:                 //Access Specifier
        int A,B;

        void fun()          // Function Defination          1000
        {
            cout<<"Base Fun\n";
        }
        void gun(int i)         // Function Defination      2000
        {
            cout<<"Base Gun\n";
        }
        void gun(int i,int j)       //Overloaded function Defnation     3000
        {
            cout<<"Base Gun with 2 no.\n";
        }
};

class Derived : public Base
{
    public:
        int X,Y;
        void sun()              //funtion defination        4000
        {
            cout<<"Derived Sun\n";
        }
        void fun(int i)              //function Redefination         5000
        {
            cout<<"Derived Fun\n";
        }


};

int main()
{
    Derived dobj;
    dobj.fun();     //    // dobj.Base::fun(); //-> fun from base
    dobj.gun(11);
    dobj.gun(11,21);
    dobj.sun(); 

  /*  Base bobj;
    bobj.fun();
                    */
    return 0;
}