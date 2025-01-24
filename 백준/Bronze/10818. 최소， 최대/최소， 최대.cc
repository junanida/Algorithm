#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);

    int max = -1000001;
    int min = 1000001;

    int input;

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> input;

        if (input > max) {
            max = input;
        }

        if (input < min) {
            min = input;
        }
    }
    cout << min << " " << max;
    return 0;
}