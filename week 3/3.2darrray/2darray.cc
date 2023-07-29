#include<iostream>
using namespace std;
int main()
{   
     int arr[4][3];
     int row = 4,col =3;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            sum+= arr[j][i];
        }
    }
    cout<<sum<<endl;
    return 0;
}