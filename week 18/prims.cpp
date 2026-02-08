#include<bits/stdc++.h>
using namespace std;

int minValueNode(vector<int>&key, vector<int>&mst){
    int temp = INT_MIN;
    int index = -1;
    for(int i=0;i<key.size();i++){
        if(key[i] < temp && mst[i] == false){
            temp = key[i];
            index = i;
        }
    }
    return index;
}
int spanningTree(int n, vector<vector<int>>adj[]){
    vector<int>key(n,INT_MAX);
    vector<int>mst(n,false);
    vector<int>parent(n,-1);
    key[0] = 0;
    while(true){
        int u = minValueNode(key,mst);//fetching min node from key list
        if(u == -1) break;//when all the nodes are filled
        mst[u] = true;

        for(auto nbr: adj[u]){//finding the min nbr of u
            int v = nbr[0];
            int w = nbr[1];
            if(mst[v] = false && w < key[v]){
                key[v] = w;
                parent[v] = u;
            }
        }
    }

    int sum = 0;
    for(int u=0;u<parent.size();u++){
        if(parent[u] == -1) continue;
        for(auto nbr: adj[u]){
            int v = nbr[0];
            int w = nbr[1];
            if(v == parent[u])
                sum += w;
        }
    }
    return sum;
}
int main(){
    
    return 0;
}