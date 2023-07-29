#include<iostream>
using namespace std;

int x = 10;
int main()
{
    x = 15;//global
    int x  = 20;
    cout<<x<<endl;//local x
    cout<<::x<<endl;//global x
    return 0;
}