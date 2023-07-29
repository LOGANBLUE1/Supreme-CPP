#include<iostream>
using namespace std;
int solve(int* arr,int target,int& size){
    if(target == 0)
     return 0;
    if(target < 0)
        return INT_MAX;

    int mini = INT_MAX;
    for(int i=0;i<size;i++){
        int ans = solve(arr,target-arr[i],size);
        if(ans != INT_MAX)
          mini = min(mini,ans+1);
    }
    return mini;
}
int main()
{
    int arr[] = {1,2};
    int target = 5;
    int size = 2;
    int ans = solve(arr,target,size);
    cout<<"Min. mo of coins required is : "<<ans<<endl;
     
    return 0;
}