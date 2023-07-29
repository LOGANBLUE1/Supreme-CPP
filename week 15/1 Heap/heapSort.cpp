#include<iostream>
using namespace std;

void heapify(int arr[],int n,int i){
        int index = i;
        int leftIndex = 2*i;
        int rightIndex = 2*i + 1;

        int largest = index;

        if(leftIndex <= n && arr[largest] < arr[leftIndex])
            largest = leftIndex;
        if(rightIndex <= n && arr[largest] < arr[rightIndex])
            largest = rightIndex;

        if(index != largest){
            // if left or right child is greater than root
            swap(arr[index],arr[largest]);
            index = largest;
            heapify(arr,n,index);
        }
}

void buildHeap(int arr[],int n){
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
}

void heapSort(int arr[],int n){

    while(n != 1){
        swap(arr[1],arr[n--]);//seperating max elements in the last

        //place the value at root at its right position
        heapify(arr,n,1);//reducing size
    }
}

int main()
{

    int arr[] = {-1,12,56,43,6,78,87,5,44,3,23,32};
    buildHeap(arr,11);
    cout<<"printing the heap :"<<endl;
    for(int i=0;i<=11;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    heapSort(arr,11);
    cout<<"printing the sorted array :"<<endl;
    for(int i=0;i<=11;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;


    return 0;
}