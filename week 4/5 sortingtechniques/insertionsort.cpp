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

void insertionSort(vector<int>&arr, int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Move elements of arr[0..i-1], that are
        // greater than key, to one position ahead
        // of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    vector<int>arr;
    arr.push_back(12);
    arr.push_back(11);
    arr.push_back(13);
    arr.push_back(5);
    arr.push_back(6);
    int n = arr.size();
    insertionSort(arr, n);
    printarr(arr);

    return 0;
}