#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<int> arr(N, 0);
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	int count = 0;

	for (int k = 0; k < N; k++)
	{
		long find = arr[k];
		int start_index = 0;
		int end_index = N - 1;

		while (start_index < end_index)
		{
			if (arr[start_index] + arr[end_index] == find)
			{
				if (start_index != k && end_index != k)
				{
					count++;
					break;
				}
				else if (start_index == k)
				{
					start_index++;
				}
				else if (end_index == k)
				{
					end_index--;
				}
			}
			else if (arr[start_index] + arr[end_index] < find)
			{
				start_index++;
			}
			else
			{
				end_index--;
			}
		}
	}
	cout << count << "\n";
}