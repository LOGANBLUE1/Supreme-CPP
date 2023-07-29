#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        // if(arr[mid]==key){
        //     ans =mid;//this is different step from binary search
        //     e=mid-1;
        // }
        if(arr[mid]>=key){
            e=mid-1;
            ans = mid;
        }
        else if(arr[mid]<key){
           s=mid+1;
        }
        mid = s +(e-s)/2;

    }
    return ans;
}
int lastocc(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        // if(arr[mid]==key){
        //     ans =mid;//this is different step from binary search
        //     s=mid+1;
        // }
        if(arr[mid]<=key){
           s=mid+1;
            ans = mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        mid = s +(e-s)/2;

    }
    return ans;
}

int main()
{   int even[10] ={1,2,2,3,3,3,3,5,6,7};
    cout << "first occurance of 3 is at index: "<<firstocc(even,10,3)<<endl;
    cout << "last occurance of 3 is at index: "<<lastocc(even,10,3)<<endl;
    return 0;
}