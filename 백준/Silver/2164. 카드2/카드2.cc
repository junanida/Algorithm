#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	queue<int> myQueue;

	// 카드를 큐에 저장
	for (int i = 1; i <= N; i++)
	{
		myQueue.push(i);
	}

	// 카드가 1장 남을 때까지
	while (myQueue.size() > 1)
	{
		// 맨 위 카드를 버림
		myQueue.pop();
		// 그 다음 수를 맨 앞으로 보냄
		myQueue.push(myQueue.front());
		// 맨 앞으로 보내고 난 후 그 자리에서 제거
		myQueue.pop();
	}
	cout << myQueue.front();

}