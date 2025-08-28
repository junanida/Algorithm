#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
vector<vector<int>> board;
vector<vector<bool>> visited;

int dy[4] = { -1, 1, 0 ,0 };
int dx[4] = { 0, 0, -1, 1 };

int bfs(int y, int x)
{
	queue<pair<int, int>> q;
	q.push({ y, x });
	visited[y][x] = true;
	int area = 1;

	while (!q.empty())
	{
		pair<int, int> cur = q.front();
		q.pop();
		int cy = cur.first;
		int cx = cur.second;

		for (int i = 0; i < 4; i++)
		{
			int ny = cy + dy[i], nx = cx + dx[i];
			if (ny >= 0 && ny < n && nx >= 0 && nx < m)
			{
				if (!visited[ny][nx] && board[ny][nx] == 1)
				{
					visited[ny][nx] = true;
					q.push({ ny, nx });
					area++;
				}
			}
		}
	}
	return area;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;
	board.assign(n, vector<int>(m));
	visited.assign(n, vector<bool>(m, false));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> board[i][j];
		}
	}

	int count = 0, maxArea = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (board[i][j] == 1 && !visited[i][j])
			{
				int area = bfs(i, j);
				count++;
				maxArea = max(maxArea, area);
			}
		}
	}

	cout << count << '\n' << maxArea << '\n';
	return 0;
}