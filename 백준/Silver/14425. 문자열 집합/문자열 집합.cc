#include <iostream>
#include <set>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	set<string> s;
	string str;
	int n, m;

	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		cin >> str;
		s.insert(str);
	}

	int count = 0;

	for (int i = 0; i < m; ++i)
	{
		cin >> str;
		if (s.find(str) != s.end())
		{
			++count;
		}
	}
	cout << count << '\n';
	return 0;
}