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
}; 


class Dog:public Animal{
    public:

    Dog(){
    cout<<"this is Dog."<<endl;
}
    void Sleep(){
    cout<<"Sleeping dog"<<endl;
}
};
int main()
{  
    // //  Dog*a = new Dog;

    // // Upcasting
    // Animal* a = new Dog();//calls function of parent class
    // a->Sleep(); // because of virtual it prints dog

    //Downcasting - error
    // Dog* b = (Dog*)new Animal();
    // b->Sleep();

    // Dog *a = new Dog;

    return 0;
}