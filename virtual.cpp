#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
        void fun()                          // void fun () {  cout<<"Base Fun\n";}
        {
            cout<<"Inside Base Fun\n";
        } 
        virtual void gun()
        {
            cout<<"Inside Base Gun\n";
        } 
        virtual void sun()
        {
            cout<<"Inside Base Sun\n";
        } 



};

class Derived : public Base
{
    public:
        int X,Y;
        virtual void gun()
        {
            cout<<"Inside Derived Gun\n";           //Redefination
        }
        void run()
        {
            cout<<"Inside Derived Run\n";           //defination
        }  
       void mun()
        {
            cout<<"Inside Derived Mun\n";           //defination
        } 
};

int main()
{

   /* cout<<"Size of Base Class : "<<sizeof(Base)<<"\n";
    cout<<"Size of Derived Class : "<<sizeof(Derived)<<"\n";*/

    Base *bp = NULL;
    Derived dobj;
    bp = &dobj;     // Upcasting

    bp-> fun();
    bp-> gun();
    bp-> sun();


    return 0;
}