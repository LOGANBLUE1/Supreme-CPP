#include<iostream>
using namespace std;

int sqroot(int n){
    int s=0,e=n;
    int mid = s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        int square = mid*mid;
        if(square==n){
            return mid;
        }
        else if(square<n){
            s=mid+1;
            ans=mid;
        }
        else  e=mid-1;

        mid=s+(e-s)/2;
    }
    return ans;
}
double morePrecision(int n,int precision,int tempSol){
    double factor= 1;
    double ans = tempSol;
    
    for(int i=0;i<precision;i++){
        factor = factor/10;
        
        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}

int main(){
   int n;
   cout<<"Enter the value of n :"<<endl;
   cin>>n;

cout<<"Ans is "<<sqroot(n)<<endl;

int tempSol = sqroot(n);
cout<<"Answer is => "<< morePrecision(n,4,tempSol)<<endl;
    return 0;
}
