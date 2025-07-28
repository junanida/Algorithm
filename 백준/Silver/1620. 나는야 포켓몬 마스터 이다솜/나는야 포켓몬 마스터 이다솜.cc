#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    unordered_map<string, int> nameToNumber;
    vector<string> numberToName(n + 1);  // 1번부터 시작

    for (int i = 1; i <= n; ++i) {
        string name;
        cin >> name;
        nameToNumber[name] = i;
        numberToName[i] = name;
    }

    for (int i = 0; i < m; ++i) {
        string query;
        cin >> query;

        if (isdigit(query[0])) {
            // 숫자인 경우
            int num = stoi(query);
            cout << numberToName[num] << '\n';
        }
        else {
            // 이름인 경우
            cout << nameToNumber[query] << '\n';
        }
    }

    return 0;
}
