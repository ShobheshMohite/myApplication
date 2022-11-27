#include<iostream>

using namespace std;

int main()
{
    int x = 10;
    int &u = x;

    x = ++u;
    u = x++;

    cout<<x<<","<<u;

    return 0;
    }