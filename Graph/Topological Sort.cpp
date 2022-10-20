#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 2;

int n;
vector<int> adj[N];
vector<bool>vis(N, 0);
vector<int> topo;
void dfs(int start) {
	vis[start] = 1;
	for (auto x : adj[start]) {
		if (!vis[x])dfs(x);
	}
	topo.push_back(start);
}
int main() {
	// Take the input for graph, n,m and edges.
	// Insert edges in 'adj', initialize 'vis' with all 0 and clear 'topo'.

	topologicalSort();
	if (topo.size() != n) {
		cout << "Graph has cycle so topo sort doesn't exists" << endl;
	}
	else {
		cout << "This is the topological ordering" << endl;
		for (auto &x : topo)cout << x << " "; cout << endl;
	}
	return 0;
}
