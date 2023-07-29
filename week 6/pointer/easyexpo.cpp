#include<iostream>
using namespace std;
int easyexpo(int x,int n){
    int res=1;
    while(n>0){
        if(n&1){ //for finding odd number
            res =res*x;
        } 
        x = x*x;
        n >>= 1;   //n = n >> 1  ,  n /= 2;does half of n   
    }                          //if 2^5 => 2*(4^2)
    return res;
    }
   
int main()
{ 
     int a,b;
cout<<"enter number and power:"<<endl;
cin>>a>>b;
cout<<"Answer is "<<easyexpo(a,b)<<endl;
    return 0;
}
