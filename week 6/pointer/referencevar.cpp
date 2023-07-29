#include<iostream>
using namespace std;
void update1(int n){
    n = n+1;
}
void update2(int & n){
    n = n+1;
}
int main()
{   int i =5;
 int&j =i;
 cout<<j<<endl;

 int num =2;
 cout<<"before "<<num<<endl;
 update1(num);//value is passed
 cout<<"after "<<num<<endl;

 cout<<"before "<<num<<endl;
 update2(num);//reference was passed in this one
 cout<<"after "<<num<<endl;

    return 0;
}