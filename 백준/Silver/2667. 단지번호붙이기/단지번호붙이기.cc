#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n;
vector<vector<int>> map;
vector<vector<bool>> visited;
vector<int> complexSizes;

// 상, 하, 좌, 우
int dy[4] = { -1, 1, 0, 0 };
int dx[4] = { 0, 0, -1, 1 };

int bfs(int y, int x) {
    queue<pair<int, int>> q;
    q.push({ y, x });
    visited[y][x] = true;

    int count = 1;

    while (!q.empty()) {
        pair<int, int> current = q.front();
        q.pop();
        int cy = current.first;
        int cx = current.second;


        for (int i = 0; i < 4; i++) {
            int ny = cy + dy[i];
            int nx = cx + dx[i];

            if (ny >= 0 && ny < n && nx >= 0 && nx < n) {
                if (map[ny][nx] == 1 && !visited[ny][nx]) {
                    visited[ny][nx] = true;
                    q.push({ ny, nx });
                    count++;
                }
            }
        }
    }

    return count;
}

int main() {
    cin >> n;
    map.resize(n, vector<int>(n));
    visited.resize(n, vector<bool>(n, false));

    // 입력
    for (int i = 0; i < n; i++) {
        string line;
        cin >> line;
        for (int j = 0; j < n; j++) {
            map[i][j] = line[j] - '0';
        }
    }

    // 모든 칸 탐색
    for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++) {
            if (map[y][x] == 1 && !visited[y][x]) {
                int size = bfs(y, x);
                complexSizes.push_back(size);
            }
        }
    }

    // 결과 출력
    sort(complexSizes.begin(), complexSizes.end());

    cout << complexSizes.size() << '\n';
    for (int size : complexSizes) {
        cout << size << '\n';
    }

    return 0;
}
