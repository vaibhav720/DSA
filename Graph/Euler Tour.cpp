#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 2;

vector<int> adj[N];
vector<int> euler;
vector<bool>vis(N, false);
vector<int> height(N);
vector<int> first(N);
void dfs(int start, int h) {
	vis[start] = 1;
	height[start] = h;
	first[start] = euler.size();
	// Add to tour on first arrival on 'start'.
	euler.push_back(start);
	for (auto x : adj[start]) {
		if (!vis[x]) {
			dfs(x, h + 1);
			euler.push_back(start);
			// Once, a sub-graph is over insert 'start' again.
		}
	}
}
int main() {
	// Take the input for graph, n,m and edges.
	// Insert edges in 'adj', initialize 'vis' with all 0 and clear 'topo'.

	dfs(1, 0); // start with any node.
	return 0;
}
