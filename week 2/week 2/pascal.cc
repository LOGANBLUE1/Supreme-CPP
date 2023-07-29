#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int s=0;s<=n-i;s++){
            cout<<" ";
        }
        int temp =1;//becomes 1 after every row
        for(int j=1;j<=i;j++){
                cout<<temp<<" ";
                temp = temp*(i-j)/j ;
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}