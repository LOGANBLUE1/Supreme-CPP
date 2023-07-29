#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>&arr){
    int  s =0, e = arr.size()-1;
    int mid = s + (e-s)/2;

    while(s <= e){
        if(s == e){
            return s;
        }

        if(mid%2 == 0){
            if(arr[mid] == arr[mid+1]){
                s = mid+2;  //same
            }
            else{
                e = mid;
            }
        }
        else{
            if(arr[mid] == arr[mid-1]){
                s = mid +1;  //same
            }
            else{
                e = mid - 1;
            }
        }
        mid = s +( e-s )/2;
    }
    return -1;
}

int main(){

    vector<int>arr;
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(3);
    arr.push_back(6);
    arr.push_back(7);
    arr.push_back(7);

    int ans = solve(arr);
    cout<<"Index of odd element is : "<<ans;
    cout<<" Ans is -> "<<arr[ans]<<endl;

    return 0;
}