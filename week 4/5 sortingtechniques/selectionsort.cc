#include<iostream>
#include<vector>
using namespace std;

void printarr(vector<int>arr){
    int size = arr.size();
   for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
}

void selection_sort(vector<int>&arr){//use & to make change in initial vector
    int size = arr.size();
    for(int i=0;i<size-1;i++){
        int minindex = i;
        for(int j=i+1;j<size;j++){
           if(arr[j] < arr[minindex]){
             minindex = j;
           }
        }
        swap(arr[i],arr[minindex]);
    } 
}// Time - O(n^2)  Space - O(1)

int main()
{ 
    vector<int> zee;
    zee.push_back(5);
    zee.push_back(4);
    zee.push_back(3);
    zee.push_back(2);
    zee.push_back(1);

    printarr(zee);
    selection_sort(zee);
    printarr(zee);

    return 0;
}