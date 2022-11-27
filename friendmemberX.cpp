#include<iostream>
using namespace std;

class Marvellous
{
   public: 
    void fun();
    void gun();
    
};

class Demo
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Demo()
        {
            i = 10;
            j = 20;
            k = 30;
        }            
    friend void Marvellous::fun();
    friend void Marvellous::gun();
};

void Marvellous::fun()    
{

    Demo obj;
    cout<<"Value of I :"<<obj.i<<"\n";
    cout<<"Value of J :"<<obj.j<<"\n";
    cout<<"Value of K :"<<obj.k<<"\n";
    }

void Marvellous::gun()    
{

    Demo obj;
    cout<<"Value of I :"<<obj.i<<"\n";
    cout<<"Value of J :"<<obj.j<<"\n";
    cout<<"Value of K :"<<obj.k<<"\n";
    }    

int main()
{
    Marvellous mobj;

    mobj.fun();
    mobj.gun();

    //xfun();

    return 0;
}