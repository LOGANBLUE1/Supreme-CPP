#include<iostream>
using namespace std;
class Base{
public:
    Base(){
        cout<<"Base Ctor"<<endl;
    }
    virtual ~Base(){
        cout<<"Base Dtor"<<endl;
    }
};
class Derived: public Base{
public:
    int *a;
    Derived(){
        a = new int[1000];
        cout<<"Derived Ctor"<<endl;
    }
    ~Derived(){
        delete[] a;
        cout<<"Derived Dtor"<<endl;
    }
};
int main()
{
    // No constructor cannot be virtual but we destructor can be virtual(should be virtual to prevent memory leak)
    Base* b = new Derived();
    delete b;
    return 0;
}