#include<iostream>
using namespace std;
class A{
public:
   void func(){
    cout<<"I am A"<<endl;
   }
};
class B{
public:
   void func(){
    cout<<"I am B"<<endl;
   }
};
class C:public A,public B {
public:
   
};

int main(){   
   C obj;
   // obj.func();   //-- comes under ambiguity in inheritence
   // obj.A::func();//ambiguity resolved
   obj.B::func();

    return 0;
}