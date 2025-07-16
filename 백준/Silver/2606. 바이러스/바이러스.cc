#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
int cnt = 0;

void dfs(int node)
{
	visited[node] = true;
	for (int next : adj[node])
	{
		if (!visited[next])
		{
			cnt++;
			dfs(next);
		}
	}
}
int main()
{
	int N, M;
	cin >> N >> M;
	adj.resize(N + 1);
	visited.resize(N + 1, false);

	for (int i = 0; i < M; i++)
	{
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	dfs(1);
	cout << cnt << endl;

	return 0;
}