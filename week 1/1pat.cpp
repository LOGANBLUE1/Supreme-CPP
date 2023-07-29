#include<iostream>
using namespace std;
int main()
{  
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int space=n-row-1;space>=0;space--){
            cout<<" ";
        }
        for(int col=0;col<2*row+1;col++){
            if(col == 0 || col == 2*row){
                cout<<col/2+1;
            }
            else if(row == n-1 && col%2 == 0 ){
                  cout<<col/2+1;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}