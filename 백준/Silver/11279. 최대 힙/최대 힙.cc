#include <iostream>
#include <queue>
using namespace std;

struct compare {
	bool operator()(int o1, int o2) {
		int first_abs = abs(o1);
		int second_abs = abs(o2);
		if (first_abs == second_abs) {
			// 절댓값이 같을 때는 음수 우선 정렬
			return o1 > o2;
		}
		else {
			// 절댓값을 기준으로 정렬
			return first_abs < second_abs;
		}
	}
};
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	priority_queue<int, vector<int>, compare> MyQueue;

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int request;
		cin >> request;

		if (request == 0) {
			if (MyQueue.empty()) {
				cout << "0\n";
			}
			else
			{
				cout << MyQueue.top() << '\n';
				MyQueue.pop();
			}
		}
		else
		{
			MyQueue.push(request);
		}
	}

}