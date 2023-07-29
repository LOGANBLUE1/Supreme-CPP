#include<iostream>
using namespace std;
class abc{
public:
    int x;
    int* y;

    abc(int _x,int _y ): x(_x), y(new int(_y)){}

    //default copy constructor - does shallow copy
    // abc(abc &obj){
    //     x = obj.x;
    //     y = obj.y;
    // }
    //Smart deep copy constructor
    abc(const abc &obj){
        x = obj.x;
        y = new int(*obj.y);
    }

    void print() const {
        printf("X: %d\nPTR y: %p\nContents of y (*y): %d\n\n",x,y,*y);
    }
};
int main()
{
    abc a(1,2);
    a.print();

    // abc b(a);
    abc b = a; // same
    b.print();
    return 0;
}