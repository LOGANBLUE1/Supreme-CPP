#include<iostream>
#include<vector>
using namespace std;
int pivot(vector<int>arr){
   int s=0,e=arr.size()-1;
   int mid = s+(e-s)/2;
   while(s<=e){
    //cornor cases
    // if(mid+1 < arr.size() && arr[mid] > arr[mid+1]){
    //     return mid;
    // }
    // if(mid-1 >= s && arr[mid-1] > arr[mid]){
    //     return mid-1;
    // }
    if(mid +1 < arr.size() && mid >= 0 && arr[mid] > arr[mid+1]){
        return mid;
    }

    if(arr[s]> arr[mid]){
        e = mid-1;
    }
    else{
        s = mid+1;
    }
    mid= s + (e-s)/2;
   }
   return -1;
}
int main()
{ 
    vector<int> arr;
    arr.push_back(9);
    arr.push_back(10);//this is pivot element
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(6);
    arr.push_back(8);
    int ans = pivot(arr);
    cout<<"index -> "<<ans<<" value -> "<<arr[ans]<<endl;
    return 0;
}