#include <iostream>
#include <stack>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	int num;
	stack<int> S;

	// 입력 값에 따라 스택에 pop할지 push할지
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		if (num == 0)
		{
			S.pop();
		}
		else if (num > 0)
		{
			S.push(num);
		}
	}

	int sum = 0;
	// 스택에 남아있는 값 더하기
	while (!S.empty())
	{
		sum += S.top();
		S.pop();
	}
	cout << sum << "\n";

	return 0;
}