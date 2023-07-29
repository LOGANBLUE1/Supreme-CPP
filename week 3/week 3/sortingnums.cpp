#include<iostream>
using namespace std;
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sort(int arrs[],int size){
    int s=0,e=size-1;
    while(s<=e){
        if(arrs[s] < 0) s++;

        else if(arrs[e] > 0) e--;

        else   swap(arrs[s],arrs[e]);
    }
}
int main()
{ 
    int arr[] = {5,-2,4,6,-1,8,2,-9};
    print(arr,8);
    sort(arr,8);
    print(arr,8);
    return 0;
}