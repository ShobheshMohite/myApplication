#include<iostream>
using namespace std;

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
    friend void fun();
};

void fun()
{
    Demo obj;
    cout<<"Value of I :"<<obj.i<<"\n";
    cout<<"Value of J :"<<obj.j<<"\n";
    cout<<"Value of K :"<<obj.k<<"\n";

}

int main()
{
    fun();

    return 0;
}