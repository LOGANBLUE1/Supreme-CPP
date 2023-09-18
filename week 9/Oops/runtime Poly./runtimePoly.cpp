#include<iostream>
using namespace std;
class Animal{
public:
    int age;
    int bodycount;
    string name;

    Animal(){
        cout<<"this is animal."<<endl;
    }
    virtual void Sleep(){
        cout<<"Sleeping animal"<<endl;
    }
    ~Animal(){
        cout<<"animal died."<<endl;
    }
}; 


class Dog:public Animal{
public:

    Dog(){
        cout<<"this is Dog."<<endl;
    }
    void Sleep(){
        cout<<"Sleeping dog"<<endl;
    }
    ~Dog(){
        cout<<"dog died."<<endl;
    }
};
int main(){

    // Dog*a = new Dog;

    // // Upcasting
    Animal* a = new Dog();//calls function of parent class
    a->Sleep(); // because of virtual it prints dog
    delete a;

    // Downcasting - error
    // Dog* b = (Dog*)new Animal();//calls sleep of dof because sleep of animal is virtual
    // b->Sleep();
    // delete b;

    return 0;
}