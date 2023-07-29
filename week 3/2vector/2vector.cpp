#include <iostream>
#include <vector>// have to use 
using namespace std;
int findunique(vector<int>arr){
    int a=0;
   for(int i=0;i< arr.size();i++){
       a = a^arr[i];
   }
   return a;
}
int main()
{
    // int n;
    // cin >> n;
    // vector<int> v(n);//can take input on runtime

    // vector<int> arr;
    // cout<<arr.size()<<endl;
    // cout<<arr.capacity()<<endl;

    // int a = (sizeof(arr)/sizeof(int));
    // cout<<a<<endl;

    // vector<int> drr(10,1);
    // cout<<drr.size()<<endl;
    // cout<<drr.capacity()<<endl;
    // for(int i=0;i<drr.size();i++){
    //     cout<<drr[i]<<" ";
    // }
    // cout<<endl;

    //    drr.push_back(4);
    //  cout<<drr.size()<<endl;
    // cout<<drr.capacity()<<endl;

    // for(int i=0;i<drr.size();i++){
    //     cout<<drr[i]<<" ";
    // }
    // cout<<endl;

    // drr.pop_back();
    // cout<<drr.size()<<endl;
    // cout<<drr.capacity()<<endl;

    // int a = 0 xor 2;//or 0^2
    // cout<<a<<endl;

    // int n;
    // cin>>n;
    // vector<int> arr(n);
    // for(int i=0;i<arr.size();i++){
    //     cin>>arr[i];
    // }
    // int num = findunique(arr);
    // cout<<num<<endl;

    // int  a[] ={1,2,3,4,5};
    // int b[] = {4,5,6,7};

   int t[] ={1,1,0,1,0,0,1,0,1};
    int start =0,end=8;
    while(start<end){
        while(t[start]==0 ){
            start++;
        }
        while(t[end]==1){
            end--;
        }
        if(start<end){
            swap(t[start],t[end]);
            }
    }  
    for(int i=0;i<9;i++){
        cout<<t[i]<<" ";
    }  
    cout<<endl;


    //  int start =0,end=8;
    // while(start<=end){
    //     if(t[start]==0 ){
    //         start++;
    //     }
    //     else{
    //         swap(t[start],t[end]);
    //         end--;
    //     }
    // } 
    //  for(int i=0;i<9;i++){
    //     cout<<t[i]<<" ";
    // }  
    // cout<<endl;
    return 0;
}