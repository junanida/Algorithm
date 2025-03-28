#include <iostream>
#include <vector>
using namespace std;

void merge_sort(int s, int e);
static vector<int> A;
static vector<int> tmp;
static long result;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	A = vector<int>(n + 1, 0);
	tmp = vector<int>(n + 1, 0);

	for (int i = 1; i <= n; i++)
	{
		cin >> A[i];
	}

	result = 0;
	merge_sort(1, n);
	cout << result << "\n";
}

void merge_sort(int s, int e)
{
	if (e - s < 1)
	{
		return;
	}

	int m = s + (e - s) / 2;
	merge_sort(s, m);
	merge_sort(m + 1, e);

	for (int i = s; i <= e; i++)
	{
		tmp[i] = A[i];
	}

	int k = s;
	int index1 = s;
	int index2 = m + 1;

	while (index1 <= m && index2 <= e)
	{
		if (tmp[index1] > tmp[index2])
		{
			A[k] = tmp[index2];
			result = result + index2 - k;
			k++;
			index2++;
		}
		else
		{
			A[k] = tmp[index1];
			k++;
			index1++;
		}
	}

	while (index1 <= m)
	{
		A[k] = tmp[index1];
		k++;
		index1++;
	}
	while (index2 <= e)
	{
		A[k] = tmp[index2];
		k++;
		index2++;
	}
}