#include<iostream>
#include<unordered_map>
using namespace std;
int firstRepeat(int* a,int n){
 unordered_map<int,int> m;
 for(int i=0;i<n;i++){
    m[a[i]]++;
 }
 for(int i=0;i<n;i++){
    if(m[a[i]] > 1){
        return i;
    }
 }
 return -1;
}
int main()
{
    int arr[] = {2,3,5,6,5,3,8};
    int rep = firstRepeat(arr,7);
    cout<<rep<<endl;//first index of repeating element
    return 0;
}