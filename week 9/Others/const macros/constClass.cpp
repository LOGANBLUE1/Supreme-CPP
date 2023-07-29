#include<iostream>
using namespace std;

class abc{
    int x;
    int *y;
    const int z;

public:
    abc(){
        x = 0;
        y = new int(0);
    }
    // abc(int _x,int _y,int _z= 0){// default value
    //     x = _x;
    //     y = new int(_y);
    //     z = _z;
    // }

    // initialisation list - we can initialise const variable(z )
    abc(int _x,int _y,int _z =0): x(_x),y(new int(_y)),z(_z){}//same as above

    int getX() const {
        return this->x;
    }
    void setX(int x){
        this->x = x;
    }
    int getY() const {
        return *y;
    }
    void setY(int _y){
        *y  = _y;
    }
    int getZ() const {
        return this->z;
    }
};
void printABC(const abc &a){//should access only const function
    cout<<a.getX() <<" "<<a.getY() <<" "<<a.getZ()<<endl;
}

int main()
{
    abc a(1,2);
    // cout<<a.getX()<<endl;
    // cout<<a.getY()<<endl;
    printABC(a);
    return 0;
}