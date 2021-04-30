#include<bits/stdc++.h>
using namespace std;

#define MAX 505
/*
	0 -> not processed
	1 -> processing
	2 -> processed
*/
vector<int> state(MAX);
bool existCycle(vector<vector<int>> &adj, int u) {
	state[u] = 1;
	for(int i = 0; i < adj[u].size(); i++) {
		int v = adj[u][i];
		if(state[v] == 2) continue;
		if(state[v] == 1) return true;
		if(existCycle(adj, v)) return true;
	}
	state[u] = 2;
	return false;
}

vector<int> last(MAX);
// Exist a clycle and which edges are part of the cycle
bool edgesOfCycle(vector<vector<int>> &adj, vector<pair<int, int>> &cycle, int u) {
	state[u] = 1;
	for(int i = 0; i < adj[u].size(); i++) {
		int v = adj[u][i];
		if(state[v] == 2) continue;
		if(state[v] == 1) {
			// Find cycle
			int start = v, current = u;
			cycle.push_back(make_pair(u, v));
			while(start != current) {
				cycle.push_back(make_pair(last[current], current));
				current = last[current]; 
			}
			return true;
		}
		last[v] = u;
		if(edgesOfCycle(adj, cycle, v)) return true;
	}
	return false;
}

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> adj(n+1, vector<int>(0));
	for(int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
	}

	vector<pair<int, int>> cycle;
	if(edgesOfCycle(adj, cycle, 1)) {
		cout << "edges of cycle: " << endl;
		for(int i = 0; i < cycle.size(); i++) {
			cout << cycle[i].first << " " << cycle[i].second << endl;
		}
	}
}	