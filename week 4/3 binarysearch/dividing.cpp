#include<iostream>
using namespace std;
int solve(int dividend,int divisor){
    int s = 0 ,  e = dividend;
    int mid = (s + e)/2;
    int ans = 0;
    while(s <= e){
        if(mid*divisor == dividend ){
            return mid;
        }
        else if( mid*divisor > dividend ){
            e = mid -1;
        }
        else{
            ans = mid;
            s = mid + 1;
        }
    }
    return ans;
}
int main()
{    
    
    int answer = -12;
    cout<<"Answer is : "<<abs(answer)<<endl;//abs is absolute -  12 is abs of -12
    return 0;
}