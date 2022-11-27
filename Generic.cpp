#include<iostream>

using namespace std;

template<class T>

T Add(T i , T j)
{
    T Ans;
    Ans = i + j;
    return Ans;
}

int main()
{

    int a = 11,b = 11,iRet = 0;
    float x = 90.0f ,y = 67.98f ,fret = 0.0f;
    double i = 90.32 ,j = 65.9 ,dRet = 0.0;
    iRet = Add(a,b);
    fret = Add(x,y);
    dRet = Add(i,j);

    cout<<"Addition Of Integers: "<<iRet<<"\n";
    cout<<"Addition Of Float: "<<fret<<"\n";
    cout<<"Addition Of Double: "<<dRet<<"\n";


    return 0;
}
