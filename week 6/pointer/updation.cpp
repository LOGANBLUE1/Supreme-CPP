#include<iostream>
using namespace std;
void util1(int * ptr){
    ptr = ptr + 1;
}
void util2(int * ptr){
    *ptr = *ptr + 1;
}
int main()
{ 
    int a =5;
    int *p = &a;
    int** q = &p;

    cout<<*p<<" "<<p<<" "<<&p<<endl;
    util1(p);
    cout<<*p<<" "<<p<<" "<<&p<<endl;
    util2(p);
    cout<<*p<<" "<<p<<" "<<&p<<endl;


    return 0;
}