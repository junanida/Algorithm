#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    int minDiff = A.size();

    for (int i = 0; i <= B.size() - A.size(); ++i) {
        int diff = 0;
        for (int j = 0; j < A.size(); ++j) {
            if (A[j] != B[i + j]) {
                ++diff;
            }
        }
        minDiff = min(minDiff, diff);
    }

    cout << minDiff << '\n';

    return 0;
}
