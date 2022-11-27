//FunctionCallingMechanism
#include<iostream>
using namespace std;
//Call By Value
void fun(int no)
{
    cout<<"Inside call by value :" <<no<<"\n";
    no++; 
}
//Call By address
void gun(int *p)
{
    cout<<"Inside call by Adress : "<<*p<<"\n";
    (*p)++;
}
//Call By Reference
void sun(int &ref)
{
    cout<<"Inside call by Reference:"<<ref<<"\n";
    ref++;
}

int main()
{
    int i = 10;
    int j = 10;
    int k = 10;

    fun(i);  //fun(10)       //Function Call
    cout<<i<<"\n";
    gun(&j);    //gun(200)
    cout<<j<<"\n";
    sun(k);     //sun(k)
    cout<<k<<"\n";

    return 0;
}