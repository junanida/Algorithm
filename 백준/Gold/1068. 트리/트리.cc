#include <iostream>
#include <vector>

using namespace std;

int cnt = 0, input;
vector<vector<int>> graph;
vector<bool> visited;

void dfs(int i);

int main()
{
	int N;
	vector<bool> rootNode;
	cin >> N;
	graph.resize(N);
	visited.resize(N, false);
	rootNode.resize(N, false);

	for (int i = 0; i < N; ++i)
	{
		cin >> input;
		if (input == -1)
		{
			rootNode[i] = true;
		}
		else
		{
			graph[input].push_back(i);
		}
	}
	cin >> input;
	for (int i = 0; i < rootNode.size(); ++i)
	{
		if (rootNode[i])
		{
			dfs(i);
		}
	}
	cout << cnt;
}

void dfs(int i)
{
	if (i == input)
	{
		return;
	}
	if (i != -1 && graph[i].size() == 0 || (graph[i].size() == 1 && graph[i][0] == input))
	{
		++cnt;
		return;
	}
	for (int idx : graph[i])
	{
		if (visited[idx])
		{
			continue;
		}
		visited[i] = true;
		dfs(idx);
	}
}