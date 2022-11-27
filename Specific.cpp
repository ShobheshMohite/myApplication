#include<iostream>

using namespace std;

int Addi(int i , int j)
{
    int Ans = 0;
    Ans = i + j;
    return Ans;
}

float Addf(float i , float j)
{
    float Ans = 0;
    Ans = i + j;
    return Ans;
}

int main()
{

    int a = 11,b = 11,iRet = 0;
    float x = 90.0f ,y = 67.98f ,fret = 0.0f;

    iRet = Addi(a,b);
    fret = Addf(x,y);

    cout<<"Addition Of Integers: "<<iRet<<"\n";
    cout<<"Addition Of Float: "<<fret<<"\n";


    return 0;
}
