#include<iostream>
using namespace std;
int main()
{  
int i=5;
int*p = &i;
int**p2 = &p;
cout<<p<<" "<<&i<<" "<<*p2<<endl;//address of i
cout<<i<<" "<<*p<<" "<<**p2<<endl;// i
cout<<p2<<" "<<&p<<endl;// address of p
cout<<&p2<<endl;//address of p2

    return 0;
}