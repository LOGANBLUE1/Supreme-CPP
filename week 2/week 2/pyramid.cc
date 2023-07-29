#include<iostream>
using namespace std;
int main()
{  
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        //for spaces
        for(int sp=0;sp<n-1-i;sp++){
               cout<<" ";
        }
        //for first triangle
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
        //for second triangle
        for(int k=0;k<i;k++){
            cout<<i-k;
        }
        
        cout<<endl;
    }
    cout<<endl;
    return 0;
}