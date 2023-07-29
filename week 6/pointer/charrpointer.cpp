#include<iostream>
using namespace std;
int main()
{
    char name[9] = "sherBano";
    char*c = name;   // or char *c = &name[0]
     cout<<(c[0]);
    cout<<name<<endl;
    cout<<&name<<endl;
    cout<<*(name + 3)<<endl;
    cout<<c<<endl;
    cout<<c+2<<endl;
    cout<<&c<<endl;

    return 0;
}