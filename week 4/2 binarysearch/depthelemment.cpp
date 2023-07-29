#include<iostream>
using namespace std;
int pivot(int arr[],int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;

    while(e>s){
        
        if(arr[mid]> arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid =s+(e-s)/2;
    }
    return e;//pivot element in a rotATED ARRAY(dip element)
}
int main()
{  int arr[] = {8,7,3,2,1,2,3,4,5};
cout<< "pivot element of array is :"<< arr[pivot(arr,9)] <<endl;
    return 0;
}