#include<bits/stdc++.h>
using namespace std;

int findParent(int node, vector<int>&parent){
    if(parent[node] == node)
        return node;
    return parent[node] = findParent(parent[node], parent);
}

void unionSet(int u, int v, vector<int>&parent, vector<int>&rank){
    u = findParent(u,parent);
    v = findParent(v,parent);

    if(rank[u] < rank[v]){
        parent[u] = v;
        rank[v]++;
    }
    else{
        parent[v] = u;
        rank[u]++;
    }
}

int spanningTree(int n, vector<vector<int>>adj[]){
    vector<int>parent(n);
    vector<int>rank(n,0);

    for(int u=0;u<n;u++)
        parent[u] = u;

    vector<vector<int>>edges;//{u,v,w}
    for(int u=0;u<n;u++){
        for(auto edge: adj[u]){
            edges.push_back({u, edge[0], edge[1]});
        }
    }
    sort(edges.begin(),edges.end(),[](auto a,auto b){
        return a[2] < b[2];
    });

    int ans = 0;
    for(auto edge: edges){
        int u = edge[0];
        int v = edge[1];
        int w = edge[2];
        u = findParent(u, parent);
        v = findParent(v, parent);

        if(u != v){
            unionSet(u,v,parent,rank);
            ans += w;
        }
    }
    return ans;
}
int main(){
    
    return 0;
}