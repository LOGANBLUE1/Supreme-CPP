#include<iostream>
using namespace std;

int add(int x,int y);

int main(){  
    //function(int x,int a=0,int b=1){} -> right
    //function(int a=0,int b=1,int x){} -> wrong
//   int a=5,b=6,c,d;
//   c = a,b;
//   d=(a,b);
//   cout<<c<<" "<<d<<endl;//result is 5 6

// if(~0==1){
// cout<<"yes";
// }
// else{
//     cout<<"no";
// }

// int a = 10,b=5,c=5,d;
// d = b+c == a;
// cout<<d<<endl;//returns 1/0 ==1

// int a=10,b=5,c=3;
//  b |= !a;
//  c = !!a;
//  cout<<b<<" "<<c;
int a=6,b= -6;
 int d = a || b;//bitwise
 int e = 8 | 8;
 int f = a && b;
 int g = a & b;

 cout<<d<<e<<f<<g<<endl;
}

