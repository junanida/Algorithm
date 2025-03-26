#include <iostream>
#include <vector>
using namespace std;

static vector<vector <int>> A;
static vector<bool> V;
static bool arrive;
void dfs(int now, int depth);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	arrive = false;
	A.resize(n);
	V = vector<bool>(n, false);

	for (int i = 0; i < m; i++)
	{
		int s, e;
		cin >> s >> e;
		A[s].push_back(e);
		A[e].push_back(s);
	}

	for (int i = 0; i < n; i++)
	{
		dfs(i, 1);
		if (arrive)
		{
			break;
		}
	}

	if (arrive)
	{
		cout << 1 << "\n";
	}
	else
	{
		cout << 0 << "\n";
	}
}

void dfs(int now, int depth)
{
	if (depth == 5 || arrive)
	{
		arrive = true;
		return;
	}
	V[now] = true;

	for (int i : A[now])
	{
		if (!V[i])
		{
			dfs(i, depth + 1);
		}
	}
	V[now] = false;
}