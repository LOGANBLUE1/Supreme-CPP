#include<iostream>
using namespace std;
void merge(int *arr,int s,int e){
    int mid = (s+e)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;
    //creating new arrays
    int *left = new int[len1];
    int *right = new int[len2];

    //copy values
    int k = s;
    for(int i=0;i<len1;i++){
        left[i] = arr[k++];
    }
    for(int j=0;j<len2;j++){
        right[j] = arr[k++];
    }
    // merging arrays
    int a=0,b=0;
    k=s;
    while( a < len1 && b < len2 ){
        if(left[a] <= right[b]){
            arr[k++] = left[a++];
        }
        else{
            arr[k++] = right[b++];
        }
    }
    while(a<len1){
        arr[k++]= left[a++];
    }
    while(b<len2){
        arr[k++]= right[b++];
    }
delete []left;
delete []right;
}
void mergesort(int *arr,int s,int e){
    //base case -> single element/invalid array
    if(s >= e)
        return;

     int mid = (s+e)/2;
     // for left part
    mergesort(arr,s,mid);
     //for right part
    mergesort(arr,mid+1,e);     

    merge(arr,s,e);  
}
int main()
{
    int arr[] = {18,5,13,2,12};
    mergesort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}