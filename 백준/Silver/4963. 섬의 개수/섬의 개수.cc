#include <iostream>
#include <vector>
using namespace std;

int w, h;
int map[50][50];
bool visited[50][50];

int dx[8] = { -1, 1, 0, 0, -1, -1, 1, 1 };
int dy[8] = { 0, 0, -1, 1, -1, 1, -1, 1 };

void DFS(int x, int y)
{
	visited[y][x] = true;

	for (int dir = 0; dir < 8; dir++)
	{
		int nx = x + dx[dir];
		int ny = y + dy[dir];

		if (nx >= 0 && nx < w && ny >= 0 && ny < h)
		{
			if (!visited[ny][nx] && map[ny][nx] == 1)
			{
				DFS(nx, ny);
			}
		}
	}
}

int main()
{
	while (true)
	{
		cin >> w >> h;
		if (w == 0 && h == 0) break;

		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				cin >> map[i][j];
				visited[i][j] = false;
			}
		}

		int islandCount = 0;

		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				if (map[i][j] == 1 && !visited[i][j])
				{
					DFS(j, i);
					islandCount++;
				}
			}
		}
		cout << islandCount << '\n';
	}
	return 0;
}