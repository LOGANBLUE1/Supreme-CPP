#include<iostream>
using namespace std;
int main()
{
    //const with pointers
    // 1
    // const int a = 5;//initialised 
    // a = 10;//cannot rassign

    // 2 const data ,non constant pointer
    const int* a = new int(2);          //instialising with some value
    // int const* a = new int(2); // same
    // *a = 10; //cannot change value
    cout<<*a<<endl;
    int b =10;
    a = &b;//but pointer can be reassigned
    cout<<*a<<endl;

    // 3 const pointer
    // int *const a = new int(2);
    // *a = 10;
    // // int b = 10;
    // // a = &b;  pointer cannot be reassigned
    // cout<<*a<<endl;

    // 4 const data const pointer - nothing can be reassigned
    // int const * const a = new int(2);
    // cout<<*a<<endl;


    return 0;
}