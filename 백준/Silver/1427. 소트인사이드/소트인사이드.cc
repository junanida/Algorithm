#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string num;
	cin >> num;

	vector<int>A(num.length(), 0);

	for (int i = 0; i < num.length(); i++)
	{
		A[i] = stoi(num.substr(i, 1));
	}

	sort(A.begin(), A.end(), greater<>());

	for (int i = 0; i < num.length(); i++)
	{
		cout << A[i];
	}
}