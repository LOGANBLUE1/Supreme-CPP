#include<iostream>
using namespace std;
class A{
    private:
    int x;

    public:
    A(int _x): x(_x) {}
    
    int getX() const { return x;}
    void setX(int _x) { x = _x;}

    friend class B;
    friend void print(const A &a);
};

class B{ //friend class
    public:
    void print(const A &a){
        
        cout << a.x <<endl;
    }
};

void print (const A &a){  //friend function
    cout << a.x <<endl;
}

int main()
{   
    A a(5);
    B b;
    b.print(a); 
    print(a);  //friend function

    return 0;
}