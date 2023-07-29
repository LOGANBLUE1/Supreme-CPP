#include<iostream>
using namespace std;
bool findelement(int key,int row,int col,int arr[][3]){
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(key == arr[i][j]){
                return true;
            }
        }
    }
    return false;
}
int main()
{
       int arr[4][3];
     int row = 4,col =3;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    return 0;
}