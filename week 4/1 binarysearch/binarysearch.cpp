#include<iostream>
#include<algorithm>  //can be used for inbuild algorithms
using namespace std;

int binarysearch(int arr[],int size,int key){
    int start= 0;
    int end = size-1;

    int mid = start + (end-start)/2 ; //start + end exceeds int limit

    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
      //go to right waala part
      if(key>arr[mid]){
        start =mid+1;
      }  
      else{
        end = mid-1;
      }    
      mid = start + (end-start)/2;
    }
    return -1;
}

//for vector-> vector<int> arr{0,2,3,4,5,5};  for
int main()
{
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int evenindex = binarysearch(even,6,8);
    cout << "index of 8 is "<< evenindex << endl;

    int oddindex = binarysearch(odd,5,13);
    cout << "index of 13 is "<< oddindex << endl;

    return 0;
}