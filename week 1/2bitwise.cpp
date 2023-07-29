#include<iostream>
using namespace std;
int main()
{     bool a = true;
     bool b = false;
     cout<<(a==b)<<endl;
     cout<<(a^b)<<endl;
     cout<<(2&3)<<endl;//do bitwise operaation on 10 and 11
     //left shift and right shift
     // <<     >> 
     int x = 5;
     cout<<(++x)*(++x)*(++x)<<endl;
    return 0;
}