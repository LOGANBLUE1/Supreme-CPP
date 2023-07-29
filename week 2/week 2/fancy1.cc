#include<iostream>
using namespace std;
int main()
{   
    int count =1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<4+n-i-1;j++){
            cout<<"*";
        }
        for(int k=0;k<=i;k++){
             cout<<count<<"*";
        }
        count++;
        for(int j=0;j<3+n-i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}