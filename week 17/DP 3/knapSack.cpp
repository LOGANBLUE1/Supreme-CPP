#include<iostream>
#include<vector>
using namespace std;
// int solveRec(int weight[],int value[],int index,int capacity){
//     if(index == 0){
//         if(weight[0] <= capacity)
//             return value[0];
//         else
//             return 0;
//     }

//     int include = 0;
//     if(weight[index] <= capacity)
//         include = value[index] + solveRec(weight, value, index-1, capacity-value[index]);
//     int exclude = 0 + solveRec(weight, value, index-1, capacity);

//     return max(include,exclude);
// }

int solveMem(int weight[],int value[],int index,int capacity,vector<vector<int> >&dp){
    if(index == 0){
        if(weight[0] <= capacity)
            return value[0];
        else
            return 0;
    }
    if(dp[index][capacity] != -1)
        return dp[index][capacity];

    int include = 0;
    if(weight[index] <= capacity)
        include = value[index] + solveMem(weight, value, index-1, capacity-value[index], dp);
    int exclude = 0 + solveMem(weight, value, index-1, capacity, dp);
    dp[index][capacity] = max(include,exclude);

    return dp[index][capacity];
}

int solveTab(int weight[],int value[],int n,int capacity){
    vector<vector<int> >dp(n,vector<int>(capacity+1,0));

    for(int i = 0;i <= capacity;i++){
        if()
    }
}

int main()
{
    int weight[] = {4,5,1};
    int value[] = {1,2,3};
    int capacity = 4;
    int n = 3;
    // int ans = solveRec(weight,value,n-1,capacity);

    // vector<vector<int> >dp(n,vector<int>(capacity+1,-1));
    // int ans = solveMem(weight,value,n-1,capacity,dp);

    int ans = solveTab(weight,value,n-1,capacity);

    cout<<"Ans is -> "<<ans<<endl;
    return 0;
}