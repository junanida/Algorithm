#include <unordered_map>
#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	unordered_map<string, string> passMap;
	cin >> n >> m;
	string web, pass;
	for (int i = 0; i < n; ++i)
	{
		cin >> web >> pass;
		passMap[web] = pass;
	}
	string findPass;
	for (int i = 0; i < m; ++i)
	{
		cin >> findPass;
		cout << passMap[findPass] << '\n';
	}
	return 0;
}