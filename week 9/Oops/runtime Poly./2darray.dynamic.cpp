#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;

    int col;
    cin>>col;

    //creation
    //   new int*[row];//no need of this line
    int** arr = new int* [row];//nX1 marix of addresses
    for(int i=0;i<row;i++){
        arr[i] = new int[col];//address is stored in arr[i]
    }

    //taking input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    //printing outout
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    //free memory
    for(int i=0;i<row;i++){  
        delete [] arr[i];
    }
    delete [] arr;//deleting address matrix

    return 0;
}