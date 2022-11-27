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

   Derived dobj;
   Base &bref = dobj; // Upcasting
   
   //bref is a refernce of type base referring to dobj  which is the object of derived class

    bref.fun();
    bref.gun();
    bref.sun();    
    bref.run();    
    //bp -> mun();    

    return 0;
}