#include<iostream>

using namespace std;

class overloading
{
    public :
        //add@2ii
        int add(int a , int b)
        {
            cout<<"Addition of 2 integers \n";
            return a+b;
        }
        //add@2ff
       float add(float a , float b)
        {
            cout<<"Addition of 2 float \n";
            return a+b;
        } 
        //add@2dd
       double add(double a , double b)
        {
            cout<<"Addition of 2 double \n";
            return a+b;
        } 
        //add@3iii
       int add(int a , int b,int c)
        {
            cout<<"Addition of 3 integers \n";
            return a+b+c;
        } 
        //fun@2if
       void fun(int x ,float y)
       {} 
        //fun@2fi
       void fun(float x ,int y)
       {} 
};


int main()
{
    
    overloading obj;

    int i;
    float f;
    double d;

    obj.add(11,21);
    cout<<i<<"\n";
    
    obj.add(11,21,31);
    cout<<i<<"\n";
    
    obj.add(11.0f,21.98f);
    cout<<f<<"\n";

    obj.add(11.89,21.66);
    cout<<d<<"\n";


    return 0;
}