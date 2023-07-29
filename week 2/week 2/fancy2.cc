#include<iostream>
using namespace std;
int main()
{   
    int n;//take n equal to 4
    cin>>n;
    int count=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<count;
            count++;
            if(j<i){
                cout<<"*";
            }
        }
        cout<<endl;
    }//here count is 11
    int temp = count -n;
    for(int i=0;i<n;i++){
        int k = temp;
        for(int j=0;j<n-i;j++){
            cout<<k;
            k++;
            if(j<n-i-1){
                cout<<"*";
            }
        }
        temp = temp - (n-i-1);
        cout<<endl;
    }
    cout<<endl;
    return 0;
}