#include<iostream>
using namespace std;
void solve(int arr[],int i,int sum,int& maxi){
    int size = 5;
//base case
    if(i >= size){
        //maxi update
        maxi = max(sum,maxi);
        //checks with all the sum possible and max sum will be maxi
        return;
    }
//include 
solve(arr,i+2,sum+arr[i],maxi);
//exclude
solve(arr,i+1,sum,maxi);

}
int main()
{
    int arr[] = {2,1,3,9,4};//it will take 2.9
    int sum = 0;
    int maxi = 0;
    int i = 0;
    solve(arr,i,sum,maxi);
    cout<<maxi<<endl;
    return 0;
}