#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;

        Base()
        {
            cout<<"Inside Base Constructor\n";
        }
        ~Base()
        {
            cout<<"Inside Base Destructor\n";
        }

        void Fun()
        {
            cout<<"Inside Base Fun\n";
        }
};

class Derived : public Base
{
    public:
        int X;
        int Y;

        Derived()
        {
            cout<<"Inside Derived Constructor\n";
        }
        ~Derived()
        {
            cout<<"Inside Derived Destructor\n";
        }
        void Gun()
        {
            cout<<"Inside Derived Gun\n";
        }
};

class Multilevel : public Derived
{
    public:
        int C;
        int D;

        Multilevel()
        {
            cout<<"Inside Multilevel Constructor\n\n";
        }
        ~Multilevel()
        {
            cout<<"Inside Multilevel Destructor\n";
        }
        void Sun()
        {
            cout<<"Inside Multilevel Sun\n\n";
        }
};

int main()
{
    /*Multilevel *ptr = NULL;
    
    ptr = new Multilevel;

    ptr -> Fun();
    ptr -> Gun();
    ptr -> Sun();
    */

    cout<<"Size of base :"<<sizeof(Base)<<"\n";
    cout<<"Size of derived :"<<sizeof(Derived)<<"\n";
    cout<<"Size of Multilevel :"<<sizeof(Multilevel)<<"\n\n";

    //delete ptr;

    Multilevel dobj;

    dobj.Fun();
    dobj.Gun();
    dobj.Sun();
    


    return 0;
}