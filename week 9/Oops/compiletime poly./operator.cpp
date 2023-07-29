#include<iostream>
using namespace std;
class APJ{
public:
int a;
int b;

int add(){
    return a+b;
}
void operator + (APJ &obj){
    int value1 = this->a; // object before operator
    int value2 = obj.a; //object passed (after)
    cout<<"Output : "<< value1 - value2 <<endl;
}
void operator () (){
   cout << "Main bracket hun "<<this->a<<endl;
}
};
int main()
{   APJ obj1,obj2;
    obj1.a = 4;
    obj2.a = 6;
    obj1 + obj2;
   obj1();

    return 0;
}