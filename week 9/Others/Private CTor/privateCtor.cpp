#include<iostream>
using namespace std;

class Box{
    int width;
    //ctor
    Box(int _w) : width(_w){}

public:
    int getWidth() const {
        return width;
    }
    void setWidth(int _w){
        width = _w;
    }
    friend class BoxFactory;
};

class BoxFactory{
    int count;

    public:
    Box getBox(int _w){
        ++count;
        return Box(_w);
    }
};

int main()
{
    BoxFactory bfact;
    Box box = bfact.getBox(5);
    cout << box.getWidth()<<endl;

    return 0;
}