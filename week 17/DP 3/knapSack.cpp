#include<iostream>
#include<vector>
using namespace std;
int solveRec(int weight[],int value[],int index,int capacity){
    if(index == 0){
        if(weight[0] <= capacity)
            return value[0];
        else
            return 0;
    }

    int include = 0;
    if(weight[index] <= capacity)
        include = value[index] + solveRec(weight, value, index-1, capacity-weight[index]);
    int exclude = 0 + solveRec(weight, value, index-1, capacity);

    return max(include,exclude);
}

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
        include = value[index] + solveMem(weight, value, index-1, capacity-weight[index], dp);
    int exclude = 0 + solveMem(weight, value, index-1, capacity, dp);
    dp[index][capacity] = max(include,exclude);

    return dp[index][capacity];
}

int solveTab(int weight[],int value[],int n,int capacity){
    vector<vector<int> >dp(n+1,vector<int>(capacity+1,0));

    for(int wt = weight[0];wt <= capacity;wt++){
        if(weight[0] <= capacity){
            dp[0][wt] = value[0];
        }
        else{
            dp[0][wt] = 0;
        }
    }

    for(int index=1; index<=n; index++){
        
        for(int wt= 0;wt<=capacity;wt++){
            int include = 0;
                if(weight[index] <= wt)
                    include = value[index] + dp[index-1][wt-weight[index]];
            int exclude = 0 + dp[index-1][wt];
            dp[index][wt] = max(include,exclude);
        }
    }
    return dp[n][capacity];//n is already sent size-1 by function
}

int spaceOptimized(int weight[],int value[],int n,int capacity){
    vector<int>curr(capacity+1,0);
    vector<int>prev(capacity+1,0);

    for(int wt = weight[0];wt <= capacity;wt++){
        if(weight[0] <= capacity){
            prev[wt] = value[0];
        }
        else{
            prev[wt] = 0;
        }
    }

    for(int index=1; index<=n; index++){
        for(int wt= 0;wt<=capacity;wt++){
            int include = 0;
                if(weight[index] <= wt)
                    include = value[index] + prev[wt-weight[index]];
            int exclude = 0 + prev[wt];
            curr[wt] = max(include,exclude);
        }
        prev = curr;
    }
    return curr[capacity];//n is already sent size-1 by function
}

int spaceOptimized2(int weight[],int value[],int n,int capacity){
    vector<int>curr(capacity+1,0);

    for(int wt = weight[0];wt <= capacity;wt++){
        if(weight[0] <= capacity){
            curr[wt] = value[0];
        }
        else{
            curr[wt] = 0;
        }
    }

    for(int index=1; index<=n; index++){
        for(int wt=capacity;wt >= 0;wt--){//going from right to left to prevent overriding values
            int include = 0;
                if(weight[index] <= wt)
                    include = value[index] + curr[wt-weight[index]];
            int exclude = 0 + curr[wt];
            curr[wt] = max(include,exclude);
        }
    }
    return curr[capacity];//n is already sent size-1 by function
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

    // int ans = solveTab(weight,value,n-1,capacity);

    // int ans = spaceOptimized(weight,value,n-1,capacity); 

    int ans = spaceOptimized2(weight,value,n-1,capacity);

    cout<<"Ans is -> "<<ans<<endl;
    return 0;
}