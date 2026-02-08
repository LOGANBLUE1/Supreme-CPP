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
    BoxFactory() : count(0) {}
    Box getBox(int _w){
        ++count;
        return Box(_w);
    }
    int getCount(){
        return this->count;
    }
};

int main()
{
    BoxFactory *bfact = new BoxFactory();
    Box box = bfact->getBox(5);
    Box box2 = bfact->getBox(10);
    cout << bfact->getCount()<<endl;

    return 0;
}