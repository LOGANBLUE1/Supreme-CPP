#include<iostream>
using namespace std;
int main()
{   int n;
    cin>>n;
    cout<<"*"<<endl;
    for(int i=0;i<n;i++){
        int cond = i <= n/2 ? 2*i : 2*(n-i-1);
         cout<<"* ";
        //for upper half
            for(int j=0;j<=cond;j++){
            //for upper growing
            if(j <= cond/2){
                cout<<j+1<<" ";
            }
            //for shrinking phase
            else{
                cout<<cond-j+1<<" ";
            }
        }
        cout<<"*"<<endl;
    }
    cout<<"*"<<endl;
    return 0;
}