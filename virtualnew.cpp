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
        virtual void run()
        {
            cout<<"Inside Base Run\n";
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
        virtual void run()
        {
            cout<<"Inside Derived Run\n";           //defination
        }  
       virtual void mun()
        {
            cout<<"Inside Derived Mun\n";           //defination
        } 
};

int main()
{

   /* cout<<"Size of Base Class : "<<sizeof(Base)<<"\n";
    cout<<"Size of Derived Class : "<<sizeof(Derived)<<"\n";*/

    Base *bp = NULL;
    bp = new Derived;  //dynamic memory allocation in CPP     //upcasting (Dynamic)

    //bp = (Derived * )malloc (size of (derived)) => dynamic using C langugae.
    
    //bp = new Base;

    //bp = &dobj;     // Upcasting

    bp -> fun();
    bp -> gun();
    bp -> sun();    
    bp -> run();    
    //bp -> mun();    

    return 0;
}