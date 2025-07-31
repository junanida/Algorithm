#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> line(N);  // 학생 번호 줄
    for (int i = 0; i < N; ++i) {
        cin >> line[i];
    }

    stack<int> waiting;  // 대기 공간
    int current = 1;     // 현재 간식 받을 번호

    for (int i = 0; i < N; ++i) {
        int num = line[i];

        // 지금 번호가 현재 간식 받을 번호면 그냥 간식 줌
        if (num == current) {
            current++;
        }
        else {
            // 아니라면 대기 공간에 push
            waiting.push(num);
        }

        // 대기 공간에서 간식 줄 수 있는 학생은 계속 줌
        while (!waiting.empty() && waiting.top() == current) {
            waiting.pop();
            current++;
        }
    }

    // 끝났는데 current가 N+1까지 잘 갔다면 성공
    if (current == N + 1) {
        cout << "Nice\n";
    }
    else {
        cout << "Sad\n";
    }

    return 0;
}
