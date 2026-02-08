#include<bits/stdc++.h>
class DSU {
private:
    vector<int> parent, rank, weights;
public:
    DSU(int n) {
        parent = vector<int>(n);
        rank = vector<int>(n, 0);
        weights = vector<int>(n, 131071);
        for (int i = 0; i < n; ++i)
            parent[i] = i;
    }
    int findParent(int u) {
        // if (u != parent[u])
        //     parent[u] = findParent(parent[u]);
        // return parent[u];
        if(parent[u] == u)
            return u;
        return parent[u] = findParent(parent[u]);
    }
    void union_(int u, int v, int weight) { // just change this logic
        int u = findParent(u);
        int v = findParent(v);
        if (rank[u] < rank[v])
            parent[u] = v;
        else
            parent[v] = u;
        weights[u] = weights[v] = weights[u] & weights[v] & weight;
        if (rank[u] == rank[v])
            rank[u]++;
    }
    int minimumCostOfWalk(int u, int v) {
        if (u == v) return 0;
        if (findParent(u) != findParent(v)) return -1;
        return weights[findParent(u)];
    }
};

int main(){
    int n = 10;
    DSU uf(n);
    
}