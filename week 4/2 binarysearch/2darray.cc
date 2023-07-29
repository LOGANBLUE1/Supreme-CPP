#include<iostream>
using namespace std;
bool binary(int arr[][4],int row,int col,int target){
    int s=0;
    int e = row*col -1;
    int mid = s +(e-s)/2;
    while(e>=s){
        int rowindex = mid/col;
        int colindex = mid%col;
        if(arr[rowindex][colindex] == target){
            cout<<"Found at : "<<rowindex<<" "<<colindex<<endl;
            return true;
        }
        else if(arr[rowindex][colindex] < target){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return false;
}
int main()
{
    int arr[5][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    bool ans = binary(arr,5,4,17);
     cout<<ans<<endl;
    return 0;
}