#include<iostream>
using namespace std;
class abc{
public: 
     int x,y;

    static void print() {
        // cout<< x << " " << y <<endl;
        printf("I am in static %s\n",__FUNCTION__);
    }
};

// int abc::x;//necessary to initialise static member, before using it
// int abc::y;

int main()
{
    // abc obj1 = {1,2};
    // abc obj2 = {3,4};
    // obj1.print();
    // obj2.print();

    // abc obj1; // now x,y is static
    // obj1.x = 1;
    // obj1.y = 2;
    // abc obj2;
    // obj1.print();
    // obj2.x = 5;
    // obj2.y = 10;
    // obj1.print();
    // obj2.print();

    // abc obj1; // now print is static
    // abc::x = 1;
    // abc::y = 2;
    // abc obj2;
    // abc::print();
    // abc::x = 5;
    // abc::y = 10;
    // abc::print();
    // abc::print();

    abc obj1; // now print is static, x and y is non-static
    abc obj2;
    abc::print();
    obj1.x = 5;
    obj1.y = 10;
    abc::print();
    abc::print();
    cout<<"I am in static "<<__FUNCTION__<<endl;

    return 0;
}