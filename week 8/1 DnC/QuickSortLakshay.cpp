#include<iostream>
using namespace std;

int partition(int* arr,int s,int e){
    int pivot = e;
    int i =s-1,j =s;
    while( j <= pivot ){
        if(arr[j] < arr[pivot]){
            swap(arr[++i],arr[j]);
        }
        j++;
    }
    swap(arr[++i],arr[pivot]);
    return i;
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