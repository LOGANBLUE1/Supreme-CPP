#include<iostream>
using namespace std;
//nearly sorted means a number that should be present at i can be found at i,i-1,i+1
int binarysearch(int arr[],int size,int key){
    int start= 0;
    int end = size-1;

    int mid = start + (end-start)/2 ; //start + end exceeds int limit

    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid+1] == key){
            return mid+1;
        }
        if(arr[mid-1] == key){
            return mid-1;
        }

      //go to right waala part
      if(key>arr[mid]){
        start =mid+2;
      }  
      else{
        end = mid-2;
      }    
      mid = start + (end-start)/2;
    }
    return -1;
}
int main()
{  
 
    return 0;
}