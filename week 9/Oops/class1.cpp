#include<iostream>
using namespace std;

class Animal{
private:
    int age;
    int bodycount;
    string name;
public:
void setage(int age){
    this->age = age;
}
int getage(){
    return age;
}
void setbodycount(int bodycount){
    this->bodycount = bodycount;
}
int getbodycount(){
    return bodycount;
}
void setname(string name){
    this->name = name;
}
string getname(){
    return name;
}
void Call(){
    cout<<"this is "<<getname()<<" "<<getage()<<" years old."<<endl;
}
void Sleep(){
    cout<<"Sleeping"<<endl;
}
// Animal(string name,int bodycount,int age){
//     this->name = name;
//     this->bodycount = bodycount;
//     this->age = age;
// }

Animal(string name,int bodycount,int age) : name(name),bodycount(bodycount),age(age){}
};

int main()
{
//    Animal dog = Animal("tommy",2,7);// Animal dog("tommy" ,2,7) works the same
//    Animal* cat = new Animal("pussy",1,4);

//     dog.setage(9);
//      dog.Call();
//      (*cat).Call();
    //  dog.Sleep();
    Animal* a = new Animal("derry",5,17);
    a->Sleep();

    return 0;
}