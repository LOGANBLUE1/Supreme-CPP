#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<2*n;i++){
        int temp = (i<n)? i : 2*n-i-1;
        for(int j=0;j<=temp;j++){
            cout<<"*";
        }
        for(int k=0;k<=2*(n-temp-1);k++){
            cout<<" ";
        }
        for(int j=0;j<=temp;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}