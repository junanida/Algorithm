#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	int count = 1;
	int start_index = 1;
	int end_index = 1;
	int sum = 1;

	while (end_index != N)
	{
		// 답을 찾았을 때
		if (sum == N)
		{
			count++;
			end_index++;
			sum = sum + end_index;
		}
		// 현재 합이 답보다 클 때
		else if (sum > N)
		{
			sum = sum - start_index;
			start_index++;
		}
		// 현재 합이 답보다 작을 때
		else
		{
			end_index++;
			sum = sum + end_index;
		}
	}
	cout << count << "\n";
}