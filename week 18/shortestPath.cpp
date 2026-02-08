#include <iostream>
#include<unordered_map>
#include<list>
#include<queue>
#include<stack>
#include<algorithm>
#include<set>
#include<limits.h>

// #include<bits/stdc++.h>
using namespace std;


class graph {
	public:
	unordered_map<int, list<pair<int,int> > > adjList;

	void addEdge(int u, int v, int wt, bool direction) {
		//direction = 1 -> undirected graph
		//direction => 0 -> directed graph;
		adjList[u].push_back({v,wt});
		if(direction == 1) {
			adjList[v].push_back({u,wt});
		}
	}

	void printAdjList() {
		for(auto i: adjList) {
			cout << i.first <<"-> ";
			for(auto j: i.second) {
				cout << "(" << j.first<<", "<<j.second<<"), ";
			}
			cout << endl;
		}
	}

	void shortestPathBfs(int src, int dest) {
		queue<int> q;
		unordered_map<int,bool> visited;
		unordered_map<int,int> parent;

		//inital steps for src
		q.push(src);
		visited[src] = 1;
		parent[src] = -1;

		while(!q.empty()) {
			int fNode = q.front();	q.pop();

			for(auto nbr: adjList[fNode]) {
				if(!visited[nbr.first]) {
					q.push(nbr.first);
					visited[nbr.first] = 1;
					parent[nbr.first] = fNode;
				}
			}
		}

		//store path in ans, after traversing in the parent array
		vector<int> ans;
		int node = dest;
		while(node != -1) {
			ans.push_back(node);
			node = parent[node];
		}

		reverse(ans.begin(), ans.end());

		cout << "printing ANs: " << endl;
		for(auto i: ans) {
			cout << i<<", ";
		}
		cout << endl;
		
	}


	void topoSortDfs(int src, unordered_map<int, bool>& visited, stack<int>& ans) {
		
		visited[src] = true;

		for(auto neighbour: adjList[src]) {
			if(!visited[neighbour.first] ) {
				topoSortDfs(neighbour.first, visited, ans);
			}
		}

		//while returning, store the node in stack
		cout << "Pushing " << src << endl;
		ans.push(src);
	}

 	void shortestpathDfs(stack<int> topoOrder, int n) {
		vector<int> dist(n, INT_MAX);

		int src = topoOrder.top();
		topoOrder.pop();
		dist[src] = 0;


		for(auto nbr: adjList[src]) { 
			if(dist[src] + nbr.second < dist[nbr.first]) {
				dist[nbr.first] = dist[src] + nbr.second;
			}
		}		
			

		while(!topoOrder.empty()) {

			int topElement = topoOrder.top();
			topoOrder.pop();

			if(dist[topElement] != INT_MAX) {
				for(auto nbr: adjList[topElement]) {
					if(dist[topElement] + nbr.second < dist[nbr.first]) {
						dist[nbr.first] = dist[topElement] + nbr.second;
					}
				}
			}
		}

		cout << "Printing Ans: " << endl;
		for(int i=0; i<n; i++) {
			cout << i <<"-> " << dist[i] << endl;
		}
	}

	void shortestDistDijkstra(int src, int n) {
		vector<int> dist(n,INT_MAX);
		set<pair<int,int> > st;
		//initial steps
		dist[src] = 0;
		st.insert(make_pair(0,src));

		while(!st.empty() ) {
			//fetch the smallest or first eklement from set
			auto topElement = *(st.begin());
			auto [distance, node] = topElement;
			//pop from set
			st.erase(st.begin());

			//neighbour traverse
			for(auto [v, d]: adjList[node]) {
				if(distance + d < dist[v]) {
					//mujhe distance update krna h 
					//finding entry in set
					auto result = st.find(make_pair(dist[v], v));
					//if found, then remove
					if(result != st.end()) {
						st.erase(result);
					}
					//updation in dist array and set
					dist[v] = distance + d;
					st.insert(make_pair(dist[v], v)); 
				}
			}
			
		}

		cout << "printing ans:" << endl;
		for(int i=0; i<n; i++) {
			cout << dist[i] <<", ";
		}cout << endl;
		
	}

};

int main() {
	graph g;

	// g.addEdge(0,1,5,0);
	// g.addEdge(0,2,3,0);
	// g.addEdge(2,1,2,0);
	// g.addEdge(1,3,3,0);
	// g.addEdge(2,3,5,0);
	// g.addEdge(2,4,6,0);
	// g.addEdge(4,3,1,0);

	g.addEdge(6,3,2,1);
	g.addEdge(6,1,14,1);
	g.addEdge(3,1,9,1);
	g.addEdge(3,2,10,1);
	g.addEdge(1,2,7,1);
	g.addEdge(2,4,15,1);
	g.addEdge(4,3,11,1);

	g.addEdge(6,5,9,1);
	g.addEdge(4,5,6,1);
 
	g.printAdjList();

	g.shortestDistDijkstra(6,7);// inf 11 12 2 13 9 0

	// stack<int> topoOrder;
	// unordered_map<int, bool> visited;
	// g.topoSortDfs(0, visited, topoOrder);
	// g.shortestpathDfs(topoOrder,5);
	

	// int src = 0;
	// // int dest = 4;

	// g.shortestPathBfs(src, dest);


	return 0;
}