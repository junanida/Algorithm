#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int M;
	cin >> M;

	vector<int> arr(N, 0);
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	int count = 0;
	int start_index = 0;
	int end_index = N - 1;

	sort(arr.begin(), arr.end());
	
	while (start_index < end_index)
	{
		if (arr[start_index] + arr[end_index] < M)
		{
			start_index++;
		}
		else if (arr[start_index] + arr[end_index] > M)
		{
			end_index--;
		}
		else
		{
			count++;
			start_index++;
			end_index--;
		}
	}
	cout << count << "\n";
}