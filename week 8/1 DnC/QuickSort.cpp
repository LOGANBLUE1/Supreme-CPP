#include<iostream>
using namespace std;

int partition(int* arr,int s,int e){
    int pivot = arr[s];
    //finding correct position
    int count = 0;
    for(int i=s+1;i<=e;i++){
        if(pivot >= arr[i])//point 1 upperbound
            count++;
    }
    //placing at correct position
    int pivotIndex = s+count;
    swap(arr[s],arr[pivotIndex]);
    int i =s,j =e;
    while( i<pivotIndex && j>pivotIndex ){
        while(arr[i] <= pivot)//point 1
            i++;
        while(arr[j] > pivot)
            j--;
        if( i<pivotIndex && j>pivotIndex ){//for continuous checking of condition
            swap(arr[i],arr[j]);
        }
    }
    return pivotIndex;
}
void quickSort(int* arr,int s,int e){
    //base case
    if(s >= e)  return;

    int p = partition(arr,s,e);

    quickSort(arr,s,p-1);

    quickSort(arr,p+1,e);
}
int main()
{
    int arr[] = {2,17,5,5,5,5,9,11,4};
     int n =sizeof(arr)/sizeof(int);
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}