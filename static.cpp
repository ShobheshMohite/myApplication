#include<iostream>

using namespace std;

class demo
{
    public:
        int i;
        int j;
        static int k;
        static int L;

    demo()
    {
        i = 0;
        j = 0;
    }

    demo(int a,int b)
    {
        i = a;
        j = b;
    }

    void fun()
    {
        cout<<"Inside Non Static\n";
        cout<<"value of i : "<<this -> i <<"\n";
        cout<<"value of i : "<<this -> j <<"\n";
        cout<<"value of k : "<< k <<"\n";
        cout<<"value of l : "<<L<<"\n";
    }
    static void gun()
    {
        cout<<"Inside Static\n";
        cout<<"value of k : "<< k <<"\n";
        cout<<"value of l : "<< L <<"\n";
    }
};

int demo::k = 0;
int demo::L = 0;
int main()
{
    cout<<"Inside Main\n";
    cout<<"value of k : "<<demo::k<<"\n" ;
    cout<<"value of L : "<<demo::L<<"\n" ;
    demo::gun();
    demo obj1(11,12);
    demo obj2(110,120);
    demo obj3;

    cout<<"value of i in obj1: "<< obj1.i <<"\n";
    cout<<"value of j in obj1: "<< obj1.j <<"\n";
    
    cout<<"value of i in obj2: "<< obj2.i <<"\n";
    cout<<"value of j in obj2: "<< obj2.j <<"\n";
   
    obj1.fun();
    obj2.fun();

    obj1.gun();
    
    return 0;

}