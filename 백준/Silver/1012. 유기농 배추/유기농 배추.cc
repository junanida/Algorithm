#include <iostream>
#include <vector>
using namespace std;

int dx[] = { 0, 0, -1, 1 }; // 상, 하, 좌, 우
int dy[] = { -1, 1, 0, 0 };

int M, N, K;
vector<vector<int>> farm;
vector<vector<bool>> visited;

void dfs(int y, int x) {
    visited[y][x] = true;
    for (int dir = 0; dir < 4; dir++) {
        int ny = y + dy[dir];
        int nx = x + dx[dir];
        if (ny >= 0 && ny < N && nx >= 0 && nx < M) { // 유효 범위
            if (farm[ny][nx] == 1 && !visited[ny][nx]) {
                dfs(ny, nx);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        cin >> M >> N >> K;

        farm.assign(N, vector<int>(M, 0));
        visited.assign(N, vector<bool>(M, false));

        for (int i = 0; i < K; i++) {
            int x, y;
            cin >> x >> y;
            farm[y][x] = 1;
        }

        int worm_count = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (farm[i][j] == 1 && !visited[i][j]) {
                    dfs(i, j);
                    worm_count++;
                }
            }
        }
        cout << worm_count << '\n';
    }
    return 0;
}
