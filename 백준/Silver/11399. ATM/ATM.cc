#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	vector<int> A(n, 0);
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	sort(A.begin(), A.end());

	vector<int> SUM(n, 0);
	SUM[0] = A[0];
	int sum = SUM[0];

	for (int i = 1; i < n; i++)
	{
		SUM[i] = SUM[i - 1] + A[i];
		sum += SUM[i];
	}
	cout << sum;
}