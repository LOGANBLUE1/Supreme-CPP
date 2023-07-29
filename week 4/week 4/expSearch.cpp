#include<iostream>
using namespace std;
int bs(int* arr,int s,int e,int& k){
    while(s <= e){
        int mid = s+(e-s)/2;
        if(arr[mid] == k){
            return mid;
        }
        else if(k > arr[mid]){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return -1;
}
int expSearch(int arr[],int n,int k){
    

    if (arr[0] == k)  return 0;

    int i=1;
    while(i < n && arr[i] < k ){
        i <<= 1; 
    }
     return bs(arr,i/2,min(i,n-1),k);
}
int main()
{
    int exp[] = {1,2,4,5,6,8,12,15,18};

    int ans = expSearch(exp,8,12);
    cout<<ans<<" "<<exp[ans]<<endl;

    return 0;
}