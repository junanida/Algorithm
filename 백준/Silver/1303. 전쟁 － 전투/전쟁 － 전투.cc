#include <iostream>
#include <queue>
using namespace std;
int M, N;
char BW[101][101];
bool visited[101][101] = { false, };
int num;
const int dx[4] = { -1, 0, 1, 0 };
const int dy[4] = { 0, 1, 0, -1 };

void dfs(int x, int y, char bw)
{
	visited[x][y] = true;
	num++;
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i], ny = y + dy[i];
		if (nx < 0 || ny < 0 || nx >= M || ny >= N)
		{
			continue;
		}
		if (visited[nx][ny] == false && BW[nx][ny] == bw)
		{
			dfs(nx, ny, bw);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> BW[i][j];
		}
	}

	int power_B = 0;
	int power_W = 0;

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (visited[i][j] != true)
			{
				num = 0;
				dfs(i, j, BW[i][j]);
				if (BW[i][j] == 'B')
				{
					power_B += num * num;
				}
				else if (BW[i][j] == 'W')
				{
					power_W += num * num;
				}
			}
		}
	}
	cout << power_W << " " << power_B << "\n";

	return 0;
}