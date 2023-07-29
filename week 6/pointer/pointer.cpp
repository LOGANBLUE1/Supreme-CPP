#include<iostream>
using namespace std;
int main()
{ 
    int a =5;
    int bat =a;
    cout<<"a before : "<<a<<endl;
    bat++;
    cout<<"a after : "<<a<<endl; //pass by value
    
    int num =5;
    int *p = &num;
    cout<<"num " <<*p <<endl;
    cout<<"addr "<< p <<endl;
    (*p)++;//remember to keep paranthesis
    cout<<"num "<<num<<endl;  //this is pass by reference

    int arr[7]={2,8,4,3,6,8,7};
    cout<<arr<<endl;//address of first element of array
    cout<<&arr[0]<<endl;
    int *ptrs = arr;
    // arr = arr +1;  - invalid operation
    // ptrs = ptrs +1;   - valid operation now ptrs will point to next location 
    
    cout<<"14%(-5) = " <<14%(-5)<<endl;
     char ch[6] = "abcde";
     char *ptr = &ch[0];//datatype is same as given above(char in this case)
     cout<<ptr<<endl;//implementation is different in case of characrer array

    // null pointer
    //  int* ptr = 0;
    //  cout<<*ptr<<endl;

    return 0;
}