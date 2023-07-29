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

void bubble_sort(vector<int>&arr){
    int n = arr.size();

    for(int round=1;round<n;round++){// for n-1 rounds
             bool swapped = false;
        for(int j=0;j<n - round;j++){
           
            if(arr[j+1] < arr[j]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}// Time - O(n^2)  Space - O(1)

int main()
{
     vector<int>zee;

     zee.push_back(5);
    zee.push_back(4);
    zee.push_back(3);
    zee.push_back(2);
    zee.push_back(1);

    printarr(zee);
    bubble_sort(zee);
    printarr(zee);

    return 0;
}