#include<iostream>
using namespace std;
int solve(int n,int x,int y,int z){
    if(n==0)
        return 0;
    
     int a = INT_MIN;// don't use 0 
    if(n-x >= 0)     a = solve(n-x,x,y,z) + 1;

     int b = INT_MIN;
    if(n-y >= 0)     b = solve(n-y,x,y,z) + 1;
    
     int c = INT_MIN;
    if(n-z >= 0)     c = solve(n-z,x,y,z) + 1;

    int ans = max(a,max(b,c));
    return ans;
}
//way 2
int solve2(int n,int x,int y,int z){
    if(n==0)
        return 0;
    if(n < 0)
        return INT_MIN;
    
     int a = solve(n-x,x,y,z) + 1;

     int b = solve(n-y,x,y,z) + 1;
    
     int c = solve(n-z,x,y,z) + 1;

    int ans = max(a,max(b,c));
    return ans;
}
int main()
{
    int ans = solve2(19,5,6,3);
    if(ans < 0) ans =0;

    cout<<"Max. no of sections can be cut is : "<<ans<<endl;
    return 0;
}