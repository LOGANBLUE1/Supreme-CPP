#include<iostream>
using namespace std;

class Animal{
public:
    int age;
    int bodyweight;
    string name;

    // Animal(){}

    Animal(string name,int bodyweight,int age) : 
        name(name),bodyweight(bodyweight),age(age){}
    
    void Sleep(){
        cout<<"Sleeping"<<endl;
    }

    Animal(Animal *a){
        cout<<"I am function 1---"<<endl;
        this->name = a->name;
        this->bodyweight = a->bodyweight;
        this->age = a->age;
    }

    Animal(const Animal& a) {
        cout<<"I am function 2---"<<endl;
        this->name = a.name;
        this->bodyweight = a.bodyweight * 2;
        this->age = a.age;
    }

};

int main()
{
//    Animal dog = Animal("tommy",2,7);// Animal dog("tommy" ,2,7) works the same
//    Animal* cat = new Animal("cat",1,4);

//     dog.setage(9);
//      dog.Call();
//      (*cat).Call();
    //  dog.Sleep();

    Animal* a = new Animal("derry",5,17);
    // a->Sleep();
    Animal b = *a;
    // Animal b = Animal(a);
    cout<<b.name<<" "<<b.bodyweight<<" "<<b.age<<endl;

    return 0;
}