#include <iostream>
#include <queue>
#define MAX 101

using namespace std;

int N, M;
// 미로 표현용
int maze[MAX][MAX];
// 방문 기록용
int visited[MAX][MAX];
// 이동칸 기록용
int dist[MAX][MAX];

// 행 상하좌우 이동
int row_move[4] = { -1, 1, 0, 0 };
// 열 상하좌우 이동
int col_move[4] = { 0, 0, -1, 1 };

// 탐색 좌표 저장용 queue
queue<pair<int, int>> q;

void bfs(int row, int col)
{
	// 입력 받은 시작 좌표를 방문처리
	visited[row][col] = 1;

	// queue에 삽입
	q.push(make_pair(row, col));

	// 시작 좌표까지 이동한 칸을 1로 지정
	dist[row][col]++;

	// 모든 좌표를 탐색할 때까지 반복
	while (!q.empty())
	{
		int row = q.front().first;
		int col = q.front().second;

		q.pop();

		// 현재 좌표와 상하좌우로 인접한 좌표 확인
		for (int i = 0; i < 4; i++)
		{
			// 현재 좌표와 상하좌우로 인접한 좌표
			int row_new = row + row_move[i];
			int col_new = col + col_move[i];

			// 인접한 좌표가 미로가 내에 존재하는지, 방문한 적이 없는지, 이동이 가능한지 확인
			if ((0 <= row_new && row_new < N) && (0 <= col_new && col_new < M) && !visited[row_new][col_new] && maze[row_new][col_new] == 1)
			{
				// 인접 좌표는 방문한 것으로 저장
				visited[row_new][col_new] = 1;
				// 인접 좌표를 qeueue에 삽입
				q.push(make_pair(row_new, col_new));
				// 인접 좌표까지 이동한 거리 저장
				dist[row_new][col_new] = dist[row][col] + 1;
			}

		}
	}
}

int main()
{
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		string row;
		cin >> row;

		for (int j = 0; j < M; j++)
		{
			maze[i][j] = row[j] - '0';
		}
	}
	bfs(0, 0);

	cout << dist[N - 1][M - 1];
}