#include<iostream>
using namespace std;
int max(int arr[],int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;

    while(e>s){
        
        if(arr[mid]< arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;//check it again if you dont understand
        }
        mid =s+(e-s)/2;
    }
    return s;
}
int main()
{  
    int trek[8] ={0,2,4,6,9,4,3,1};
cout<< "peak element of mountain array is : "<< trek[max(trek,8)] <<endl;
    return 0;
}